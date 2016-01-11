// $Id: Number_Command.cpp  2015-02-28 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.


#include "Number_Command.h"

//
//Default Constructor Initialisation 
//
Number_Command ::Number_Command(void)
{

}

//
//Initalising one Arg Constructor
//
Number_Command::Number_Command(int num)
	:number(num)
{

}

//
//Calling Destructor
//
Number_Command::~Number_Command()
{

}

//
//Execute Method
//
 bool Number_Command ::execute (Stack <int> & stack) 
 {
	stack.push(this->number);
	return true;
 }
 
 //
 //Get Precedence
 //
int Number_Command ::get_precedence(void)
{
	return 3;
}
