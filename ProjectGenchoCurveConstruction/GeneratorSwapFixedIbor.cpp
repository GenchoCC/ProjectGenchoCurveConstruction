#include "GeneratorSwapFixedIbor.h"
#include <iostream>

GeneratorSwapFixedIbor::GeneratorSwapFixedIbor()
	: somePrimitive{ somePrimitive }
{
	somePrimitive = 101;
	std::cout << "Object GeneratorSwapFixedIbor is being created" << somePrimitive;
}

GeneratorSwapFixedIbor::~GeneratorSwapFixedIbor()
{
}

double GeneratorSwapFixedIbor::getSomePrimitive()
{
	return somePrimitive;
}

