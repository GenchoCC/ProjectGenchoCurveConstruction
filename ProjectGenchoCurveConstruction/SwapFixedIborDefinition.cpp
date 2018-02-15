#include "SwapFixedIborDefinition.h"
#include "GeneratorSwapFixedIbor.h"
#include <iostream>
//#include "AnnuityCouponFixedDefinition.h"


SwapFixedIborDefinition::SwapFixedIborDefinition() {}


SwapFixedIborDefinition::SwapFixedIborDefinition(double mktQuote, GeneratorSwapFixedIbor generator, double etc)
	: mktQuote{ mktQuote }, generator{ generator }, etc{ etc }
{
	std::cout << "Object SwapFixedIbor is being created";

}

SwapFixedIborDefinition SwapFixedIborDefinition::getDefinition(double startDate, double endDate, GeneratorSwapFixedIbor generator, double notional, double rate, int zero)
{
	return SwapFixedIborDefinition(mktQuote, generator, etc);
}
/*
AnnuityCouponFixedDefinition SwapFixedIborDefinition::getFixedLeg(double mktQuote, GeneratorSwapFixedIbor generator, double etc)
{
	return AnnuityCouponFixedDefinition(mktQuote, generator, etc);
}
*/
SwapFixedIborDefinition::~SwapFixedIborDefinition()
{
}

double SwapFixedIborDefinition::get_smth() {
	std::cout << " we can call smth ";
	return 100;
}