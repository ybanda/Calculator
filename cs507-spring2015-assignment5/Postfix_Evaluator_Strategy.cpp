// $Id: Postfix_Evaluator_Strategy.cpp  2015-03-25 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#include "Postfix_Evaluator_Strategy.h"
#include "Infix_To_Postfix_Command.h"



Postfix_Evaluator_Strategy::Postfix_Evaluator_Strategy(void)
	:iter(0)

{

}


Postfix_Evaluator_Strategy::~Postfix_Evaluator_Strategy(void)
{

}


 bool Postfix_Evaluator_Strategy :: parse_expression (const std::string & expr)
 {
	 Infix_To_Postfix_Command postfix_operator;

	 Expr_Command_Factory factory;

	 Array <Expr_Command *> postfix(expr.length());

	 postfix_operator.infix_to_postfix(expr,factory,postfix, false);

	 bool isValid = postfix_operator.infix_to_postfix(expr,factory,postfix ,false);

	 this->iter = new Expr_Command_Iterator<Expr_Command *>(postfix);
	
	 return isValid;
 }
		
void Postfix_Evaluator_Strategy :: evaluate_expression (void)
 {
		int result ;
		
		Infix_To_Postfix_Command postfix_operator;
				
		postfix_operator.evaluate_postfix(*iter,result,false);

		std::cout<<"Result ::"<<result<<std::endl;

	
 }
