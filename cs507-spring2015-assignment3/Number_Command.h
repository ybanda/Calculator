
// -*- C++ -*-
// $Id: Number_Command.h  2015-02-26 banday $

//==============================================================================
/**
 * @file       Number_Command.h
 *
 *  $Id:	   Number_Command.h  2015-02-26 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _NUMBER_COMMAND_H_
#define _NUMBER_COMMAND_H_
#include "Stack.h"
#include "Expr_Command.h"

/**
 * @class Number_Command
 *
 * Basic implementation of a standard Number_Command class .
 */
class Number_Command : public Expr_Command
{
public:
  
	//Default Constructor
	Number_Command(void);
	
	//1-Arg Constructor which will initialise with a number 
	Number_Command(int number);
	
	//Destructor
	~Number_Command();

  /**
   * Execute is a pure virtual function which is of integer type
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
	*
	
	*/
	int get_precedence(void);
private:

	int number;
};



#endif   // !defined _EXPR_COMMAND_H_