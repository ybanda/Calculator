#pragma once
// -*- C++ -*-
// $Id: Expr_Tree_Builder.h  2015-03-26 banday $

//==============================================================================
/**
 * @file       Expr_Tree_Builder.h
 *
 * $Id:	       Expr_Tree_Builder.h  2015-03-26 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _EXPR_TREE_BULIDER_H_
#define _EXPR_TREE_BULIDER_H_

#include "Binary_Expr_Node.h"
#include "Unary_Expr_Node.h"
#include "Expr_Builder.h"
#include "Add_Expr_Node.h"
#include "Subtract_Expr_Node.h"
#include "Tree_Factory_Builder.h"
#include "Stack.h"
/**
 * @class Expr_Tree_Builder
 *
 * Basic implementation of a standard Expr_Tree_Builder class .
 */
class Expr_Tree_Builder : public Expr_Builder
{

public:

	//Default Constructor
	Expr_Tree_Builder(void);
	
	//Default Destructor
	~Expr_Tree_Builder(void);

	/*
	*Method to build the Node Expression
	*/
	virtual void build_expression();

	/*Method to build the Number Expression
	*@param Tree_FActory_Builde 
	*@param number int
	*return void
	*/
	virtual void build_number (Tree_Factory_Builder &factory , int number);
	
	/*Method to build the Addition Expression
	*@param Tree_FActory_Builder 
	*return void
	*/
	virtual void build_add_operand (Tree_Factory_Builder &factory );
	
	/*Method to build the Subtract Expression
	*@param Tree_FActory_Builder 
	*return void
	*/
	virtual void build_subtract_operand (Tree_Factory_Builder &factory );

	/*Method to build the Divide Expression
	*@param Tree_FActory_Builder
	*return void
	*/
	virtual void build_divide_operand(Tree_Factory_Builder &factory );

	/*Method to build the Multiply Expression
	*@param Tree_FActory_Builder 
	*return void
	*/
	virtual void build_multiply_operand(Tree_Factory_Builder &factory );

	/*Method to build the Modulus Expression
	*@param Tree_FActory_Builder
	*return void
	*/
	virtual void build_modulus_operand(Tree_Factory_Builder &factory );

	/*Method to build the Minus operand
	*@param Tree_FActory_Builder
	*return void
	*/
	virtual void build_unary_minus_operand(Tree_Factory_Builder &factory,int number);

	/*Method to build the Expression
	*return void
	*/
	Expr_Tree * get_expression(void) ;

	
	private:
		// current state of expression tree
			Expr_Tree * tree_;
		
		// other variables to coordinate build process
			Stack<Expr_Node*> *numbers_;

			Stack<Expr_Node*> *operators_;
	
};

#endif