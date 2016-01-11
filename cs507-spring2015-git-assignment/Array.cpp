 // $Id: Array.cpp 1473 2014-01-20 15:48:07Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"
#include <iostream>
#include <conio.h>


//
// Array
//
Array::Array (void)
	:data_(0),cur_size_(0),max_size_(0)
{

}

//
// Array (size_t)
//
Array::Array (size_t length)
	:data_(new char[length]),cur_size_(length),max_size_(length)
{

}

//
// Array (size_t, char)
//
Array::Array (size_t length, char fill)
	:data_(new char[length]),cur_size_(length),max_size_(length)
{
	for(size_t index = 0 ; index<length;++index)
	{
		data_[index] = fill;
	}
}

//
// Array (const Array &)
//
Array::Array (const Array & array)
	:data_(new char[array.max_size_]),cur_size_(array.cur_size_),max_size_(array.max_size_)
{
	for (size_t index =0 ; index<=array.cur_size_;++index)
	{
		data_[index]=array[index];
	}

}

//
// ~Array
//
Array::~Array (void)
{
	if(data_!=NULL)
		delete [] data_;
}

//
// operator =
//
const Array & Array::operator = (const Array & rhs)
{
	if(this ==&rhs)
		return *this;
	else
	{
		this->cur_size_= rhs.cur_size_;
		this->max_size_ = rhs.max_size_;

		for(size_t index = 0 ; index < this->max_size_;++index)
		{
			this->data_[index] = rhs.data_[index];
		}

		return *this;
	}
		
}

//
// operator []
//
char & Array::operator [] (size_t index)
{
	return this->data_[index];	
}

//
// operator [] 
//
const char & Array::operator [] (size_t index) const
{
	return this->data_[index];
}

//
// get
//
char Array::get (size_t index) const
{
	if(index>=this->cur_size_)
		throw std::out_of_range("Invalid Index Value \n");
	else
		return this->data_[index];
}

//
// set
//
void Array::set (size_t index, char value)
{
	if(index>=this->cur_size_)
		throw std::out_of_range("Invalid Index Value \n");
	else
		this->data_[index] = value;
	
}

//
// resize
//
void Array::resize (size_t new_size)
{
	

	//New Size is lesser than the current size
	 if(new_size<this->cur_size_)
		this->cur_size_= new_size;
	
	//new_size is greater than the current size
	else if(new_size>this->cur_size_)
	{
		char *new_array_ = new char[new_size];

		for(size_t index = 0 ; index <new_size; ++index)
		{
			//To Avoid Array Index Out of Bounds Exception
			if(index<=this->cur_size_)
				new_array_[index]=this->data_[index];
		}

		//Deleting Array 
		delete[] new_array_;
	}
	
}

//
// find (char)
//
int Array::find (char ch) const
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
int Array::find (char ch, size_t start) const
{
	

	if(start >=this->cur_size_)
		throw std::out_of_range("Invalid Index :: Out of Range Exception \n");
	
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
bool Array::operator == (const Array & rhs) const
{
	
	if(this==&rhs)
	
		return true;
	
	else if(this->cur_size_==rhs.cur_size_)
		{
			
			for(size_t index =0; index <rhs.cur_size_;++index)
			{
				if(this->data_[index]==rhs.data_[index])
					return true;
								
			}
			return false;
		}
		else
			return false;

}


//
// operator !=
//
bool Array::operator != (const Array & rhs) const
{
		
	if(this==&rhs)
		return false;
	else
		return true;
}

//
// fill
//
void Array::fill (char ch)
{
	for(size_t index = 0 ;index<this->cur_size_;++index)
		this->data_[index] =ch;
}