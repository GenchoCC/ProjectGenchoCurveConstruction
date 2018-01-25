
#include <iostream>
#include <memory>
#include "Cash.h"
#include "Currency.h"
#include "SpreadCalculator.h"

int main()
{
	std::cout << "Hello World!" << std::endl;
	
	//Cash obj(Currency("EUR"), 2, 3, 1, 0.01, 0.1);
	
	auto cash1 = std::make_shared<Cash>(Currency("USD"), 2, 3, 1, 0.01, 0.1);
	
	auto cash2 = std::make_shared<Cash>(Currency("USD"), 2.1, 3.1, 1.1, 0.011, 0.111);
	
	double y = 9;// cash1->get_rate(); /// because pointer
	double x, x_new, jacobian_inv;
	double error = 10 ^ -3;
	x_new = 999;
	double i = 3;
	do
	{
		x = x_new;                
		//auto spreadValue = std::make_shared<SpreadCalculator>(cash1, x);
		jacobian_inv = (y/x);//^-1
		x_new = x - jacobian_inv * 1;// spreadValue;
		i = i - 1;
	} while (i > 0);// fabs(x_new - x) >= error);
	
	return 0;
	


}
