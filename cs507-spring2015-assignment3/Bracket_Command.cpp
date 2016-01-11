// $Id: Add_Command.cpp  2015-02-28 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Bracket_Command.h"
//
//Default Constructor Initialisation 
//
Bracket_Command ::Bracket_Command(void)
{

}

//
//Calling Destructor
//
Bracket_Command::~Bracket_Command(void)
{

}



//
//Evaluate Function for evaluating the Operands
//Return the Addition of 2 operands
//
int Bracket_Command::evaluate(int n1, int n2) 
{
	return -1;
}


 //
 //Get Precedence ,returning some default value 
 //considering 0 as precedence value for addition
 //
int Bracket_Command::get_precedence(void)
{
	return 4;
}
