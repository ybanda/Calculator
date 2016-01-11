// $Id: Unary_Minus_Node.cpp  2015-03-25 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#include "Unary_Minus_Node.h"


//
//Default Constructor Intialisation
//
Unary_Minus_Node::Unary_Minus_Node(int number)
	:value(number)
{

}


//
//Default Destructor Intialisation
//
Unary_Minus_Node::~Unary_Minus_Node(void)
{

}

//
//Evaluate Method for Unary Minus Node  which return the evaluated value
//
int Unary_Minus_Node::eval()
{
	int child_value_ = this->child_->eval();
	
	return eval(-1*child_value_);

}

//
//Method to return the root type value , given 0 for unary Minus
//
int Unary_Minus_Node::get_root_type()
{
	return 0;
}


//
//Method to return the precedence value for Unary Minus Node
//
int Unary_Minus_Node:: get_precedence  ()
{

	return -2;
}

void Unary_Minus_Node::accept( Expr_Node_Visitor &v)
{
	v.visit_Unary_Minus_Node(*this);
}
//
//Method to return the evaluate Value for Unary Minus Node
//
int Unary_Minus_Node::eval(int number)
{
	return -1*number;

}