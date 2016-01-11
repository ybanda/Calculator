 // $Id: Array.cpp 2015-02-28 15:48:07Z banday $
// Include the Array class

#include <iostream>
#include <exception>
#include "Array.h"
#include "Stack.h"
//#include <conio.h>
#include "Expr_Command_Factory.h"
#include "Expr_Command.h"
#include "Expr_Command_Iterator.h"
#include "Infix_To_Postfix_Command.h"

#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Multiply_Command.h"
#include "Divide_Command.h"
#include "Modulus_Command.h"
#include "Number_Command.h"
#include "Expr_Command.h"

 
using namespace std;

int main(int argc, char * argv [])
{
  
	int result ;
	std::string infix_input="0";   
	Infix_To_Postfix_Command postfix_oper;
	while(true)
	{
	Expr_Command_Factory factory;
	

	std::cout << "Enter an expression:  Enter QUIT to Exit"<<std::endl;
	getline(std::cin,infix_input);
	Array <Expr_Command *> postfix(infix_input.size());
	if(!infix_input.compare("QUIT")) break;

	if(postfix_oper.infix_to_postfix(infix_input,factory,postfix))
	{
	Expr_Command_Iterator<Expr_Command *> iter(postfix);
	postfix_oper.evaluate_postfix(iter,result);

	std::cout<<result<<std::endl;

	//Expr_Command_Iterator<Expr_Command *> del_iter(postfix);
	
	//Dr.Hill, Deleted the Expr_Command during the iteration 
	//for (; !del_iter.is_done (); del_iter.advance())
		//delete *del_iter;


	}
	}

	
  //getch();

  return 0;

}
