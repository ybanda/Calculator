// -*- C++ -*-
// $Id: Flyweight_Expr_Command_Factory.h  2015-02-26 banday $

//==============================================================================
/**
 * @file       Flyweight_Expr_Command_Factory.h
 *
 *  $Id: Flyweight_Expr_Command_Factory.h  2015-02-26 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#pragma once

#include "Expr_Command_Factory.h"

class Flyweight_Expr_Command_Factory : public Expr_Command_Factory
{
public:
	Flyweight_Expr_Command_Factory(void);

	~Flyweight_Expr_Command_Factory(void);

	virtual Number_Command * create_number_command (int num);

	virtual Add_Command *create_add_command() ;

	virtual Subtract_Command *create_subtract_command();

	virtual Multiply_Command *create_multiply_command();

	virtual Divide_Command *create_divide_command();

	virtual Modulus_Command *create_modulus_command();

	//virtual Bracket_Command *create_bracket_command();

private:

	Add_Command * add_;
	
	Subtract_Command *sub_;
	
	Multiply_Command *mul_;
	
	Divide_Command *div_;
	
	Modulus_Command *mod_;

	//Bracket_Command *bracket_;

};

