
#include <iostream>
#include <memory>
#include "GeneratorSwapFixedIbor.h"
#include "SwapFixedIborDefinition.h"
#include "AnnuityCouponFixedDefinition.h"
int main()
{
	std::cout << "\n start  ";

	GeneratorSwapFixedIbor generator;
	double etc = 0;
	double mktQuote = 0;

	SwapFixedIborDefinition mySwap(mktQuote, generator, etc);
	AnnuityCouponFixedDefinition fixedLeg = mySwap.getFixedLeg(mktQuote, generator, etc);
	std::cout << "\n finish \n Ja \n";

	return 0; 
}