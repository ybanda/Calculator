 // $Id: Array.cpp 2015-02-28 15:48:07Z banday $
// Include the Array class

#include <iostream>
#include <exception>
#include "Array.h"
#include "Stack.h"
#include "Expr_Tree_Builder.h"
#include "Expr_Parser.h"
#include "Eval_Expr_Tree.h"

using namespace std;

int main(int argc, char * argv [])
{
  	
	std::string infix_input=" "; 

	while(true)
	{
		Expr_Parser parser;

		std::cout << "Enter an expression: "<<std::endl;

		getline(std::cin,infix_input);

		if(!infix_input.compare("QUIT")) break;

		int result;
		
		if(parser.evaluate_expression(infix_input, result))
				std::cout<<result<<std::endl;
	
	}

	return 0;

}
