// $Id: Add_Command.cpp  2015-02-28 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Add_Command.h"
//
//Default Constructor Initialisation 
//
Add_Command ::Add_Command(void)
{

}

//
//Calling Destructor
//
Add_Command::~Add_Command()
{
	
}



//
//Evaluate Function for evaluating the Operands
//Return the Addition of 2 operands
//
int Add_Command::evaluate(int n1, int n2) 
{
	return (n1+n2);
}


 //
 //Get Precedence ,returning some default value 
 //considering 0 as precedence value for addition
 //
int Add_Command::get_precedence(void)
{
	return 0;
}
