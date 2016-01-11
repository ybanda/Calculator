// -*- C++ -*-
// $Id: Expr_Command_Iterator.h 2015-03-1 5:24 banday $

//==============================================================================
/**
 * @file       Expr_Command_Iterator.h
 *
 * $Id: Expr_Command_Iterator.h 2015-03-1 5:24 banday $
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================


#ifndef _EXPR_COMMAND_ITERATOR_
#define _EXPR_COMMAND_ITERATOR_

#include "Array.h"



/**
 * @class Expr_Command_Iterator
 *
 * Basic implementation of a standard array class for chars.
 */
template <typename T> // for template creation 
class Expr_Command_Iterator
{
public:

  typedef T type ;

  /// Default constructor.
  //Expr_Command_Iterator (void);

 ///Initializing Constructor
  Expr_Command_Iterator(Array<T> & array);

  //Destructor
  ~Expr_Command_Iterator(void);

 

  //Checks whether there is any other element in the Array
  bool is_done(void);

  //Gets the next element in the list
  bool advance(void);

  //template <typename T>
  T  operator * (void) ;

  T * operator -> (void);

  

private :

	Array<T> array_;

	size_t cur_size_;

};
#include "Expr_Command_Iterator.cpp"

#endif