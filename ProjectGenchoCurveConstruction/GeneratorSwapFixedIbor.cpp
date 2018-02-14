#include "GeneratorSwapFixedIbor.h"
#include <iostream>

//std::string

GeneratorSwapFixedIbor::GeneratorSwapFixedIbor()//double startDate, double endDate)
	: somePrimitive{ somePrimitive }
{
	somePrimitive = 1;
	std::cout << "Object GeneratorSwapFixedIbor is being created";
}


GeneratorSwapFixedIbor::~GeneratorSwapFixedIbor()
{
}

SwapFixedIborDefinition GeneratorSwapFixedIbor::generateThisInstrument(double startDate, double endDate, double notional, double rate, int zero)
{
	return SwapFixedIborDefinition(startDate, endDate, notional, rate, zero);
}
/*
SwapFixedIborDefinition GeneratorSwapFixedIbor::generateThisInstrument(double startDate, double endDate, double notional, double rate, int zero)
{
	return SwapFixedIborDefinition(startDate, endDate, notional, rate, zero);
}
*/
/*
void GeneratorSwapFixedIbor::generateThisInstrument(GeneratorSwapFixedIbor generator, double startDate, double endDate, double notional, double rate)
{
}
*/
