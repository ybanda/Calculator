#pragma once
// -*- C++ -*-
// $Id: Subtract_Command.h  2015-02-26 banday $

//==============================================================================
/**
 * @file       Subtract_Command.h
 *
 *  $Id: Subtract_Command.h  2015-02-26 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _SUBTRACT_COMMAND_H_
#define _SUBTRACT_COMMAND_H_

#include "Binary_Operator_Command.h"

/**
 * @class _ADD_COMMAND_H_
 *
 * Basic implementation of a standard Subtract_Command class 
 * with extending the functionalities of Binary_Operator_Command.
 */
class Subtract_Command: public Binary_Operator_Command
{
public:
  
	//Default Constructor
	Subtract_Command(void);
	
	//Destructor
	~Subtract_Command();

 
	/**
	*Method to get the precedence of the operator
	*
	*
	* @param[in]   void
	* @return		int		returns the precedence of the operator
	*/
	 int get_precedence(void);

	/**
	* Method to evaluate the expression given
	*
	*
	* @param[in]   n1,n2	numbers to evaluate
	* @return		int		returns the result of
	*               the operation on the given numbers
	*/
	int evaluate(int n1, int n2)  ;
private:

};



#endif   // !defined _ADD_COMMAND_H_