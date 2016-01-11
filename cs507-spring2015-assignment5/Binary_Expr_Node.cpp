// $Id: Binary_Expr_Node.cpp  2015-03-25 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#include "Binary_Expr_Node.h"

//
//Default Constructor Initialisation
//
Binary_Expr_Node::Binary_Expr_Node(void)
{

}

//
//Default Destructor Initialisation
//
Binary_Expr_Node::~Binary_Expr_Node(void)
{

}

//
//Method to return the evaluation value of the expression
//
 int Binary_Expr_Node::eval(void)
 {

	 int left_result = this->left_->eval();
	
	 int right_result = this->right_->eval();
	 
	 return eval(left_result,right_result);
 
 }

 //
// get_left
//
Expr_Node & Binary_Expr_Node::get_left()
{
	return *this->left_;
}

//
// get_right
//
Expr_Node & Binary_Expr_Node::get_right()
{
	return *this->right_;
}

//
// set_left
//
void Binary_Expr_Node::set_left(Expr_Node * node)
{
	this->left_ = node;
}

//
// set_right
//
void Binary_Expr_Node::set_right(Expr_Node * node)
{
	this->right_ = node;
}