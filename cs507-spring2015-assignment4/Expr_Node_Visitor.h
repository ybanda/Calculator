// -*- C++ -*-
// $Id: Expr_Node_Visitor.h 2015-04-02 banday $

//==============================================================================
/**
 * @file       Expr_Node_Visitor.h
 *
 * $Id: Expr_Node_Visitor.h 2015-04-02 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#pragma once

#ifndef _EXPR_NODE_VISITOR_H_
#define _EXPR_NODE_VISITOR_H_


#include "Stack.h"

class Add_Expr_Node;
class Number_Expr_Node;
class Subtract_Expr_Node;
class Multiply_Expr_Node;
class Divide_Expr_Node;
class Modulus_Expr_Node;
class Unary_Expr_Node;
class Unary_Minus_Node;

class Expr_Node_Visitor
{

public:


	Expr_Node_Visitor(void);
	
	virtual	~Expr_Node_Visitor(void);
	
	/*Method to visit the Addition Node 
	*@param Add_Expr_Node
	*return void
	*/
	virtual void visit_Addition_Node ( Add_Expr_Node & node)=0;

	/*Method to visit_Number_Node 
	*@param Number_Node
	*return void
	*/
	virtual void visit_Number_Node ( Number_Expr_Node & node)=0;

	/*Method to visit the Subtract_Expr_Node Node 
	*@param Subtract_Expr_Node
	*return void
	*/
	virtual void visit_Subtraction_Node ( Subtract_Expr_Node & node)=0;


	
	/*Method to visit the Multiply_Expr_Node Node 
	*@param Multiply_Expr_Node
	*return void
	*/
	virtual void visit_Multiply_Node ( Multiply_Expr_Node & node)=0;


	/*Method to visit the Divide_Expr_Node Node 
	*@param Divide_Expr_Node
	*return void
	*/
	virtual void visit_Divide_Node ( Divide_Expr_Node & node)=0;

	/*Method to visit the Modulus_Expr_Node Node 
	*@param Modulus_Expr_Node
	*return void
	*/
	virtual void visit_Modulus_Node ( Modulus_Expr_Node & node)=0;

	/*Method to visit the Unary_Minus_Node Node 
	*@param Unary_Minus_Node
	*return void
	*/
	virtual void visit_Unary_Minus_Node ( Unary_Minus_Node & node)=0;

	virtual int get_Result(void) = 0;


};

#endif