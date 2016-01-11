// -*- C++ -*-
// $Id: Unary_Minus_Node.h banday $

//==============================================================================
/**
 * @file       Array.h
 *
 * $Id: Unary_Minus_Node.h banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#pragma once
#include "Unary_Expr_Node.h"

class Unary_Minus_Node : public Unary_Expr_Node
{
public:
	
	//Default Constructor
	Unary_Minus_Node(int number);

	//Default Destructor
	virtual ~Unary_Minus_Node(void);

	/*
	*Method to evaluate the value of the nodes
	*Returns the integer value of the evaluation
	*/
	virtual int eval(void);
	
	/*
	*Method to evaluate the value of the nodes
	*Returns the integer value of the evaluation
	*/
	virtual int eval(int num1);

	/*
	*Method to get the node value
	*Returns the integer value of the Node root type
	*/
	virtual int get_root_type();

  // Yashwanth, do not return a value from the accept method. This implies
  // that all visitors will have to return a value, which is not the
  // case.
	//Dr.Hill , Changed the method return type to void
   virtual void accept (Expr_Node_Visitor &v);

 /*
 *Method to get the precedence value 
 * @ return the integer value of precedence
 */
  virtual int get_precedence () ;

protected :
	
	int value;

	Expr_Node *child_;

};

