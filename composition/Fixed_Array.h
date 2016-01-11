// -*- C++ -*-

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#ifndef _CS507_FIXED_ARRAY_H_
#define _CS507_FIXED_ARRAY_H_

#include <exception>

/**
 * @class Fixed_Array
 *
 * Implementation of a fixed size array, i.e., one that is not
 * resizeable. It is derived from Array so it can inherit of 
 * the Array class's methods.
 */



template <typename T, size_t N>
class Fixed_Array : public Array <T>
{
public:
  /// Default constructor.
  Fixed_Array (void);

	/**
	 * Copy constructor.
	 *
	 * @param[in]      arr        Source array
	 */
  Fixed_Array (const Fixed_Array <T, N> & arr);
	
  /**
   * Initializing constructor. The source array can be of any size
   * as long as they are of the same type.
   *
   * @param[in]      arr        Source array
   */
  template <size_t M>
  Fixed_Array (const Fixed_Array <T, M> & arr);

  /**
   * Initializing constructor. Fills the contents of the 
   * array with the specified \a fill value.
   *
   * @param[in]      fill       The file value.
   */
  Fixed_Array (T fill);

  /// Destructor.
  ~Fixed_Array (void);

  /**
   * Assignment operator
   *
   * @param[in]      rhs        Right-hand side of operator.
   */
  const Fixed_Array & operator = (const Fixed_Array <T, N> & rhs);

  /**
   * Assignment operator
   *
   * @param[in]      rhs        Right-hand side of operator.
   */
 

  void resize (size_t new_size);
  
  template <size_t M>
  const Fixed_Array & operator = (const Fixed_Array <T, M> & rhs);
};

#include "Array.h"

// include the inline files
#include "Fixed_Array.inl"

// include the source file since template class
#include "Fixed_Array.cpp"

//#include "Fixed_Array.h"

#endif  // !defined _CS507_FIXED_ARRAY_H_
