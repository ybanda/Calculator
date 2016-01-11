// -*- C++ -*-
// $Id: Multiply_Expr_Node.h 2015-04-02 banday $

//==============================================================================
/**
 * @file       Multiply_Expr_Node.h
 *
 * $Id: Multiply_Expr_Node.h 2015-04-02 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#ifndef _BINARY_EXPR_NODE_H_
#define _BINARY_EXPR_NODE_H_

//#include "Expr_Node_Visitor.h"
#include "Expr_Node.h"

class Expr_Node_Visitor;

class Binary_Expr_Node : public Expr_Node
{

public:
	
	//DEfault Constructor
	Binary_Expr_Node(void);
	
	//Default Destructor
	virtual ~Binary_Expr_Node(void);

	/*Method to evaluate the expression
	*@return integer value of expression
	*/
	virtual int eval(void);

	/*Method to evaluate the expression
	*@return integer value of expression
	*/
	virtual int eval(int num1 , int num2) =0 ;
	
 
 /**
   * pure virtual function which is used to evaluate the expression
   * @return       precedence                integer
   * 
   */
	virtual int get_precedence () = 0;
	
  // Yashwanth, do not return a value from the accept method. This implies
  // that all visitors will have to return a value, which is not the
  // case.
	//Dr.Hill , Changed the method return type to void
	virtual void accept (Expr_Node_Visitor &v) = 0;

	virtual int get_root_type()=0;

		/**
   * get_left
   * 
   * @return		 Expr_Node				left operand
   */
	Expr_Node & get_left(void);

	/**
   * get_right
   * 
   * @return		 Expr_Node				right operand
   */
	Expr_Node & get_right(void);

	/**
   * set_left
   * 
   */
	void set_left(Expr_Node * node);

	/**
   * set_right
   * 
   */
	void set_right(Expr_Node * node);


protected :

	Expr_Node * right_;

	Expr_Node * left_;

};

#endif