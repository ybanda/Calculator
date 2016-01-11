// $Id: Tree_Factory_Builder.cpp  2015-03-25 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#include "Tree_Factory_Builder.h"

//
//Default constructor Initalisation
//
Tree_Factory_Builder::Tree_Factory_Builder(void)
{

}


//
//Default Destructor Initalisation
//
Tree_Factory_Builder::~Tree_Factory_Builder(void)
{

}

//
//Method to return the AddExprNode Object
//
Add_Expr_Node * Tree_Factory_Builder::create_add_Command()
{
	return new Add_Expr_Node();
}

//
//Method to return the SubtractExprNode Object
//
Subtract_Expr_Node *Tree_Factory_Builder::create_subtract_command()
{
	return new Subtract_Expr_Node();
}

//
//Method to return the MultiplyExprNode Object
//
Multiply_Expr_Node *Tree_Factory_Builder::create_multiply_command()
{
	return new Multiply_Expr_Node();
}

//
//Method to return the DivideExprNode Object
//
Divide_Expr_Node *Tree_Factory_Builder::create_divide_command()
{
	return new Divide_Expr_Node();
}

//
//Method to return the Modulus ExprNode Object
//
Modulus_Expr_Node *Tree_Factory_Builder::create_modulus_command()
{
	return new Modulus_Expr_Node();
}

//
//Method to return the Number ExprNode Object
//
Number_Expr_Node *Tree_Factory_Builder::create_Number_command(int number)
{
	return new Number_Expr_Node(number);
}

//
//Method to return the Unary ExprNode Object
//
Unary_Minus_Node *Tree_Factory_Builder::create_Unary_Minus_command(int number)
{
	return new Unary_Minus_Node(number);
}