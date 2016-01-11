 // $Id: Array.cpp 1473 2014-01-20 15:48:07Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

//#include "Array.h"
#include <iostream>
#include <stdexcept>
#include <algorithm> 

#define MAX_SIZE_ 10

//
// Array
//
template <typename T> // for template creation
Array <T>::Array (void)
	:data_(0),
	cur_size_(0),
	max_size_(MAX_SIZE_)
{

}

//
// Array (size_t)
//
template <typename T > 
Array<T>::Array (size_t length)
	:data_(new T[length]),
	cur_size_(length),
	max_size_(MAX_SIZE_)
{

}

//
// Array (size_t, char)
//
template <typename T > 
Array<T>::Array (size_t length, T fill)
	:data_(new T[length])
	,cur_size_(length)
{
	this->fill(fill);
}

//
// Array (const Array &)
//
template <typename T> 
Array <T>::Array (const Array <T> & array)
	:data_(new T[array.size()]),
	cur_size_(array.size())
{
	for(int i=0;i<array.size();++i)
		this->data_[i] = array.data_[i];
}

//
// ~Array
//
template <typename T > 
Array <T>::~Array (void)
{
  	if(data_!=0)
		delete[] data_;
}

//
// operator =
//
template <typename T > 
const Array<T> & Array<T>::operator = (const Array<T> & rhs)
{
	if(this ==&rhs)
		return *this;
	
	
	if(rhs.size()!=this->cur_size_)
			this->resize(rhs.size());
		
    
		Array<T> temp_array(rhs);
		this->cur_size_=temp_array.cur_size_;
		for(int i=0;i<temp_array.cur_size_;++i)
			this->data_[i]=temp_array.data_[i];
		return *this;
	
		
}

//
// operator []
//
template <typename T> 
T & Array<T>::operator [] (size_t index)
{
  	
	if(index>=this->cur_size_)
		throw std::out_of_range("Invalid Index Value in Operator [] \n");

	return this->data_[index];	
}

//
// operator [] 
//
template <typename T> 
const T & Array<T>::operator [] (size_t index) const
{
  
	if(index>=this->cur_size_)
		throw std::out_of_range("Invalid Index Value in operator [] const \n");
	else
		return this->data_[index];
}

//
// get
//
template <typename T > // for template creation
T Array<T>::get (size_t index) const
{
	if(index>=this->cur_size_)
		throw std::out_of_range("Invalid Index Value in operator get \n");
	else
		return this->data_[index];
}

//
// set
//
template <typename T > // for template creation
void Array<T>::set (size_t index, T value)
{
	if(index>=this->cur_size_)
		throw std::out_of_range("Invalid Index Value in operator set \n");
	else
		this->data_[index] = value;
	
}

//
// resize
//
template <typename T > // for template creation
void Array<T>::resize (size_t new_size)
{
	

	//New Size is lesser than the current size
	 if(new_size<this->cur_size_)
		this->cur_size_= new_size;
	
	//new_size is greater than the current size
	else if(new_size>this->cur_size_)
	{

		//Array array_temp(this->cur_size_);

		//std::swap(this->data_, *array_temp);
    // Yashwanth, you are heading in the right direction. Right now,
    // data_ still has the old data. You need to swap the pointers and
    // then delete the old data.
    
		//Dr.Hill, Swapped the pointers
		//removed old data in data_
		T *new_array_=this->data_;
	
		//delete []this->data_;

		//this->data_ = new char[new_size];
		
		for(size_t index = 0 ; index <new_size; ++index)
		{
			//To Avoid Array Index Out of Bounds Exception
			if(index<=this->cur_size_)
				//Dr.Hill , Updated the statement to delete old data
				this->data_[index] =new_array_[index];
		}
		
		this->cur_size_ = new_size;
		this->max_size_ = new_size;
		
	}
	
}

//
// find (char)
//
template <typename T> // for template creation
int Array<T> ::find (T ch) const
{
	
	for (size_t index = 0; index<this->cur_size_;++index)
	{
		if(this->data_[index]==ch)
		{
			return index;
			break;
		}
	}
	
	return -1;
}

//
// find (char, size_t) 
//

template <typename T> 
// for template creation
int Array<T>::find (T ch, size_t start) const
{
	

	if(start >=this->cur_size_)
		throw std::out_of_range("Invalid Index :: Out of Range Exception in find \n");
	
	for(size_t index = start ; index < this->cur_size_ ; ++index)
	{
		if(data_[index] == ch)
			return index;

	}
	
	return -1;
}

//
// operator ==
//
template <typename T > 
bool Array<T>::operator == (const Array<T> & rhs) const
{
	
	if(this==&rhs)
	
		return true;

	
	else if(this->cur_size_==rhs.cur_size_)
		{
			
		if(this->cur_size_==0 && rhs.cur_size_==0)
			return true;
		else
		{
			for(size_t index =0; index <rhs.cur_size_;++index)
			{
				if(this->data_[index]==rhs.data_[index])
					return true;
								
			}
			return false;
		}
		}
		else
			return false;

}


//
// operator !=
//
template <typename T> // for template creation
bool Array <T>::operator != (const Array <T> & rhs) const
{
      // Yashwanth, it is easier to write: return !(*this == rhs)
  
	 //Dr.Hill, used !(*this == rhs)

	return !(*this == rhs);

}

//
// fill
//
template <typename T> // for template creation
void Array<T>::fill (T ch)
{
	for(size_t index = 0 ;index<this->cur_size_;++index)
		this->data_[index] =ch;
}