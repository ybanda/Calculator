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
//
//Infix to Postfix
//
bool Infix_To_Postfix_Command::infix_to_postfix (const std::string & infix,Expr_Command_Factory & factory,Array <Expr_Command *> & postfix) 
{
	std::istringstream input(infix); 

	std::string token; 

	std::string temp_string;

	Expr_Command * command = 0; 

	Stack <Expr_Command *> temp;

	long int number_value =0;

	int flag = 0;

	int flag_iterate_=-1;

loop:do
	 {

		 input >> token;

		 if (token == "+")
		 {
			 command = factory.create_add_command ();
			 flag =1;
		 }
		 else if (token == "-")
		 {
			 command = factory.create_subtract_command ();
			 flag =1;
		 }

		 else if(token == "*")
		 {
			 command = factory.create_multiply_command();
			 flag =1;
		 }
		 else if(token=="/")
		 {	
			 command = factory.create_divide_command();
			 flag =1;
		 }
		 else if(token=="%") 
		 {
			 command = factory.create_modulus_command();
			 flag =1;
		 }
		 else if(token=="(" )
		 {
			 command = factory.create_bracket_command();
			 temp.push(command);
		 }
		 else if(token == ")")
		 {
			 while (!temp.is_empty() && temp.top()->get_precedence() != 4)
			 {
				 postfix.set(++flag_iterate_,temp.top());
				 temp.pop();
			 }
			
			 if(temp.is_empty())
			 {
				 postfix.resize(flag_iterate_+1);
				 return clear_postfix_and_stack(postfix,temp);
			 }
			 else {
				 delete temp.top();
				 temp.pop();
			 }
		 }
		 else 
		 {
			
			
			 int i =0;
			 if(token[0]=='-' && std::isdigit(token[1]) && token.length()>=2)
			 {
				command = factory.create_number_command(atoi(token.c_str()));
				 postfix.set(++flag_iterate_,command);
				//
			 }
			
		    else if(std::isdigit(token[0]) && token.length()>=1)
			 {
				 command = factory.create_number_command(atoi(token.c_str()));
				 postfix.set(++flag_iterate_,command);
			 }
			else
			 {
				 postfix.resize(flag_iterate_+1);
				return clear_postfix_and_stack(postfix,temp);
				  
			 }

		 }
		 if(flag==1)
		 {


			 if(temp.is_empty() || temp.top()->get_precedence() == 4)
				 temp.push(command);
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
		 if(temp.top()->get_precedence()==4)
		 {
		postfix.resize(flag_iterate_+1);
			 return clear_postfix_and_stack(postfix,temp);
		 }
			 postfix.set(++flag_iterate_, temp.top());
		 temp.pop();
	 }

	 postfix.resize(flag_iterate_+1);

	 return true;
}

//
//Evaluate Postfix notation
//
bool Infix_To_Postfix_Command::evaluate_postfix (Expr_Command_Iterator<Expr_Command *> & iterator, int & result) 
{
	Stack <int> stack;
	Expr_Command_Iterator<Expr_Command *> del_iter= iterator;
	for (; !iterator.is_done (); iterator.advance()) {
		if (!(*iterator)->execute(stack))
			return false;

	// Yashwanth, you should not delete the commands here since it
    // prevents you from reusing them again. You should delete all
    // the commands after you have finished evaluating the expression.
	
		//Dr.Hill , Handled outside the for loop
		
	
	
	}
	//Expr_Command_Iterator<Expr_Command *> del_iter= iterator;
		//Dr.Hill, Deleted the Expr_Command during the iteration 
	for (; !del_iter.is_done (); del_iter.advance())
		delete *del_iter;

	result = stack.top ();

	stack.pop();

	return true;
}
//
//clear postfix iterator values and the values in the stack
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
