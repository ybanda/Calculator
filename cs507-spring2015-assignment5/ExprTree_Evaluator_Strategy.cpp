// $Id: ExprTree_Evaluator_Strategy.cpp  2015-03-25 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#include "ExprTree_Evaluator_Strategy.h"
#include "Expr_Parser.h"
ExprTree_Evaluator_Strategy::ExprTree_Evaluator_Strategy(void)
	:visitor(0),
	builder(0)
{

}


ExprTree_Evaluator_Strategy::~ExprTree_Evaluator_Strategy(void)
{

}


 bool ExprTree_Evaluator_Strategy :: parse_expression(const std::string & expr)
 {
		Expr_Parser parser;

		Tree_Factory_Builder factory;

	

	bool returnValue = true;

	std::istringstream input(expr);

	std::string token;

	int flag =0;

		builder  = new Expr_Tree_Builder();

	//visitor obj -- Eval_Expr_Tree
	 visitor = new Eval_Expr_Tree();

	while (!input.eof ())
	{
		

		if(token=="/"|| token =="%")
			flag++;

		input >> token;

		if(flag>0 && atoi(token.c_str())==0 && token!="(" && token!=")" && token !="*" && token !="+" && token!="-" && token!="/" && token!="%")
		{
		
				std::cout<<"Division by Zero Exception"<<std::endl;
				
				return false;
			
		}
		
	}
	std::string expr_1 = expr;
	
	if (!(parser.parse_expr (expr_1, *builder,factory)))
		return false;
	
	

		
return true;
 }
		
 void ExprTree_Evaluator_Strategy :: evaluate_expression (void)
 {

	  Expr_Tree * expr = (*builder).get_expression ();
	
	
	// evaluate the expression
	int result = expr->eval (*visitor);

	std::cout<<"Result ="<<result<<std::endl;


 }
