// -*- C++ -*-
// $Id: Add_Expr_Node.h  2015-03-26 banday $

//==============================================================================
/**
 * @file       Add_Expr_Node.h
 *
 * $Id:	       Add_Expr_Node.h  2015-03-26 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//=============================================================================
#pragma once
#ifndef _ADD_EXPR_NODE_H_
#define _ADD_EXPR_NODE_H_
#include "Binary_Expr_Node.h"
#include "Expr_Node_Visitor.h"


class Add_Expr_Node : public Binary_Expr_Node
{

public:

	//Default Constructor
	Add_Expr_Node(void);

	//Destructor
	virtual ~Add_Expr_Node(void);

	
  /**
   * Retrieve the integer value of evaluation of 2 numbers passed.
   * @param[in]       num1 , num2               Numbers to evaluate
   *
   * @return          Evaluated Value 
   */
	virtual int eval (int num1 , int num2);

	/*
	*Returns the precedence value of addition node
	*/
	virtual int get_precedence();

  // Yashwanth, do not return a value from the accept method. This implies
  // that all visitors will have to return a value, which is not the
  // case.
	//Dr.Hill , Changed the method return type to void
	virtual void accept (Expr_Node_Visitor &v);

	/*
	*Returns the Node type value of a node
	*/
	virtual int get_root_type();
};

#endif