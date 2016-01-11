// $Id: Expr_Tree.cpp  2015-03-25 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#include "Expr_Tree.h"

//
//Default Constructor Initialisation
//
Expr_Tree::Expr_Tree(void)
:root(0)
{

}

//
//Default Destructor Initialisation
//
Expr_Tree::~Expr_Tree(void)
{
	
}

//
//Evaluate method which returns the integer value of the operation
//
int Expr_Tree:: eval(Expr_Node_Visitor &v)
{
	int type = this->get_Root()->get_root_type();
	
	int result =0;
	
	switch (type)
	{
	
	case 0:
		
		v.visit_Unary_Minus_Node(*(Unary_Minus_Node *)this->get_Root());
	
		result =v.get_Result();
		
		break;
	
	case 1:
		v.visit_Addition_Node(*(Add_Expr_Node *)this->get_Root());
		result =v.get_Result();
		break;
	case 2:
		v.visit_Subtraction_Node(*(Subtract_Expr_Node *)this->get_Root());
		result =v.get_Result();
		break;
	case 3:
		v.visit_Multiply_Node(*(Multiply_Expr_Node *) this->get_Root());
		result =v.get_Result();
		break;
	case 4:
		v.visit_Divide_Node(*(Divide_Expr_Node *)this->get_Root());
		result =v.get_Result();
		break;
	case 5:
		v.visit_Modulus_Node(*(Modulus_Expr_Node *)this->get_Root());
		result =v.get_Result();
		break;
	case 6 :
		v.visit_Number_Node(*(Number_Expr_Node *)this->get_Root());
		result =v.get_Result();
		break;
	default:
		//Invalid
		break;
	}
	return result;
}

//
//Get Root
//
Expr_Node* Expr_Tree::get_Root()
{
	return this->root;
}

//
//Set _Root
//
void Expr_Tree::set_Root(Expr_Node * root1)
{
	this->root = root1;
}

