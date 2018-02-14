#include "SwapFixedIborDefinition.h"
#include "GeneratorSwapFixedIbor.h"
#include <iostream>



SwapFixedIborDefinition::SwapFixedIborDefinition()//const AnnuityCouponFixedDefinition& fixedLeg, const AnnuityCouponIborDefinition& iborLeg)
	//: fixedLeg{ fixedLeg }, iborLeg{ iborLeg }
{
	std::cout << "Object of class 'SwapFixedIborDefinition' is being created";
}
SwapFixedIborDefinition::SwapFixedIborDefinition(double startDate, double endDate, double notional, double rate, int zero)
	: startDate{ startDate }, endDate{ endDate }, notional{ notional }, rate{ rate }, zero{ zero }
{
	std::cout << "Object SwapFixedIbor is being created";
}
SwapFixedIborDefinition::SwapFixedIborDefinition(double startDate, double endDate, GeneratorSwapFixedIbor generator, double notional, double rate, int zero)
{
	SwapFixedIborDefinition myObject= generator.generateThisInstrument(startDate, endDate, notional, rate, zero);
	std::cout << "generator.generateThisInstrument is being called from SwapFixedIborDefinition";
}
/*
SwapFixedIborDefinition::SwapFixedIborDefinition(double startDate, double endDate, GeneratorSwapFixedIbor generator, double notional, double rate, int zero)
	: startDate{ startDate }, endDate{ endDate }, generator{ generator }, notional{ notional }, rate{ rate }, zero{ zero }
{
	gen = generator.generateThisInstrument(startDate, endDate, notional, rate, zero);
	std::cout << "generator.generateThisInstrument is being called from SwapFixedIborDefinition";
}
*/
SwapFixedIborDefinition::~SwapFixedIborDefinition()
{
}

double SwapFixedIborDefinition::get_smth() {
	std::cout << " we can call smth ";
	return 100;

}