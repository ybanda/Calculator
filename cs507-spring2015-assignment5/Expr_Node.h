// -*- C++ -*-
// $Id: Expr_Node.h 2015-04-02 banday $

//==============================================================================
/**
 * @file       Expr_Node.h
 *
 * $Id: Expr_Node.h 2015-04-02 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#pragma once

#include "Expr_Node_Visitor.h"

class Expr_Node
{

public:

	//Default Constructor
	Expr_Node(void);

	//Default Destructor
	virtual ~Expr_Node(void);

	/*
	*@return integer value of evaluate 
	*/
	virtual int eval(void) =0;

	/*Method to get the precedence of the node
	*@return the integer value of node
	*/
	virtual int get_precedence() = 0 ;

	/*
	*MEthod to call the corresponding method in visitior Method
	*return void
	*/
	virtual void accept (Expr_Node_Visitor &v) =0;

	/*
	*Returns the root type value 
	*/
	virtual int get_root_type()=0;

private:
	int result_;

};

