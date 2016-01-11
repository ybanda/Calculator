// -*- C++ -*-
// $Id: Eval_Expr_Tree.h 2015-04-02 banday $

//==============================================================================
/**
 * @file       Eval_Expr_Tree.h
 *
 * $Id: Eval_Expr_Tree.h 2015-04-02 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#pragma once

#include "Expr_Node_Visitor.h"
#include "Binary_Expr_Node.h"
#include "Add_Expr_Node.h"
#include "Subtract_Expr_Node.h"
#include "Multiply_Expr_Node.h"
#include "Divide_Expr_Node.h"
#include "Modulus_Expr_Node.h"
#include "Unary_Expr_Node.h"
#include "Unary_Minus_Node.h"
#include "Number_Expr_Node.h"
#include <stdexcept>

class Eval_Expr_Tree : public Expr_Node_Visitor
{

public:
	
	//Default Constructor
	Eval_Expr_Tree(void);
	
	//Default Destructor
	virtual ~Eval_Expr_Tree(void);

	/*Method to visit the Addition Node 
	*@param Add_Expr_Node
	*return void
	*/
	virtual void visit_Addition_Node (Add_Expr_Node & node);

	/*Method to visit_Number_Node 
	*@param Number_Node
	*return void
	*/
	virtual void visit_Number_Node ( Number_Expr_Node & node);

	/*Method to visit the Subtract_Expr_Node Node 
	*@param Subtract_Expr_Node
	*return void
	*/
	virtual void visit_Subtraction_Node ( Subtract_Expr_Node & node);

	/*Method to visit the Multiply_Expr_Node Node 
	*@param Multiply_Expr_Node
	*return void
	*/
	virtual void visit_Multiply_Node (Multiply_Expr_Node & node);

	/*Method to visit the Divide_Expr_Node Node 
	*@param Divide_Expr_Node
	*return void
	*/
	virtual void visit_Divide_Node (Divide_Expr_Node & node);

	/*Method to visit the Modulus_Expr_Node Node 
	*@param Modulus_Expr_Node
	*return void
	*/
	virtual void visit_Modulus_Node (Modulus_Expr_Node & node);

	/*Method to visit the Unary_Minus_Node Node 
	*@param Unary_Minus_Node
	*return void
	*/
	virtual void visit_Unary_Minus_Node(Unary_Minus_Node &node);


	virtual int get_Result(void);

	
private :
	int result_;
	
	Stack<int> *stack;

};

