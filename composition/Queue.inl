// -*- C++ -*-
// $Id: Queue.inl 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help on
// this assignment.

//
// size
//
template <typename T>
inline
size_t Queue <T>::size (void) const
{
	return ((this->stack_one_->size())+(this->stack_two_->size()));
}



//
// is_empty
//
template <typename T>
inline
bool Queue <T>::is_empty (void) const
{
	return ((this->stack_one_->top()==-1) && (this->stack_two_->top()==-1));
		
}
