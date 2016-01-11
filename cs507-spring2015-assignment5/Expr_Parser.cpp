// $Id: Expr_Parser.cpp  2015-03-25 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#include "Expr_Parser.h"
#include "Eval_Expr_Tree.h"


//
//Default Constructor Initialisation
//
Expr_Parser::Expr_Parser(void)
{

}

//
//Default Constructor Initialisation
//
Expr_Parser::~Expr_Parser(void)
{

}

//
//Method to parse the expression
//
bool Expr_Parser::parse_expr(std::string & infix, Expr_Builder & b, Tree_Factory_Builder & factory)
{
	
	std::istringstream input(infix);

	Expr_Node * node = 0;
	
	std::string token;

	int flag_Open = 0;

	int flag_Close = 0;

	//Starting a new Expression
	b.build_expression();
	
	while (!input.eof ())
	{
		input >> token;

		if (token == "+") 
			b.build_add_operand(factory);
		
		else if (token=="-")
			b.build_subtract_operand(factory);

		else if (token =="*")
			b.build_multiply_operand(factory);

		else if (token =="/")
		
			b.build_divide_operand(factory);
		
		else if (token =="%")
		
				b.build_modulus_operand(factory);
				
		else if(token.length()==1 && (std::isdigit(token[0])) )
		
				b.build_number(factory,atoi(token.c_str()));
		
		else if(token.length()>1 )
		{
			size_t index = 0;
						
			if(token[0]=='-') 
				index = 1;

			for(; index<token.length(); ++index)
			{

				if(!std::isdigit(token[index]))
				{
					std::cout<<"Invalid input Given ::"<<std::endl;

					return false;
				}
			}

			b.build_number(factory,atoi(token.c_str()));

	}
		else if (token=="(")
			{
			
			std::string infix_expr = "";
			
			flag_Open = 1;
			
			flag_Close = 0;

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
				
			Expr_Parser parser;
			
			int result;

			std::string temp = infix_expr.substr(0, infix_expr.length() - 1);
			
			parser.evaluate_expression(temp, result);
			
			b.build_number(factory, result);

		}
	
		else
		{
			std::cout<<"Invalid Expression Given"<<std::endl;

			return false;
		}

	
	}
	
	return true;


}

//
//Method to evaluate the expression
//
bool Expr_Parser::evaluate_expression( std::string & infix, int & result)
{
	Tree_Factory_Builder factory;

	Expr_Tree_Builder	builder ;

	//visitor obj -- Eval_Expr_Tree
	Eval_Expr_Tree visitor;

	bool returnValue = true;

	std::istringstream input(infix);

	std::string token;

	int flag =0;

	while (!input.eof ())
	{
		

		if(token=="/"|| token =="%")
			flag++;

		input >> token;

		if(flag>0 && atoi(token.c_str())==0 && token!="(" && token!=")" && token !="*" && token !="+" && token!="-" && token!="/" && token!="%")
		{
		
				divide_by_zero_exception();
				
				return false;
			
		}
		
	}
	
	if (!this->parse_expr (infix, builder,factory))
		return false;


	Expr_Tree * expr = builder.get_expression ();

	if (0 == expr)
			return false;
		
	
	// evaluate the expression
	result = expr->eval (visitor);

	delete expr;
	
	return true;
}