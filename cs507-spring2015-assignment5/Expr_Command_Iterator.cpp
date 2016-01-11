// $Id: Expr_Command_Iterator.cpp  2015-02-28 banday $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.




//
//Constructor Initialisation
//
template <typename T>
Expr_Command_Iterator<T> :: Expr_Command_Iterator( Array<T> &array)
	:array_(array),
	cur_size_(0)
{

}

//
//Destructor
//
template <typename T>
Expr_Command_Iterator<T> ::~Expr_Command_Iterator(void)
{

}

//
//Checks whether there is any other elements in the Array
//
template <typename T>
bool Expr_Command_Iterator<T>::is_done(void)
{
	return (this->cur_size_>=this->array_.size());
	
}


template <typename T>
T  Expr_Command_Iterator <T> ::operator * (void)
{
	return this->array_.get(this->cur_size_);
}

template <typename T>
T * Expr_Command_Iterator<T>::operator->(void)
{
	return &this->array_.get(this->cur_size_);
}

//
//Advance to next element
//
template <typename T>
bool Expr_Command_Iterator<T> :: advance(void)
{
	++this->cur_size_;
	return true;
}