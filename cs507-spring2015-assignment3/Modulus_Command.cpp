// $Id: Modulus_Command.cpp  2015-02-28 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Modulus_Command.h"
//
//Default Constructor Initialisation 
//
Modulus_Command ::Modulus_Command(void)
{

}

//
//Calling Destructor
//
Modulus_Command::~Modulus_Command()
{

}



//
//Evaluate Function for evaluating the Operands
//Return the Addition of 2 operands
//
int Modulus_Command::evaluate(int n1, int n2) 
{
	return (n1%n2);
}


 //
 //Get Precedence ,returning some default value 
 //considering 2 as precedence value for Modulus
 //
int Modulus_Command::get_precedence(void)
{
	return 2;
}
