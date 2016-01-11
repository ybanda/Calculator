// -*- C++ -*-
// $Id: Expr_Parser.h 2015-04-02 banday $

//==============================================================================
/**
 * @file       Expr_Parser.h
 *
 * $Id: Expr_Parser.h 2015-04-02 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================
#pragma once


#include "Expr_Builder.h"
#include "Expr_Tree_Builder.h"
#include "Tree_Factory_Builder.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

class Expr_Parser
{

public:
	
	//Default Constructor
	Expr_Parser(void);

	//Default Destructor
	~Expr_Parser(void);
	
	  /**
* @class empty_exception
*
* Exception thrown to indicate the stack is empty.
*/
  class divide_by_zero_exception : public std::exception
  {
  public:
    /// Default constructor.
    divide_by_zero_exception (void)
      : std::exception () 
	{
		std::cout<<"Divide By Zero Exception "<<std::endl;
	}
  };

	/*Method to parse the expression
	*@param[in] infix string expression
	*@param     Expr_Builder 
	*@param		Tree_Factory_Builder factory
	*/
	bool parse_expr(std::string & infix, Expr_Builder & b, Tree_Factory_Builder & factory);

	/*Method to evaluate Expression
	*@param infix input String
	@return boolean Value
	*/
	bool evaluate_expression (std::string & infix, int &result);

};

