
// -*- C++ -*-
// $Id: Infix_To_PostFix_Command.h  2015-02-26 banday $

//==============================================================================
/**
 * @file       Infix_To_PostFix_Command.h
 *
 *  $Id: Infix_To_PostFix_Command.h  2015-02-26 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _INFIX_TO_POSTFIX_COMMAND_H_
#define _INFIX_TO_POSTFIX_COMMAND_H_

#include "Expr_Command.h"
#include "Expr_Command_Factory.h"
#include "Expr_Command_Iterator.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

/**
 * @class Infix_To_PostFix_Command
 *
 * Basic implementation of a standard Infix_To_PostFix_Command class 
 * with extending the functionalities of Binary_Operator_Command.
 */
class Infix_To_Postfix_Command
{
public:
  
	//Default Constructor
	Infix_To_Postfix_Command();
	
	//Destructor
	~Infix_To_Postfix_Command();

/*
* Exception thrown to indicate the Operators other than the given is used.
*/
	//
	//Evaluate Postfix Expression
	//
	bool evaluate_postfix(Expr_Command_Iterator<Expr_Command *> & iter, int & result);

	//Convert Infix to postFix
	bool infix_to_postfix (const std::string & infix,Expr_Command_Factory & factory,Array <Expr_Command *> & postfix);

	

	
private:
	
	//
	//delete the elements in postfix and stack
	//
	bool clear_postfix_and_stack( Array<Expr_Command *> & postfix , Stack <Expr_Command *> &temp);

};



#endif   // !defined _ADD_COMMAND_H_