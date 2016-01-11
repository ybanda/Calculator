// -*- C++ -*-
// $Id: Expr_Evaluator_Strategy.h  2015-02-26 banday $

//==============================================================================
/**
 * @file       Expr_Evaluator_Strategy.h
 *
 * $Id:	       Expr_Evaluator_Strategy.h  2015-02-26 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#pragma once
#include <iostream>
#include <string>
class Expr_Evaluator_Strategy 
{
	public:
		
		Expr_Evaluator_Strategy(void);
		
		~Expr_Evaluator_Strategy(void);

		virtual bool parse_expression (const std::string & expr) = 0;
		
		virtual void evaluate_expression (void) = 0;
		
			
};
