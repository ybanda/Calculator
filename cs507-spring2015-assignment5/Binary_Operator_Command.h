#pragma once
// -*- C++ -*-
// $Id: Binary_Operator_command.h  2015-02-26 banday $

//==============================================================================
/**
 * @file       Binary_Operator_command.h
 *
 *  $Id: Binary_Operator_command.h  2015-02-26 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _BINARY_OPERATOR_COMMAND_H_
#define _BINARY_OPERATOR_COMMAND_H_
#include "Stack.h"
#include "Expr_Command.h"

/**
 * @class Expr_Command
 *
 * Basic implementation of a standard Binary_Operator_Command class 
 * with extending the functionalities of Expr_Command.
 */
class Binary_Operator_Command: public Expr_Command
{
	

public:
  
	//Default Constructor
	Binary_Operator_Command(void);
	
	//Destructor
	~Binary_Operator_Command();

  /**
   * Execute is a pure virtual function which is of integer type
   * which takes inputs as stack
   *
   * @param[in]       stack               Stack of type integer
   * @return		  boolean			  return the status of the operation
   */
	 bool execute (Stack <int> & stack) ;


	/**
	*Virtual method to get the precedence of the operator
	*
	*
	* @param[in]   void
	* @return		int		returns the precedence of the operator
	*/
	virtual int get_precedence(void);

	
	/**
	* Virtual method to evaluate the expression given
	*
	*
	* @param[in]   n1,n2	numbers to evaluate
	* @return		int		returns the result of
	*               the operation on the given numbers
	*/
	virtual int evaluate(int n1, int n2);

private:
		
};



#endif   // !defined _BINARY_OPERATOR_COMMAND_H_