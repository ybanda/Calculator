// $Id: Multiply_Expr_Node.cpp  2015-03-25 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#include "Multiply_Expr_Node.h"

//
//Default Constructor Initialisation
//
Multiply_Expr_Node::Multiply_Expr_Node(void)
{

}

//
//Default Destructor Initialisation
//
Multiply_Expr_Node::~Multiply_Expr_Node(void)
{

}

//
//Evaluates the expression for Multiplication and returns the product of 2 numbers
//
int Multiply_Expr_Node::eval (int num1 , int num2)
{
	return num1*num2;

}

//
//Return the precedence of the Operator , Assuming 1 as the precedence for Multiplication/Division
//
int Multiply_Expr_Node::get_precedence()
{
	return 1;
}

//
//GEt the node root type value , given as 3 for multiply
//
int Multiply_Expr_Node::get_root_type()
{

	return 3;
}

//
//Accept method for multiply expr node which call expr_node_visitor
//
void Multiply_Expr_Node::accept (Expr_Node_Visitor &v)
{
	v.visit_Multiply_Node(*this);
  // Yashwanth, the accept method should only visit the node. It should
  // not return a result from the visitor.

	//Dr.Hill , Changed the method return type to void


}