// -*- C++ -*-
// $Id: Unary_Expr_Node.h 2015-04-1 banday $

//==============================================================================
/**
 * @file       Unary_Expr_Node.h
 *
 * $Id: Unary_Expr_Node.h  2015-04-01 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#pragma once

#include "Expr_Node.h"

/**
 * @class Unary_Expr_Node
 *
 * Basic implementation of a Unary_Expr_Node.
 */
class Unary_Expr_Node : public Expr_Node
{


public:
	
	//Default Constructor
	Unary_Expr_Node(void);

	//Default Destructor
	virtual ~Unary_Expr_Node(void);

	/*
	*Method to evaluate the nodes
	*return integer value of the evaluation
	*/
	int eval(void);
	
	/*
	*Method to evaluate the nodes
	*params integer value for node
	*return integer value of the evaluation
	*/
	virtual int eval(int num1)=0;

	/*
	*Method to get the root type
	*return integer value of the node type
	*/
	virtual int get_root_type()=0;

	/**
   * get_child
   * 
   * @return		 Expr_Node				child
   */
	Expr_Node & get_child(void);

	/**
   * set_child
   * 
   */
	void set_child(Expr_Node * node);

protected :
	
	Expr_Node *child_;

};

