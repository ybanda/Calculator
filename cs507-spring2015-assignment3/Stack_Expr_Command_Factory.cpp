// $Id: Stack_Expr_Command_Factory.cpp  2015-02-28 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Stack_Expr_Command_Factory.h"

//
//Default Constructor Initialisation 
//
Stack_Expr_Command_Factory ::Stack_Expr_Command_Factory(void)
{

}

//
//Calling Destructor
//
Stack_Expr_Command_Factory::~Stack_Expr_Command_Factory()
{

}

//
//
//
Number_Command * create_number_command (int num) ;

//
//
//
Add_Command *create_add_command(void)  ;

//
//
//
Subtract_Command *create_subtract_command(void) ;

//
//
//
Multiply_Command *create_multiply_command(void) ;

//
//
//
Divide_Command *create_divide_command(void)  ;

//
//
//
Modulus_Command *create_modulus_command(void);