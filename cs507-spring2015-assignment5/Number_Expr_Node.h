// -*- C++ -*-
// $Id: Number_Expr_Node.h  2015-04-02 banday $

//==============================================================================
/**
 * @file       Number_Expr_Node.h
 *
 * $Id: Number_Expr_Node.h  2015-04-02  banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#pragma once
#ifndef _NUMBER_EXPR_NODE_H_
#define _NUMBER_EXPR_NODE_H_

#include "Expr_Node.h"
#include "Expr_Node_Visitor.h"

/**
 * @class Array
 *
 * Basic implementation of a Number Expr Node
 */
class Number_Expr_Node :public Expr_Node
{

public:

	//Default Constructor
	Number_Expr_Node(int number);

	//Default Destructor
	virtual ~Number_Expr_Node(void);

  // Yashwanth, do not return a value from the accept method. This implies
  // that all visitors will have to return a value, which is not the
  // case.

	//Dr.Hill , Changed the method return type to void

	virtual void accept (Expr_Node_Visitor &v);

	
	 /**
   * Retrieve the integer value of evaluation of 2 numbers passed.
   * @param[void]       
   *
   * @return          Evaluated Value 
   */

	virtual int eval (void);

	/*
	* 
	*@return the integer value for precedence 
	*/
	virtual int get_precedence();

	/*
	* 
	*@return the integer value for Node  
	*/
	virtual int get_root_type();

	

private:
	int value_;

};

#endif