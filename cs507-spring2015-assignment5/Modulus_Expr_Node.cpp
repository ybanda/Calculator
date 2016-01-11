// $Id: Modulus_Expr_Node.cpp  2015-03-25 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#include "Modulus_Expr_Node.h"

//
//Default Constructor Initialisation
//
Modulus_Expr_Node::Modulus_Expr_Node(void)
{

}

//
//Default Destructor Initialisation
//
Modulus_Expr_Node::~Modulus_Expr_Node(void)
{

}

//
//Evaluates the expression for Modulus and returns the Mod of 2 numbers
//
int Modulus_Expr_Node::eval (int num1 , int num2)
{
	return num1%num2;

}

//
//Return the precedence of the Operator , Assuming 1 as the precedence for Multiplication/Division/Modulus
//
int Modulus_Expr_Node::get_precedence()
{
	return 1;
}

//
//Accept method to call expr_Node Visitor 
//
 void  Modulus_Expr_Node::accept(Expr_Node_Visitor & v)
 {
	v.visit_Modulus_Node(*this);
	
   // Yashwanth, the accept method should only visit the node. It should
   // not return a result from the visitor.
	//Dr. Hill ,Removed the return type of accept method
	 
 }

//
//Get Root value for modulus , given as 5
//
int Modulus_Expr_Node::get_root_type()
{

	return 5;
}