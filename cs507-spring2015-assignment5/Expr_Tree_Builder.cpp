// $Id: Expr_Tree_Builder.cpp  2015-03-25 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#include "Expr_Tree_Builder.h"

//
//Default Constructor Initialisation 
//
Expr_Tree_Builder::Expr_Tree_Builder(void)
	:operators_(new Stack<Expr_Node *>())
	,numbers_(new Stack<Expr_Node *>())
	,tree_(0)
{

}

//
//Calling Destructor
//
Expr_Tree_Builder::~Expr_Tree_Builder(void)
{
	delete operators_;
	delete numbers_;
}

//
//Method to get the expr_tree 
//
Expr_Tree * Expr_Tree_Builder:: get_expression(void)
{

	
	while(!(this->operators_->is_empty()))
	{
		
		Binary_Expr_Node * temp_node;
		
		temp_node = (Binary_Expr_Node*)this->operators_->top();
		
		this->operators_->pop();
		
		temp_node->set_right(this->numbers_->top());
		
		this->numbers_->pop();
		
		temp_node->set_left(this->numbers_->top());
		
		this->numbers_->pop();
		
		this->numbers_->push(temp_node);
	}
	
	this->tree_->set_Root(this->numbers_->top());
		
	return this->tree_;
}

//
//Method to build the modulus Command
//
void Expr_Tree_Builder::build_modulus_operand(Tree_Factory_Builder &factory )
{

	Modulus_Expr_Node *tree=factory.create_modulus_command();

	if(operators_->is_empty()||operators_->top()->get_precedence()<tree->get_precedence())
		this->operators_->push(tree);
	
else
		this->build_operand(*tree);
}

//
//Method to build the Multiply Command
//
void Expr_Tree_Builder:: build_multiply_operand(Tree_Factory_Builder &factory )
{
	Multiply_Expr_Node *tree = factory.create_multiply_command();

	if(operators_->is_empty()||operators_->top()->get_precedence()<tree->get_precedence())
		this->operators_->push(tree);
	else
		this->build_operand(*tree);
}

//
//Method to build the Divide Command
//
void Expr_Tree_Builder:: build_divide_operand(Tree_Factory_Builder &factory )
{
	Divide_Expr_Node *tree = factory.create_divide_command();

	if(operators_->is_empty()||operators_->top()->get_precedence()<tree->get_precedence())
		this->operators_->push(tree);
	
	else
		this->build_operand(*tree);
}

//
//Method to create a new Expression
//
void Expr_Tree_Builder:: build_expression()
{
	
		tree_ = new Expr_Tree();

		
			
}

//
//Method to build the Number Command
//
void Expr_Tree_Builder:: build_number (Tree_Factory_Builder &factory ,int number)
{

	Number_Expr_Node *tree = factory.create_Number_command(number);

	this->numbers_->push(tree);
	
}

//
//Method to build the Add Command
//
void Expr_Tree_Builder:: build_add_operand (Tree_Factory_Builder &factory )
{

	Add_Expr_Node *tree = factory.create_add_Command();

	if(operators_->is_empty()||operators_->top()->get_precedence()<tree->get_precedence())
		this->operators_->push(tree);
	
	else
	
		this->build_operand(*tree);
	
}

//
//Method to build the Subtract Command
//
void Expr_Tree_Builder:: build_subtract_operand (Tree_Factory_Builder &factory )
{

	Subtract_Expr_Node *tree = factory.create_subtract_command();

	if(operators_->is_empty()||operators_->top()->get_precedence()<tree->get_precedence())
		this->operators_->push(tree);
	else
		this->build_operand(*tree);

	
}

//
//Method to build the Unary Minus Command
//
void Expr_Tree_Builder:: build_unary_minus_operand (Tree_Factory_Builder &factory ,int number)
{

	Unary_Minus_Node *tree = factory.create_Unary_Minus_command(number);

	this->numbers_->push(tree);
	
}

//
//
//
void Expr_Tree_Builder ::build_operand(Binary_Expr_Node &tree)
{

	
	
	
		while(!operators_->is_empty() && operators_->top()->get_precedence() >= tree.get_precedence())
		{
			Expr_Node * top_operator = operators_->top();
			if(top_operator->get_root_type() != 0)
			{
				((Binary_Expr_Node *)top_operator)->set_right(numbers_->top());
				numbers_->pop();
				((Binary_Expr_Node *)top_operator)->set_left(numbers_->top());
				numbers_->pop();
			}
			else
			{
				((Unary_Expr_Node *)top_operator)->set_child(numbers_->top());
				numbers_->pop();
			}
			operators_->pop();
			numbers_->push(top_operator);
		}

		this->operators_->push(&tree);
	
}

