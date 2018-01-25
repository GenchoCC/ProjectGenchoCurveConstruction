
#include <iostream>
#include <memory>
#include "Cash.h"
#include "Currency.h"
#include "SpreadCalculator.h"

int main()
{
	std::cout << "Hello World!" << std::endl;
	Cash  obj1(Currency("EUR"), 2, 3, 1, 0.01, 0.1);
	
	auto cash1 = std::make_shared<Cash>(Currency("USD"), 2, 3, 1, 0.01, 0.1);
	
	auto cash2 = std::make_shared<Cash>(Currency("USD"), 2.1, 3.1, 1.1, 0.011, 0.111);
	
	double y = cash1->get_rate(); /// because pointer
	double x, x_new, jacobian_inv;
	double spreadValue;
	double error = 10 ^ -3;
	x_new = 999;
	double i = 3;
	SpreadCalculator obj2(obj1, 0.1);
	spreadValue = obj2.get_spread();
	do
	{
		x = x_new;   
		
		//auto spreadCalcForCash1 = std::make_shared<SpreadCalculator>(cash1, x); // Q1 what shall we pass?
		// see link
		// https://stackoverflow.com/questions/10826541/passing-shared-pointers-as-arguments
		//double spreadValue = spreadCalcForCash1 ->get_spread();

		jacobian_inv = std::pow((i / x),-1);
		x_new = x - jacobian_inv * spreadValue;
		i = i - 1;
	} while (i > 0);// fabs(x_new - x) >= error);
	
	return 0;
	


}
