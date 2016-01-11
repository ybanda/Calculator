// $Id: Expr_Command_Factory.cpp  2015-02-28 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Expr_Command_Factory.h"
#include <stdlib.h>

//
//Default Constructor Initialisation 
//
Expr_Command_Factory ::Expr_Command_Factory(void)
{

}

//
//Calling Destructor
//
Expr_Command_Factory::~Expr_Command_Factory()
{

}

Add_Command * Expr_Command_Factory::create_add_command (void)
{
	return new Add_Command();
}

Number_Command * Expr_Command_Factory::create_number_command (int number)
{
	
	return new Number_Command(number);
}

Subtract_Command * Expr_Command_Factory::create_subtract_command()
{
	return new Subtract_Command();
}

Multiply_Command * Expr_Command_Factory::create_multiply_command()
{
	return new Multiply_Command();
}
Divide_Command * Expr_Command_Factory::create_divide_command()
{
	return new Divide_Command();
}
Modulus_Command * Expr_Command_Factory::create_modulus_command()
{
	return new Modulus_Command();
}
/*
Bracket_Command * Expr_Command_Factory::create_bracket_command()
{
	return new Bracket_Command();
}*/