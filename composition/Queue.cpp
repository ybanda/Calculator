// $Id: Queue.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include "Queue.h"

//#define MAX_SIZE 10 // Defining a constant for storing maximum size

//
// Queue
//
template <typename T>
Queue <T>::Queue (void)
	:stack_one_(new Stack<T>()),
	stack_two_(new Stack<T>())

{

}

//
// Queue
//
template <typename T>
Queue <T>::Queue (const Queue & queue)
	:stack_one_(new Stack<T>(*(queue.stack_one_))),
	stack_two_(new Stack<T>(*(queue.stack_two_)))
{
	
	
}

//
// ~Queue
//
template <typename T>
Queue <T>::~Queue (void)
{
	
}

//
// enqueue
//
template <typename T>
void Queue <T>::enqueue (T element)
{
	/*while(!(this->stack_one_->is_empty()))
		this->stack_two->push(this->stack_one->top());
	*/
	while(!this->stack_two_->is_empty())
		this->stack_one_->push(this->stack_two_->top());
		
	this->stack_one_->push(element);

}

//
// dequeue
//
template <typename T>
T Queue <T>::dequeue (void)
{	
	while(!this->stack_one_->is_empty())
		{
		this->stack_two_->push(this->stack_one_->top());
		this->stack_one_->pop();
		}
			
	T item  = this->stack_two_->top();	
	this->stack_two_->pop();
	return item;
}


//
// clear
//
template <typename T>
void Queue <T>::clear (void)
{
	this->stack_one_->clear();
	this->stack_two_->clear();
}
