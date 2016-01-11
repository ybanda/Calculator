// -*- C++ -*-
// $Id: Modulus_Expr_Node.h 2015-04-02 banday $

//==============================================================================
/**
 * @file       Modulus_Expr_Node.h
 *
 * $Id: Modulus_Expr_Node.h 2015-04-02 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#pragma once
#ifndef _MODULUS_EXPR_NODE_H_
#define _MODULUS_EXPR_NODE_H_
#include "Binary_Expr_Node.h"
#include "Expr_Node_Visitor.h"
/**
 * @class Modulus_Expr_Node
 *
 * Basic implementation of a Modulus_Expr_Node.
 */
class Modulus_Expr_Node :public Binary_Expr_Node
{

public:

	//Default Constructor
	Modulus_Expr_Node(void);

	//Default Destructor
	virtual ~Modulus_Expr_Node(void);


	/**
   * Retrieve the integer value of evaluation of 2 numbers passed.
   * @param[in]       num1 , num2               Numbers to evaluate
   *
   * @return          Evaluated Value 
   */
	virtual int eval (int num1 , int num2);

	/*
	* 
	*@return the Precedence Value for A Node 
	*/
	virtual int get_precedence();


  // Yashwanth, do not return a value from the accept method. This implies
  // that all visitors will have to return a value, which is not the
  // case.
	//Dr.Hill , Changed the method return type to void
	 void accept(Expr_Node_Visitor & v);

	 /*
	* 
	*@return the Node-Root type value for A Node 
	*/
	 virtual int get_root_type();
};

#endif