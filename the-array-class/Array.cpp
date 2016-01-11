 // $Id: Array.cpp 1473 2014-01-20 15:48:07Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"
#include <iostream>
#include <stdexcept>


//
// Array
//
Array::Array (void)
// Yashwanth, initialize each member variable on its own line. This way,
// each initialization has a distinct line for error reporting and debugging.
	
	//Dr.Hill , I have declared each variable in each line.

	:data_(0),
	cur_size_(0),
	max_size_(0)
{

}

//
// Array (size_t)
//
Array::Array (size_t length)
// Yashwanth, initialize each member variable on its own line. This way,
// each initialization has a distinct line for error reporting and debugging.

//Dr.Hill , I have declared each variable in each line.
	:data_(new char[length]),
	cur_size_(length),
	max_size_(length)
{

}

//
// Array (size_t, char)
//
Array::Array (size_t length, char fill)
// Yashwanth, initialize each member variable on its own line. This way,
// each initialization has a distinct line for error reporting and debugging.

//Dr.Hill , I have declared each variable in each line.

	:data_(new char[length]),
	cur_size_(length),
	max_size_(length)
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
// Yashwanth, initialize each member variable on its own line. This way,
// each initialization has a distinct line for error reporting and debugging.

//Dr.Hill , I have declared each variable in each line.

	:data_(new char[array.max_size_]),
	cur_size_(array.cur_size_),
	max_size_(array.max_size_)
{
	for (size_t index =0 ; index<=array.cur_size_;++index)
	{
    // Yashwanth, you should access array.data_ directly instead of making a
    // function call to the index operator each time.

		//Dr.Hill , I have used array.data_ instead of array.
		data_[index]=array.data_[index];
	}

}

//
// ~Array
//
Array::~Array (void)
{
  // Yashwanth, do not use NULL. Use either 0 or nullptr in the case of C++11.

	//Dr.Hill, replaced NULL with 0
	if(data_!=0)
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
    // Yashwanth, you also need to handle the case where data_ is not
    // large enough to hold all the elements in rhs. In that case, you
    // need to grow the array. Right now, you will have runtime errors
    // for this scenario.
    
		//Dr.Hill , Created a Temporary Array inorder to 
		//increase the size of the array
		char *temp_array_= this->data_;
		this->cur_size_= rhs.cur_size_;
		this->max_size_ = rhs.max_size_;

		this->data_= new char[cur_size_];

		for(size_t index = 0 ; index < this->max_size_;++index)
		{
			this->data_[index] = rhs.data_[index];
		}

		if(temp_array_!=0)
			delete []temp_array_;
		return *this;
	}
		
}

//
// operator []
//
char & Array::operator [] (size_t index)
{
  // Yashwanth, per the header you are to throw an exception if index is
  // out of range.

	//Dr.Hill, I have handled the exception.
	
	if(index>=this->cur_size_)
		throw std::out_of_range("Invalid Index Value \n");

	return this->data_[index];	
}

//
// operator [] 
//
const char & Array::operator [] (size_t index) const
{
  // Yashwanth, per the header you are to throw an exception if index is
  // out of range.

	//Dr.Hill, I have handled the exception.
	if(index>=this->cur_size_)
		throw std::out_of_range("Invalid Index Value \n");
	else
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
    // Yashwanth, you are heading in the right direction. Right now,
    // data_ still has the old data. You need to swap the pointers and
    // then delete the old data.
    
		//Dr.Hill, Swapped the pointers
		//removed old data in data_
		char *new_array_ = this->data_;
		this->data_= new char[new_size];
		

		for(size_t index = 0 ; index <new_size; ++index)
		{
			//To Avoid Array Index Out of Bounds Exception
			if(index<=this->cur_size_)
				//Dr.Hill , Updated the statement to delete old data
				this->data_[index] =new_array_[index];
		}
		
		this->cur_size_ = new_size;
		
		this->max_size_ = new_size;
		
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
      // Yashwanth, it is easier to write: return !(*this == rhs)
  
	 //Dr.Hill, used !(*this == rhs)

	return !(*this == rhs);

}

//
// fill
//
void Array::fill (char ch)
{
	for(size_t index = 0 ;index<this->cur_size_;++index)
		this->data_[index] =ch;
}