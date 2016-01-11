// $Id: Subtract_Command.cpp  2015-02-28 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Subtract_Command.h"
//
//Default Constructor Initialisation 
//
Subtract_Command ::Subtract_Command(void)
{

}

//
//Calling Destructor
//
Subtract_Command::~Subtract_Command()
{

}



//
//Evaluate Function for evaluating the Operands
//Return the Subtraction of 2 operators
//
int Subtract_Command::evaluate(int n1, int n2) 
{
	return (n1-n2);
}


 //
 //Get Precedence ,returning some default value 
 //considering 0 as precedence value for Subtraction and Addition
 //
int Subtract_Command::get_precedence(void)
{
	return 0;
}
