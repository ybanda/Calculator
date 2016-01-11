// $Id: Divide_Command.cpp  2015-02-28 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Divide_Command.h"
//
//Default Constructor Initialisation 
//
Divide_Command ::Divide_Command(void)
{

}

//
//Calling Destructor
//
Divide_Command::~Divide_Command()
{

}



//
//Evaluate Function for evaluating the Operands
//Return the Addition of 2 operands
//
int Divide_Command::evaluate(int n1, int n2) 
{
	return (n1/n2);
}


 //
 //Get Precedence ,returning some default value 
 //considering 1 as precedence value for Division
 //
int Divide_Command::get_precedence(void)
{
	return 1;
}
