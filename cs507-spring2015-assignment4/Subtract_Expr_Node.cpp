// $Id: Subtract_Expr_Node.cpp  2015-03-25 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Subtract_Expr_Node.h"


//
//Default Constructor Initialisation
//
Subtract_Expr_Node::Subtract_Expr_Node(void)
{

}

//
//Default Destructor Initialisation
//
Subtract_Expr_Node::~Subtract_Expr_Node(void)
{

}

//
//Evaluates the expression for Subtraction and returns the sum of 2 numbers
//
int Subtract_Expr_Node::eval (int num1 , int num2)
{
	return num1-num2;

}

//
//return the precedence of the Operator , Assuming 0 as the precedence for Addition/Subtraction
//
int Subtract_Expr_Node::get_precedence()
{
	return 0;
}

//
//Method to return the root type value for subtract , given 2 for subtract operator
//
int Subtract_Expr_Node::get_root_type()
{

	return 2;
}

//
//Method to call expr_Node visitor with current pointer
//
void Subtract_Expr_Node::accept (Expr_Node_Visitor &v)
{
	v.visit_Subtraction_Node(*this);
  // Yashwanth, the accept method should only visit the node. It should
  // not return a result from the visitor.
	//Dr.Hill , Changed the method return type to void
}