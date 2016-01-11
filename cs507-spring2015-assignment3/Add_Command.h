#pragma once
// -*- C++ -*-
// $Id: Add_Command.h  2015-02-26 banday $

//==============================================================================
/**
 * @file       Add_Command.h
 *
 *  $Id: Add_Command.h  2015-02-26 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _ADD_COMMAND_H_
#define _ADD_COMMAND_H_

#include "Binary_Operator_Command.h"

/**
 * @class _ADD_COMMAND_H_
 *
 * Basic implementation of a standard _ADD_COMMAND_H_ class 
 * with extending the functionalities of Binary_Operator_Command.
 */
class Add_Command: public Binary_Operator_Command
{
public:
  
	//Default Constructor
	Add_Command(void);
	
	//Destructor
	~Add_Command(void);

 
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