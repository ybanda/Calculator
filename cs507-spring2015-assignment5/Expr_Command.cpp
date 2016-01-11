// $Id: Expr_Command.cpp  2015-02-28 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Expr_Command.h"

//
//Default Constructor Initialisation 
//
Expr_Command ::Expr_Command(void)
{

}

//
//Calling Destructor
//
Expr_Command::~Expr_Command()
{

}

//
//Execute Method
//
bool Expr_Command::execute (Stack <int> & stack) 
 {
	return true;
 }

 //
 //Get Precedence
 //
int Expr_Command::get_precedence(void)
{
	return -1;
}
