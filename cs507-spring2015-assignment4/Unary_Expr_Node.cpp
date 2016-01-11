// $Id: Unary_Expr_Node.cpp  2015-03-25 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#include "Unary_Expr_Node.h"

//
//Default Constructor Intialisation
//
Unary_Expr_Node::Unary_Expr_Node(void)
{

}

//
//Default Destructor Intialisation
//
Unary_Expr_Node::~Unary_Expr_Node(void)
{

}

//
//Evaluate Method to return the Operation for Unary Expression
//
int Unary_Expr_Node::eval()
{
	int child_value_ = this->child_->eval();
	
	return eval(child_value_);

}



//
// get_child
//
Expr_Node & Unary_Expr_Node::get_child()
{
	return *this->child_;
}

//
// set_child
//
void Unary_Expr_Node::set_child(Expr_Node * node)
{
	this->child_ = node;
}