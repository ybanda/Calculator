// $Id: Add_Expr_Node.cpp  2015-03-25 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#include "Add_Expr_Node.h"

//
//Default Constructor Initialisation
//
Add_Expr_Node::Add_Expr_Node(void)
{

}

//
//Default Destructor Initialisation
//
Add_Expr_Node::~Add_Expr_Node(void)
{

}

//
//Evaluates the expression for Addition and returns the sum of 2 numbers
//
int Add_Expr_Node::eval (int num1 , int num2)
{
	return num1+num2;

}

//
//return the precedence of the Operator , Assuming 0 as the precedence for Addition/Subtraction
//
int Add_Expr_Node::get_precedence()
{
	return 0;
}

//
//Method to get the integer value of root-node type 
//
int Add_Expr_Node::get_root_type()
{
	return 1;
}

//
//Method to call the expression node visitor
//
void Add_Expr_Node::accept (Expr_Node_Visitor &v)
{
	v.visit_Addition_Node(*this);
  // Yashwanth, the accept method should only visit the node. It should
  // not return a result from the visitor.
 //Dr.Hill , Changed the method return type to void
}