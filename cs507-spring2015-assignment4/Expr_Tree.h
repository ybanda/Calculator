// -*- C++ -*-
// $Id: Expr_Tree.h  2015-03-26 banday $

//==============================================================================
/**
 * @file       Expr_Tree.h
 *
 * $Id:	       Expr_Tree.h  2015-03-26 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#include "Expr_Node.h"

/**
 * @class Expr_Tree
 *
 * Basic implementation of a Expr_Tree.
 */
class Expr_Tree
{

public:

	//Default Constructor
	Expr_Tree(void);

	//Default Destructor
	virtual ~Expr_Tree(void);

	/*
	*Method to evaluate the Expr_Node Visitor
	*@return the evaluated value for Expr_Tree
	*/
	virtual int eval(Expr_Node_Visitor &v);

	/*
	*Method to get the Root
	*@return the evaluated value for Expr_Node
	*/
	virtual Expr_Node* get_Root();

	/*
	*Method to SEt the Root
	*@return void
	*/
	void set_Root(Expr_Node *root);


		
private:
	//pointer to Expression Node
	Expr_Node *root;

};

