// $Id: Fixed_Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//#include "Fixed_Array.h"


//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (void)
	:Array <T>(N)
{

}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, N> & arr)
	:Array<T>(N)(&arr) 
{

}

//
// Fixed_Array
//
template <typename T, size_t N>
template <size_t M>
Fixed_Array <T, N>::Fixed_Array (const Fixed_Array <T, M> & arr)
	:Array <T>(N)(&arr)
{
	this->Array<T>(M) = &arr;
	
}

//
// Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::Fixed_Array (T fill)
	:Array <T>(N)
{
	Array<T>::fill(fill); 
}

//
// ~Fixed_Array
//
template <typename T, size_t N>
Fixed_Array <T, N>::~Fixed_Array (void)
{
	
}

//
// operator =
//
template <typename T, size_t N>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, N> & rhs)
{
		return (this->Array<T>(N)=rhs);
}

//
// operator =
//
template <typename T, size_t N>
template <size_t M>
const Fixed_Array <T, N> & Fixed_Array <T, N>::operator = (const Fixed_Array <T, M> & rhs)
{

	if(M>N)
		return (this->Array<T>(M)=rhs);
	else
		return (this->Array<T>(N)=rhs);
}

void resize (size_t new_size)
{
	throw std::exception("Cannot Resize Fixed Array");
}