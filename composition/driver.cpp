// Include the Array class

#include <iostream>
#include <exception>
#include "Array.h"
#include "Stack.h"
#include "Queue.h"
#include <conio.h>
#include <stdio.h>
#include "Fixed_Array.h" 
using namespace std;
int main(int argc, char * argv [])
{
  

  Array<char> array_one (5,'2');
  cout<<"Size of the array 1 :: "<<array_one.size()<<endl;

  cout<<" Elements of Array 1 :: "<<endl;
  for (int i =0; i<array_one.size();++i)
	  cout<<array_one[i]<<endl;
  cout<<"End of Elements of Array 1 :: "<<endl;

  Array<int> array_two(2);
  cout<<"Size of the array 2 :: "<<array_two.size()<<endl;

  Array<char> array_three(2,'3');
  cout<<" Elements of Array 3 :: "<<endl;
  for (int i =0; i<array_three.size();++i)
	  cout<<array_three[i]<<endl;
  cout<<"End of Elements of Array 3 :: "<<endl;

  array_one =array_three;
  cout<<" Elements of Array 4 :: "<<endl;
  for (int i =0; i<array_one.size();++i)
	  cout<<array_one[i]<<endl;
  cout<<"End of Elements of Array 4 :: "<<endl;

  
  
  Stack<char> stack_;
  stack_.push('a');
  std::cout<<"Size ::"<<stack_.size()<<'\n';
  stack_.push('b');
  stack_.push('c');
  stack_.push('d');
  stack_.push('e');
  stack_.push('f');
  stack_.pop();
  std::cout<<"Size ::"<<stack_.size()<<'\n';
  stack_.clear();
  std::cout<<"Size ::"<<stack_.size()<<'\n';

  stack_.push('f');
  Queue<int> queue_;
  queue_.enqueue(2);
  
  std::cout<<"Size ::"<<queue_.size()<<'\n';
  queue_.enqueue(2);
  queue_.enqueue(2);
  queue_.enqueue(2);
  queue_.dequeue();
  std::cout<<"Size ::"<<queue_.size()<<'\n';
  queue_.clear();

  std::cout<<"Size ::"<<queue_.size()<<'\n';
  
  Fixed_Array<int,10> fixed_(3);
  std::cout<<"Fixed Array ::"<<fixed_.size()<<'\n';
  
  Fixed_Array<int,10> fixed_one(4);
  //fixed_=fixed_one;

  

  return 0;

}
