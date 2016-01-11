// -*- C++ -*-
// $Id: ExprTree_Evaluator_Strategy.h  2015-02-26 banday $

//==============================================================================
/**
 * @file       ExprTree_Evaluator_Strategy.h
 *
 *  $Id: ExprTree_Evaluator_Strategy.h  2015-02-26 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#pragma once

#include "Expr_Evaluator_Strategy.h"
#include "Eval_Expr_Tree.h"
#include "Expr_Tree_Builder.h"


class ExprTree_Evaluator_Strategy : public Expr_Evaluator_Strategy
{
public:
	ExprTree_Evaluator_Strategy(void);

	~ExprTree_Evaluator_Strategy(void);

	virtual bool parse_expression (const std::string & expr);
		
	virtual void evaluate_expression (void);
		
private:
	Eval_Expr_Tree *visitor;

	Expr_Tree_Builder	*builder ;



};

