// $Id: Infix_To_Postfix_Command.cpp  2015-02-28 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Infix_To_Postfix_Command.h"


//
//Constructor
//
Infix_To_Postfix_Command::Infix_To_Postfix_Command(void)
	
{

}


//
//Destructor
//
Infix_To_Postfix_Command ::~Infix_To_Postfix_Command(void)
{

}

/*
bool Infix_To_Postfix_Command::infix_to_postfix_flyweight(const std::string & infix,Flyweight_Expr_Command_Factory & factory,Array <Expr_Command *> & postfix)
{
	return (this->infix_to_postfix(infix,factory,postfix));


}*/
//
//Infix to Postfix
//
bool Infix_To_Postfix_Command::infix_to_postfix(const std::string & infix,Expr_Command_Factory & factory,Array <Expr_Command *> & postfix , bool isFlyWeight) 
{
	std::istringstream input(infix); 

	std::string token; 

	std::string temp_string;

	Expr_Command * command = 0; 

	Stack <Expr_Command *> temp;

	long int number_value =0;

	int flag = 0;

	int flag_iterate_=-1;

	int flag_Open_=0;

	int flag_Close_= 0;

	int number_count = 0;

	int operator_count =0;

do
	 {
		 

		 input >> token;

		 if (token == "+")
		 {
			 command = factory.create_add_command ();
			 flag =1;
			 operator_count++;
		 }
		 else if (token == "-")
		 {
			 command = factory.create_subtract_command ();
			 flag =1;
			 operator_count++;
		 }

		 else if(token == "*")
		 {
			 command = factory.create_multiply_command();
			 flag =1;
			 operator_count++;
		 }
		 else if(token=="/")
		 {	
			 command = factory.create_divide_command();
			 flag =1;
			 operator_count++;
		 }
		 else if(token=="%") 
		 {
			 command = factory.create_modulus_command();
			 flag =1;
			 operator_count++;
		 }
		 else if (token=="(")
			{
			
			std::string infix_expr = "";
			
			int flag_Open = 1;
			
			int flag_Close = 0;

			while(!input.eof() && flag_Open != flag_Close)
			{
				input >> token;
				
				if(token=="(")
					flag_Open++;

				if(token==")")
					flag_Close++;
				
				if(flag_Open != flag_Close)
					infix_expr.append(token+" ");			
			}

			if(flag_Close != flag_Open)
			{
				std::cout<<"Invalid Expression Given"<<std::endl;

				return false;
			}
		
			int result;

			std::string infix_partial = infix_expr.substr(0, infix_expr.length() - 1);
		
			Array <Expr_Command *> postfix_partial(infix_partial.length());

			this->infix_to_postfix(infix_partial,factory,postfix_partial,isFlyWeight);
	
			Expr_Command_Iterator<Expr_Command *> iter(postfix_partial);

			Expr_Command_Iterator<Expr_Command *> del_iter= iter;

			Infix_To_Postfix_Command postfix_oper;
	
			postfix_oper.evaluate_postfix(iter,result , isFlyWeight);
			
			command = factory.create_number_command(result);

			number_count++;

			if(isFlyWeight)
				this->finally_clearCommands(del_iter);
			
			postfix.set(++flag_iterate_,command);
		 }
		 else 
		 {
					 
			 int i =0;
			
			 if(token[0]=='-' && std::isdigit(token[1]) && token.length()>=2)
			 {
				command = factory.create_number_command(atoi(token.c_str()));
				number_count++;
			
				postfix.set(++flag_iterate_,command);
				
			 }
			
		    else if(std::isdigit(token[0]) && token.length()>=1)
			 {
				 command = factory.create_number_command(atoi(token.c_str()));
				
				 postfix.set(++flag_iterate_,command);
				 number_count++;
			 }
			else
			 {
				 postfix.resize(flag_iterate_+1);
				
				 return clear_postfix_and_stack(postfix,temp);
				  
			 }

		 }
		
		 if(flag==1)
		 {
			

			 if(temp.is_empty())
			{
					temp.push(command);
			 }
			 else
			 {
				 if(temp.top()->get_precedence()!=4 && temp.top()->get_precedence() < command->get_precedence())
					 temp.push(command);
				 else
				 {
					 while(!temp.is_empty() && temp.top()->get_precedence()!=4 && temp.top()->get_precedence()>=command->get_precedence())
					 {
						 postfix.set(++flag_iterate_,temp.top());

						 temp.pop();
					 }
					 temp.push(command);
				 }
			 }
			 flag =0;
		 }

	 } while (!input.eof ()) ;

	 while(!temp.is_empty())
	 {
		 postfix.set(++flag_iterate_, temp.top());
		 
		 temp.pop();
	 }

	 postfix.resize(flag_iterate_+1);

	 
	 return true;
}


//
//Evaluate Postfix notation
//
bool Infix_To_Postfix_Command::evaluate_postfix (Expr_Command_Iterator<Expr_Command *> & iterator, int & result , bool isFlyWeight) 
{
	Stack <int> stack;

	Expr_Command_Iterator<Expr_Command *> * del_iter= &iterator;

	for (; !iterator.is_done (); iterator.advance()) {

		if (!(*iterator)->execute(stack))
			return false;
	}
	//If not a FlyWeight Do this 
	if(!isFlyWeight)
	{
	for (; !del_iter->is_done (); del_iter->advance())
		
			delete *(*del_iter); 
	}

	result = stack.top ();

	stack.pop();

	

	return true;
}

//
//Clear PostFix and Stack data 
//
bool Infix_To_Postfix_Command::clear_postfix_and_stack(Array <Expr_Command *> & postfix , Stack <Expr_Command *> &temp)
{
	 while(!temp.is_empty())
		temp.pop();

	 std::cout<<"Invalid Input Given "<<std::endl;
	
	 Expr_Command_Iterator<Expr_Command *> postfix1(postfix);
				  
	 for (; !postfix1.is_done (); postfix1.advance())
			delete *postfix1;
	
	 return false;
}

//
//Delete Elements after QUIT
//
bool Infix_To_Postfix_Command::finally_clearCommands(Expr_Command_Iterator<Expr_Command *> & iterator)
{
	for (; !iterator.is_done (); iterator.advance())
		if(*iterator != 0 && (*iterator)->get_precedence() == 3)
			delete *iterator;
	return true;
}