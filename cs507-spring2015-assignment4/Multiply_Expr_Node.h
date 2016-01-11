// -*- C++ -*-
// $Id: Multiply_Expr_Node.h 2015-04-02 banday $

//==============================================================================
/**
 * @file       Multiply_Expr_Node.h
 *
 * $Id: Multiply_Expr_Node.h 2015-04-02 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#pragma once
#include "Binary_Expr_Node.h"
#include "Expr_Node_Visitor.h"

/**
 * @class Multiply_Expr_Node
 *
 * Basic implementation of a Multiply Expr Node.
 */
class Multiply_Expr_Node :public Binary_Expr_Node
{

public:

	/// Default constructor.
	Multiply_Expr_Node(void);

	//Destructor
	virtual ~Multiply_Expr_Node(void);

  /**
   * Retrieve the integer value of evaluation of 2 numbers passed.
   * @param[in]       num1 , num2               Numbers to evaluate
   *
   * @return          Evaluated Value 
   */
	virtual int eval (int num1 , int num2);

	/*
	* 
	*@return the integer value for precedence 
	*/
	virtual int get_precedence();
	
  // Yashwanth, do not return a value from the accept method. This implies
  // that all visitors will have to return a value, which is not the
  // case.
  //Dr.Hill , Changed the method return type to void
	
	/*
	* Method to call the Expr_Node_Visitor 
	*@return void
	*/
	virtual void accept (Expr_Node_Visitor &v);

	/*
	* 
	*@return the Node-Root type value for A Node 
	*/
	virtual int get_root_type();

};

