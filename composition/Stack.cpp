// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Stack.h"

#define MAX_SIZE 10 // Defining a constant for storing maximum size
//
// Stack
//
template <typename T>
Stack <T>::Stack (void)
	:array_(new Array<T>(MAX_SIZE)),
	top_(-1)

{

}

//
// Stack
//
template <typename T>
Stack <T>::Stack (const Stack & stack)
	:array_(new Array<T>(stack)),
	top_(stack.top_),
	max_size_(stack.max_size_)
{
	
	
}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void)
{
	
}

//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
	if(this->top_==this->array_->size())
		this->array_->resize(this->array_->size() + MAX_SIZE);
	
	array_->set(++top_,element);
	
	

}

//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{
	if(this->top_>=0)
	
		top_--;
	
	else
	   empty_exception();
}

//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
	this->array_=(this->array_= rhs.array_);
	this->top_=rhs.top_;
	this->max_size_=rhs.max_size_;

}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
	this->top_=-1;
	this->array_->resize(MAX_SIZE);
}
