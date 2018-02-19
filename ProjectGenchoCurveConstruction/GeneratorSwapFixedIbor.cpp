#include "GeneratorSwapFixedIbor.h"
#include <iostream>

GeneratorSwapFixedIbor::GeneratorSwapFixedIbor()
	//: somePrimitive{ somePrimitive }
{
	somePrimitive = 101;
	std::cout << "\n Object GeneratorSwapFixedIbor(empty) is being created" << "\n" <<somePrimitive;
}

GeneratorSwapFixedIbor::GeneratorSwapFixedIbor(double somePrimitive, double startDate, double endDate, double notional, double rate, int zero)
{
}

GeneratorSwapFixedIbor::~GeneratorSwapFixedIbor()
{
}

double GeneratorSwapFixedIbor::getSomePrimitive()
{
	return somePrimitive;
}

