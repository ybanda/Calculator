// -*- C++ -*-
// $Id: Postfix_Evaluator_Strategy.h  2015-02-26 banday $

//==============================================================================
/**
 * @file       Postfix_Evaluator_Strategy.h
 *
 *  $Id: Postfix_Evaluator_Strategy.h  2015-02-26 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#pragma once

#include "Expr_Evaluator_Strategy.h"
#include "Expr_Command_Iterator.h"
#include "Expr_Command.h"


class Postfix_Evaluator_Strategy : public Expr_Evaluator_Strategy
{

public:
	Postfix_Evaluator_Strategy(void);

	~Postfix_Evaluator_Strategy(void);
	
	virtual bool parse_expression (const std::string & expr);
		
	virtual void evaluate_expression (void);
private:		
	Expr_Command_Iterator<Expr_Command *> * iter;

};

