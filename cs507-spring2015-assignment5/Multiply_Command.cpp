// $Id: Multiply_Command.cpp  2015-02-28 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Multiply_Command.h"
//
//Default Constructor Initialisation 
//
Multiply_Command ::Multiply_Command(void)
{

}

//
//Calling Destructor
//
Multiply_Command::~Multiply_Command()
{

}



//
//Evaluate Function for evaluating the Operands
//Return the Multiplication of 2 operands
//
int Multiply_Command :: evaluate(int n1, int n2) 
{
	return (n1*n2);
}


 //
 //Get Precedence ,returning some default value 
 //considering 1 as precedence value for Multiplication
 //
int Multiply_Command::get_precedence(void)
{
	return 1;
}
