#include "Flyweight_Expr_Command_Factory.h"


Flyweight_Expr_Command_Factory::Flyweight_Expr_Command_Factory(void)
	:add_(0),
	sub_(0),
	mul_(0),
	div_(0),
	mod_(0)

{

	

}


Flyweight_Expr_Command_Factory::~Flyweight_Expr_Command_Factory(void)
{
	if(add_!=0)
		delete add_;
	if(sub_ != 0)
		delete sub_;
	if(mul_!=0)
		delete mul_;
	if(div_!=0)
		delete div_;
	if(mod_!=0)
		delete mod_;
	
}

Number_Command * Flyweight_Expr_Command_Factory::create_number_command (int num)
{
	return new Number_Command(num);
}

Add_Command * Flyweight_Expr_Command_Factory::create_add_command()
{
	if(add_ == 0)
		add_ = new Add_Command();
	
	return this->add_;
}
Subtract_Command * Flyweight_Expr_Command_Factory:: create_subtract_command()
{
	if(sub_ == 0)
		sub_ = new Subtract_Command();
	return this->sub_;
}

Multiply_Command * Flyweight_Expr_Command_Factory:: create_multiply_command()
{
	if(mul_==0)
		mul_=new Multiply_Command();
		
	return this->mul_;
}

Divide_Command * Flyweight_Expr_Command_Factory::create_divide_command()
{
	if(div_==0)
		div_= new Divide_Command();
		
	return this->div_;

}
Modulus_Command * Flyweight_Expr_Command_Factory::create_modulus_command()
{
	if(mod_==0)
		mod_ = new Modulus_Command();
		
	return this->mod_;
}
