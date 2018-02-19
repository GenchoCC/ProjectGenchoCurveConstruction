
#include <iostream>
#include <memory>
#include "Cash.h"
#include "Currency.h"
#include "SpreadCalculator.h"
#include "GeneratorSwapFixedIbor.h"
#include "SwapFixedIborDefinition.h"
//#include "AnnuityCouponFixedDefinition.h"

#include <cmath> // do we need this for log?

double get_zero_rate(double val, double tau) { return -log(val) / tau; }
int main()
{
	std::string currencyName = "EUR";
	double startTime = 0;
	double endTime = 0.0027397260273972603; //half a year?
	double notional = 1.0;
	double rate = 0.01;
	double accrualFactor = 0.002777777777777778; // 1/360
	Cash  obj1(Currency(currencyName), startTime, endTime, notional, rate, accrualFactor);
	
	//auto cash1 = std::make_shared<Cash>(Currency("USD"), 2, 3, 1, 0.01, 0.1);
	//auto cash2 = std::make_shared<Cash>(Currency("USD"), 2.1, 3.1, 1.1, 0.011, 0.111);
	//double y = cash1->get_rate(); /// because pointer
	// class Brent : public Solver1D<Brent> {

	double x, jacobian_at_x, spreadValue_at_x;
	double error = pow( 10 , -12 );
	double x_new = 0.1; // initial guess of a dfEnd
	double df0 = 1; // i.e. DF_0=DF_start=DF_S=dfStart = 1 ( i.e. notional at the moment zero is =notional)
	
	

	do
	{
		x = x_new;   
		SpreadCalculator obj2(obj1, x);
		spreadValue_at_x = obj2.get_spread(obj1, x);

		//auto spreadCalcForCash1 = std::make_shared<SpreadCalculator>(cash1, x); // Q1 what shall we pass?
		// see link
		// https://stackoverflow.com/questions/10826541/passing-shared-pointers-as-arguments
		//double spreadValue = spreadCalcForCash1 ->get_spread();
		// see CashDiscountingMethod.java

		jacobian_at_x = -df0/(obj1.get_accrualFactor()*obj2.get_curves()*obj2.get_curves());//std::pow((y / x), -1);
		x_new = x - spreadValue_at_x / jacobian_at_x;
	} while (abs(x_new - x) >= error);
	//std::cout <<  x_new << "-DFend" << std::endl;
	std::cout << get_zero_rate(x_new, endTime) << "- zero rate; " << x_new << "-DFend";
	double mktQuote = 0.01;
	//GeneratorSwapFixedIbor mySwapGenerator;
	double startDate = 0;
	double endDate = 10;
	GeneratorSwapFixedIbor generator;
	//double print_1 = generator.getSomePrimitive();

	//double etc = 0;
	//int zero;
	//SwapFixedIborDefinition mySwapInitialized;
	//SwapFixedIborDefinition mySwap = mySwapInitialized.getDefinition( startDate, endDate, generator, notional, rate, zero);
	//SwapFixedIborDefinition mySwap(mktQuote, generator, etc);
	//AnnuityCouponFixedDefinition fixedLeg = 
	//mySwap.getFixedLeg(mktQuote, generator, etc);
	//double print = mySwap.get_smth();
	
	return 0;
	


}
