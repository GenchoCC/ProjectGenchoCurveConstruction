#include <iostream>
#include "SwapFixedIborDefinition.h"
#include "GeneratorSwapFixedIbor.h"
#include "AnnuityCouponFixedDefinition.h"


SwapFixedIborDefinition::SwapFixedIborDefinition() {}

SwapFixedIborDefinition::SwapFixedIborDefinition(double mktQuote, GeneratorSwapFixedIbor generator, double etc)
	: mktQuote{ mktQuote }, generator{ generator }, etc{ etc }
{
	std::cout << "\n Object SwapFixedIbor is being created";
}

AnnuityCouponFixedDefinition SwapFixedIborDefinition::getFixedLeg(double mktQuote, GeneratorSwapFixedIbor generator, double etc)
{
	return AnnuityCouponFixedDefinition(mktQuote, generator, etc);
}

double SwapFixedIborDefinition::get_smth() {
	std::cout << "\n  we can call smth ";
	return 100;
}

SwapFixedIborDefinition::~SwapFixedIborDefinition(){}

