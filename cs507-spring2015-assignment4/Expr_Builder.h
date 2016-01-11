// -*- C++ -*-
// $Id: Expr_Builder.h 2015-04-02 banday $

//==============================================================================
/**
 * @file       Expr_Builder.h
 *
 * $Id: Expr_Builder.h 2015-04-02 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#pragma once
#include "Expr_Node.h"
#include "Expr_Tree.h"
#include "Tree_Factory_Builder.h"
/**
 * @class Expr_Builder
 *
 * Basic implementation of a Expr_Builder.
 */

class Expr_Builder
{
public:

	//DEfault Constructor
	Expr_Builder(void);
	
	//Default Destructor
	~Expr_Builder(void);
	


	virtual void build_expression(void) = 0;
	/**
   * pure virtual function which is used to create a number command
   * @param[in]       number                integer
   * @return		  Number_Command		return the Number_Command Object
   */
	virtual void build_number(Tree_Factory_Builder &factory , int number)=0;
	
	/**
   * pure virtual function which is used to create a number command
   * @param[in]       number                integer
   * @return		  Number_Command		return the Number_Command Object
   */
	virtual void build_add_operand(Tree_Factory_Builder &factory ) =0;
	
	/**
   * pure virtual function which is used to create a Subtract command
   * @param[in]       number                integer
   * @return		  void
   */
	virtual void build_subtract_operand(Tree_Factory_Builder &factory ) =0;
	
	/**
   * pure virtual function which is used to create a Multiply command
   * @param[in]       number                integer
   * @return		  void
   */
	virtual void build_multiply_operand(Tree_Factory_Builder &factory )=0;
	
	/**
   * pure virtual function which is used to create a divide command
   * @param[in]       number                integer
   * @return		  void
   */
	virtual void build_divide_operand(Tree_Factory_Builder &factory ) = 0;
	
	/**
   * pure virtual function which is used to create a moduls command
   * @param[in]       number                integer
   * @return		 void
   */
	virtual void build_modulus_operand(Tree_Factory_Builder &factory )=0;
	
	/**
   * pure virtual function which is used to create a unary minus command
   * @param[in]       number                integer
   * @return		  void
   */
	virtual void build_unary_minus_operand(Tree_Factory_Builder &factory , int number)=0;


	/**
   * pure virtual function which is used to get the expression
   * 
   * @return		  Expr_Tree		
   */
	virtual Expr_Tree * get_expression(void) =0;
	
};

