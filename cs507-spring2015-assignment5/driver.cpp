 // $Id: Array.cpp 2015-02-28 15:48:07Z banday $
// Include the Array class

#include <iostream>
#include <exception>
#include <time.h>
#include "Array.h"
#include "Stack.h"

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
#include "Expr_Tree_Builder.h"
#include "Expr_Parser.h"
#include "Eval_Expr_Tree.h"
#include "Expr_Evaluator_Strategy.h"
#include "Postfix_Evaluator_Strategy.h"
#include "Postfix_Flyweight_Strategy.h"
#include "ExprTree_Evaluator_Strategy.h"

using namespace std;
  
Expr_Evaluator_Strategy * preprocess (const string & infix_input) 
{
	bool use_postfix = true ;// preprocess to determine strategy type 
	if(infix_input =="1")
		return new Postfix_Evaluator_Strategy();
	else if(infix_input=="2")
		return new Postfix_Flyweight_Strategy();
	else if (infix_input =="3")
		return new ExprTree_Evaluator_Strategy();
	
	return 0;	
	
}
int main (int argc, char * argv [])
{
	
	
	while(true)
	{
	std::string infix_input="0";  

	std::cout << "Enter an Version of Calculator "<<endl<<"1 for Postfix , 2 for FlyWeight , 3 for Tree"<<std::endl;
	
	getline(std::cin,infix_input);
	
	Expr_Evaluator_Strategy* impl =preprocess (infix_input);
	
	std::string expr="0";  

	std::cout << "Enter an expression , QUIT to Exit the Application "<<std::endl;
	
	getline(std::cin,expr);

	if(!expr.compare("QUIT"))
	break;

	clock_t t1,t2;
    
	t1=clock();

	float diff = 0 , diff2 =0;

	// use the strategy
	if (impl->parse_expression (expr))
	{
		t2=clock();
		
		diff = ((float)t2-(float)t1);
		
		t1=clock();
		 

		impl->evaluate_expression ();
		
		t2 =clock();
		
		diff2 = ((float)t2-(float)t1);
    
		
	}
	cout<<"Time Taken to Parse is = "<<((double)diff)/double(CLOCKS_PER_SEC) *1000 <<"msec"<<endl << "Time Taken to Evaluate  the Expression = "<<((double)diff2)/double(CLOCKS_PER_SEC) *1000 <<"msecs"<<endl; 
	delete impl;
	}



  return 0;

}
