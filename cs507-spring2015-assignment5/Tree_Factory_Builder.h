// -*- C++ -*-
// $Id: Tree_Factory_Builder.h 2015-04-02 banday $

//==============================================================================
/**
 * @file       Tree_Factory_Builder.h
 *
 * $Id: Tree_Factory_Builder.h 2015-04-02 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#pragma once
#include "Expr_Node_Factory.h"
#include "Add_Expr_Node.h"
#include "Subtract_Expr_Node.h"
#include "Divide_Expr_Node.h"
#include "Multiply_Expr_Node.h"
#include "Modulus_Expr_Node.h"
#include "Number_Expr_Node.h"
#include "Unary_Minus_Node.h"

/**
 * @class Tree_Factory_Builder
 *
 * Basic implementation of a Tree_Factory_Builder.
 */
class Tree_Factory_Builder : public Expr_Node_Factory
{
public:

	//Default Constructor
	Tree_Factory_Builder(void);
	
	//Default Destructor
	virtual ~Tree_Factory_Builder(void);

	/*
	*Method to create Addition Command
	*@param void
	*@retun Add_Expr_Node
	*/
	virtual Add_Expr_Node *create_add_Command(void);

	/*
	*Method to create Subtraction Command
	*@param void
	*@retun Subtract_Expr_Node
	*/
	virtual Subtract_Expr_Node *create_subtract_command(void);

	/*
	*Method to create Divide Command
	*@param void
	*@retun Divide_Expr_Node
	*/
	virtual Divide_Expr_Node *create_divide_command(void);

	/*
	*Method to create Multiply Command
	*@param void
	*@retun Multiply_Expr_Node
	*/
	virtual Multiply_Expr_Node *create_multiply_command(void);

	/*
	*Method to create Modulus Command
	*@param void
	*@retun Modulus_Expr_Node
	*/
	virtual Modulus_Expr_Node *create_modulus_command(void);

	/*
	*Method to create Number Command
	*@param void
	*@retun Number_Expr_Node
	*/
	virtual Number_Expr_Node *create_Number_command(int number);

	/*
	*Method to create Unary Minus Command
	*@param void
	*@retun Unary_Minus_Node
	*/
	virtual Unary_Minus_Node *create_Unary_Minus_command(int number);

};

