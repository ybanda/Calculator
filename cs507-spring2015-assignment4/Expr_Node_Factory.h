// -*- C++ -*-
// $Id: Expr_Node_Factory.h 2015-04-02 banday $

//==============================================================================
/**
 * @file       Expr_Node_Factory.h
 *
 * $Id: Expr_Node_Factory.h 2015-04-02 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#pragma once
#include "Add_Expr_Node.h"
#include "Subtract_Expr_Node.h"
#include "Divide_Expr_Node.h"
#include "Multiply_Expr_Node.h"
#include "Modulus_Expr_Node.h"
#include "Number_Expr_Node.h"
#include "Unary_Minus_Node.h"
class Expr_Node_Factory
{
public:

	//Default Constrcutor
	Expr_Node_Factory(void);

	//Default Destructor
	virtual ~Expr_Node_Factory(void);

	/**
   * pure virtual function which is used to create a Add_Expr_Node command
   * @param[in]       void
   * @return		  Add_Expr_Node		return the Number_Command Object
   */
	virtual Add_Expr_Node *create_add_Command(void)=0;

	/**
   * pure virtual function which is used to create a Subtract_Expr_Node command
   * @param[in]       void
   * @return		  Subtract_Expr_Node		return the Subtract_Expr_Node Object
   */
	virtual Subtract_Expr_Node *create_subtract_command(void) = 0;

	/**
   * pure virtual function which is used to create a Divide_Expr_Node command
   * @param[in]      void
   * @return		  Divide_Expr_Node		return the Divide_Expr_Node Object
   */
	virtual Divide_Expr_Node *create_divide_command(void) =0;

	/**
   * pure virtual function which is used to create a Multiply_Expr_Node command
   * @param[in]       void
   * @return		  Multiply_Expr_Node		return the Multiply_Expr_Node Object
   */
	virtual Multiply_Expr_Node *create_multiply_command(void) = 0;

	/**
   * pure virtual function which is used to create a Modulus_Expr_Node command
   * @param[in]     void
   * @return		  Modulus_Expr_Node		return the Modulus_Expr_Node Object
   */
	virtual Modulus_Expr_Node *create_modulus_command(void)=0;

	/**
   * pure virtual function which is used to create a number command
   * @param[in]       number                integer
   * @return		  Number_Expr_Node		return the Number_Expr_Node Object
   */
	virtual Number_Expr_Node *create_Number_command(int number)=0;
	
	/**
   * pure virtual function which is used to create a Unary_Minus_Node
   * @param[in]       number                integer
   * @return		  Unary_Minus_Node		return the Unary_Minus_Node Object
   */
	virtual Unary_Minus_Node *create_Unary_Minus_command(int number)=0;
};


