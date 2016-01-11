// $Id: Expr_Command.cpp  2015-02-28 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Binary_Operator_Command.h"
#include "Stack.h"
//
//Default Constructor Initialisation 
//
Binary_Operator_Command ::Binary_Operator_Command(void)
{
	
}

//
//Calling Destructor
//
Binary_Operator_Command::~Binary_Operator_Command()
{

}

//
//Execute Method
//Since 'this' : can only be referenced inside non-static member functions
//
bool Binary_Operator_Command::execute (Stack <int> & stack)  
{
	//Assigning first element of top value of the stack
	int number_Two = stack.top();
	
	//Deleting the saved element
	stack.pop();
	
	//Now the first element is deleted and the 
	//next value is saved to a local variable and deleted
	int number_One = stack.top();

	stack.pop();
	
	//evaluate is an abstract method , So whatever operator uses 
	//this method has to write its own logic
	int result = this->evaluate(number_One, number_Two);
	
	stack.push (result);

	return true;
}

//
//Evaluate Function for evaluating the Operands, returning some default value
//
int Binary_Operator_Command ::evaluate(int n1, int n2) 
{
	return 0;
}


 //
 //Get Precedence ,returning some default value
 //
int Binary_Operator_Command::get_precedence(void)
{
	return -1;
}
