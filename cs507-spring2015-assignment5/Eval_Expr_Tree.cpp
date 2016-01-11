// $Id: Eval_Expr_Tree.cpp  2015-03-25 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
#include "Eval_Expr_Tree.h"



//
//Default Constructor Initialisation
//
Eval_Expr_Tree::Eval_Expr_Tree(void)
	:stack(new Stack<int>())	
{

}

//
//Default Destructor Initialisation
//
Eval_Expr_Tree::~Eval_Expr_Tree(void)
{
	delete stack;
}

//
//Method to return the Result Value 
//
 int Eval_Expr_Tree::get_Result()
{
	
	return this->result_;

}

 //
 //Method to do the stack operation for Addition Node
 //
void Eval_Expr_Tree::visit_Addition_Node (Add_Expr_Node & node)
{
  // Yashwanth, the accept method should only visit the node. It should
  // not return a result from the visitor.
	
	//Dr.Hill , Removed the return type of accept and type cast 
	 node.get_left().accept(*this);

  // Yashwanth, the accept method should only visit the node. It should
  // not return a result from the visitor.
	 
  //Dr.Hill , Removed the return type of accept and type cast 
	 
	node.get_right().accept(*this);
	
	int top = this->stack->top();
	
	this->stack->pop();
	
	int top1 = this->stack->top();
	this->stack->pop();

	this->stack->push(top1+top);

	this->result_ = this->stack->top();

	delete &node;
	

}

//
 //Method to do the stack operation for Number Node
 //
void Eval_Expr_Tree::visit_Number_Node ( Number_Expr_Node & node)
{

	int number = node.eval();

	this->stack->push(number);

	this->result_ = this->stack->top();

	delete &node;
	
}

//
 //Method to do the stack operation for Subtraction Node
 //
void Eval_Expr_Tree::visit_Subtraction_Node ( Subtract_Expr_Node & node)
{
  // Yashwanth, there is no need for the extra casting. Just call the
  // accept method.
	
	//Dr.Hill , Removed the return type of accept and type cast 

	node.get_left().accept(*this);

  // Yashwanth, there is no need for the extra casting. Just call the
  // accept method.

	//Dr.Hill , Removed the return type of accept and type cast 

	node.get_right().accept(*this);
	
	int top = this->stack->top();
	
	this->stack->pop();
	
	int top1 = this->stack->top();

	this->stack->pop();

	this->stack->push(top1-top);

	this->result_ = this->stack->top();

	delete &node;
	

}

//
 //Method to do the stack operation for Multiply Node
 //
void Eval_Expr_Tree::visit_Multiply_Node( Multiply_Expr_Node & node)
{
  // Yashwanth, there is no need for the extra casting. Just call the
  // accept method.

	//Dr.Hill , Removed the return type of accept and extra type cast 

	node.get_left().accept(*this);

  // Yashwanth, there is no need for the extra casting. Just call the
  // accept method.

	//Dr.Hill , Removed the return type of accept and extra type cast 

	node.get_right().accept(*this);
	
	int top = this->stack->top();
	
	this->stack->pop();
	
	int top1 = this->stack->top();

	this->stack->pop();

	this->stack->push(top1*top);

	this->result_ = this->stack->top();

	delete &node;
	
}

//
 //Method to do the stack operation for Divide Node
 //
void Eval_Expr_Tree::visit_Divide_Node( Divide_Expr_Node & node)
{
  // Yashwanth, there is no need for the extra casting. Just call the
  // accept method.

	//Dr.Hill , Removed the return type of accept and extra type cast 

	node.get_left().accept(*this);

  // Yashwanth, there is no need for the extra casting. Just call the
  // accept method.

	//Dr.Hill , Removed the return type of accept and extra type cast 

	node.get_right().accept(*this);
	
	int top = this->stack->top();
	
	this->stack->pop();
	
	int top1 = this->stack->top();

	this->stack->pop();

	
	//if(top==0)
		//throw std::logic_error("Divide by zero Exception \n");
	//else 
		this->stack->push(top1/top);

	this->result_ = this->stack->top();
	
	delete &node;
	
}

//
 //Method to do the stack operation for Modulus Node
 //
void Eval_Expr_Tree::visit_Modulus_Node( Modulus_Expr_Node & node)
{
  // Yashwanth, there is no need for the extra casting. Just call the
  // accept method.

	//Dr.Hill , Removed the return type of accept and extra type cast 

	node.get_left().accept(*this);

  // Yashwanth, there is no need for the extra casting. Just call the
  // accept method.

	//Dr.Hill , Removed the return type of accept and extra type cast 
	node.get_right().accept(*this);
	
	int top = this->stack->top();
	
	this->stack->pop();

	int top1 = this->stack->top();

	this->stack->pop();

	this->stack->push(top1%top);

	this->result_ = this->stack->top();

	delete &node;
	
}

//
 //Method to do the stack operation for Unary Minus Node
 //
void Eval_Expr_Tree::visit_Unary_Minus_Node(Unary_Minus_Node &node)
{

	
	int number = node.eval();

	this->stack->push(number);

	this->result_ = this->stack->top();

	delete &node;
	
}



