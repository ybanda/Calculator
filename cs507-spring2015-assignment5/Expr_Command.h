// -*- C++ -*-
// $Id: Expr_Command.h  2015-02-26 banday $

//==============================================================================
/**
 * @file       Expr_Command.h
 *
 *  $Id: Expr_Command.h  2015-02-26 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _EXPR_COMMAND_H_
#define _EXPR_COMMAND_H_
#include "Stack.h"

/**
 * @class Expr_Command
 *
 * Basic implementation of a standard Expr_Command class .
 */
class Expr_Command
{
public:
  
	//Default Constructor
	Expr_Command(void);
	
	//Destructor
	~Expr_Command(void);

  /**
   * Execute is a virtual function which is of integer type
   * which takes inputs as stack
   *
   * @param[in]       stack               Stack of type integer
   * @return		  boolean			  return the status of the operation
   */
	virtual bool execute (Stack <int> & stack) ;


	/**
	*Virtual method to get the precedence of the operator
	*
	*
	* @param[in]   void
	* @return		int		returns the precedence of the operator
	*/
	virtual int get_precedence(void);
private:

};



#endif   // !defined _EXPR_COMMAND_H_