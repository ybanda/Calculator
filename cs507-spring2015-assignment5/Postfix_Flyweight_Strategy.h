#pragma once
#include "Expr_Evaluator_Strategy.h"
#include "Expr_Command_Iterator.h"
#include "Expr_Command.h"
class Postfix_Flyweight_Strategy :public Expr_Evaluator_Strategy
{
public:
	Postfix_Flyweight_Strategy(void);
	
	~Postfix_Flyweight_Strategy(void);

	virtual bool parse_expression (const std::string & expr) ;
		
	virtual void evaluate_expression (void) ;
private:		
	Expr_Command_Iterator<Expr_Command *> * iter;
};

