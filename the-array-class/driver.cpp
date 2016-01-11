// Include the Array class
#include "Array.h"
#include <iostream>
#include <exception>

int main(int argc, char * argv [])
{
  // TODO Add code that uses the Array class here to test if your
  // implemenation is working correctly.
  //
   Array array_one (8,'3');
  
   //7
   array_one.set(2,'4');
   
   array_one.set(4,'3');

   //8
   std::cout<<"GET_3::"<<array_one.get(3)<<'\n';

   Array array_two (14,'7');

   array_two.set(3,'d');
   array_two.set(4,'f');
   array_two.set(5,'e');

   //3
   std::cout<<"Size 2.size "<<array_two.size() <<(array_two==array_one)<<'\n';
  
   array_two.find('3');

   array_two.resize(5);

   std::cout<<"Size 2.Resize "<<array_two.size()<<'\n';

   //6
   array_two.resize(15);

   std::cout<<"Size 2.Resize "<<array_two.size()<<'\n';
   
   std::cout<<"Array 1 Size "<<array_one.size()<<'\n';
   std::cout<<"Array 2 "<<array_two.size()<<'\n';
   //9
   Array array_three  = (array_two=array_one);

   std::cout<<"Array 3 Size "<<array_three.size()<<'\n';

   
	for(size_t index=0 ; index<array_one.size();++index)
	{
		std::cout<<array_one[index]<<'\t';
	}
	
	for(size_t index=0 ; index<array_two.size();++index)
	{
		std::cout<<array_two[index]<<'\t';
	}
	std::cout<<"\n Array 3 "<<array_three.size()<<'\n';
	for(size_t index=0 ; index<array_three.size();++index)
	{
		std::cout<<array_three[index]<<'\t';
	}

	//4,//5
	std::cout<<"Array . Find 4 "<<array_one.find('4') << '\t' << "Array . Find Invalid :: "<<array_one.find('r') <<'\n';

	std::cout<<"Array . Find 4 Start "<<array_one.find('4',1) << '\t' << "Array . Find Invalid :: "<<array_one.find('r',0) <<'\n';

	//2
	std::cout<<"!= Operator True ::"<<(array_three!=array_two)<<'\n';

	std::cout<<"!= Operator False ::"<<(array_three!=array_three)<<'\n';

	//1
	array_three.fill('Y');
	
	for(size_t index=0 ; index<array_three.size();++index)
	{
		std::cout<<array_three[index]<<'\n';
	}

	Array array_four(7,'a');
	array_four.set(1,'b');
	array_four.set(2,'s');
	array_four.set(3,'d');


	 Array array_five(7,'a');
	
	array_five.set(1,'b');
	array_five.set(2,'e');
	array_five.set(3,'d');

	std::cout<<"Array == Operator "<<(array_four == array_five);

	std::cout <<"Value 3 of the Array "<<array_four[3];
	   
  

  return 0;

}
