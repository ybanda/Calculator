// -*- C++ -*-
// $Id: Abstract_Expr_Command_Factory.h  2015-02-26 banday $

//==============================================================================
/**
 * @file       Abstract_Expr_Command_Factory.h
 *
 * $Id:	       Abstract_Expr_Command_Factory.h  2015-02-26 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _ABSTRACT_EXPR_COMMAND_FACTORY_H_
#define _ABSTRACT_EXPR_COMMAND_FACTORY_H_

#include "Number_Command.h"
#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Multiply_Command.h"
#include "Divide_Command.h"
#include "Modulus_Command.h"
#include "Bracket_Command.h"


/**
 * @class Expr_Command_Factory
 *
 * Basic implementation of a standard Expr_Command_Factory class .
 */
class Abstract_Expr_Command_Factory
{
public:

  /**
   * pure virtual function which is used to create a number command
   * @param[in]       number                integer
   * @return		  Number_Command		return the Number_Command Object
   */
	virtual Number_Command * create_number_command (int num)  =0 ;

	/**
   * pure virtual function which is used to create a Add_Command 
   * @param[in]       void                
   * @return		  Add_Command		return the Add_Command Object
   */
	virtual Add_Command *create_add_command(void) =0 ;

  /**
   * pure virtual function which is used to create a Subtract_Command
   * @param[in]       void                
   * @return		  Subtract_Command		return the Subtract_Command Object
   */
	virtual Subtract_Command *create_subtract_command(void)  =0 ;

  /**
   * pure virtual function which is used to create a Multiply_Command
   * @param[in]       void                
   * @return		  Multiply_Command		return the Multiply_Command Object
   */
	virtual Multiply_Command *create_multiply_command(void) =0;

  /**
   * pure virtual function which is used to create a Divide_Command
   * @param[in]       void                
   * @return		  Divide_Command		return the Divide_Command Object
   */
	virtual Divide_Command *create_divide_command(void) =0 ;

  /**
   * pure virtual function which is used to create a Modulus_Command
   * @param[in]       void                
   * @return		  Modulus_Command		return the Modulus_Command Object
   */
	virtual Modulus_Command *create_modulus_command(void) =0 ;

	//virtual Bracket_Command * create_bracket_command(void) =0 ;

 	
private:

	
};



#endif   // !defined _EXPR_COMMAND_FACTORY_H_