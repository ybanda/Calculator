// $Id: Number_Expr_Node.cpp  2015-03-25 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#include "Number_Expr_Node.h"


//
//DEfault Constructor Initalisation
//
Number_Expr_Node::Number_Expr_Node(int value)
	:value_(value)

{

}

//
//Default Destructor Initialisation
//
Number_Expr_Node::~Number_Expr_Node(void)
{

}


//
//Eval method to evaluate and return the value for number
//
int Number_Expr_Node::eval (void)
{
	return this->value_;
}

//
//Method to return the precedence value for number
//
int Number_Expr_Node::get_precedence()
{
	return -1;
}

//
//Get node-root type value , given as 6 for number
//
int Number_Expr_Node::get_root_type()
{

	return 6;
}

//
//Accept method for multiply expr node which call expr_node_visitor
//
void Number_Expr_Node::accept(Expr_Node_Visitor &v)
{
	v.visit_Number_Node(*this);

  // Yashwanth, the accept method should only visit the node. It should
  // not return a result from the visitor.
	//Dr.Hill , Changed the method return type to void
	
}

