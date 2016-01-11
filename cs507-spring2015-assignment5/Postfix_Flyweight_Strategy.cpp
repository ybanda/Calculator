#include "Postfix_Flyweight_Strategy.h"
#include "Infix_To_Postfix_Command.h"


Postfix_Flyweight_Strategy::Postfix_Flyweight_Strategy(void)
	:iter(0)
{

}


Postfix_Flyweight_Strategy::~Postfix_Flyweight_Strategy(void)
{

}

 bool Postfix_Flyweight_Strategy :: parse_expression (const std::string & expr)
 {
	 Infix_To_Postfix_Command postfix_operator;

	 Expr_Command_Factory factory;

	 Array <Expr_Command *> postfix(expr.length());

	 postfix_operator.infix_to_postfix(expr,factory,postfix, true);

	 bool isValid = postfix_operator.infix_to_postfix(expr,factory,postfix ,true);

	 this->iter = new Expr_Command_Iterator<Expr_Command *>(postfix);
	
	 return isValid;
 }
		
void Postfix_Flyweight_Strategy :: evaluate_expression (void)
 {
		int result ;
		
		Infix_To_Postfix_Command postfix_operator;
				
		postfix_operator.evaluate_postfix(*iter,result,true);

		std::cout<<result<<std::endl;

	
 }

		
