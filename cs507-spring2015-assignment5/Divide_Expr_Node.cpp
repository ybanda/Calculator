// $Id: Divide_Expr_Node.cpp  2015-03-25 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#include "Divide_Expr_Node.h"

//
//Default Constructor Initialisation
//
Divide_Expr_Node::Divide_Expr_Node(void)
{

}

//
//Default Destructor Initialisation
//
Divide_Expr_Node::~Divide_Expr_Node(void)
{

}

//
//Evaluates the expression for Division and returns the Division of 2 numbers
//
int Divide_Expr_Node::eval (int num1 , int num2)
{
	return num1/num2;

}

//
//Return the precedence of the Operator , Assuming 1 as the precedence for Multiplication/Division
//
int Divide_Expr_Node::get_precedence()
{
	return 1;
}

//
//Method to get the root node type value , given 4 for / operator
//
int Divide_Expr_Node::get_root_type()
{

	return 4;
}

//
//Method to call the expression node visitor
//
void Divide_Expr_Node::accept (Expr_Node_Visitor & v)
{
	v.visit_Divide_Node(*this);
  // Yashwanth, the accept method should only visit the node. It should
  // not return a result from the visitor.
 //Dr.Hill , Changed the method return type to void
}