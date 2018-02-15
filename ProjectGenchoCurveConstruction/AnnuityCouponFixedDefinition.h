#pragma once
//#include "AnnuityCouponDefinition.h"
#include "GeneratorSwapFixedIbor.h"


class AnnuityCouponFixedDefinition
{
	double mktQuote;
	GeneratorSwapFixedIbor generator;
	double etc;
public:
	AnnuityCouponFixedDefinition();
	AnnuityCouponFixedDefinition(double mktQuote, GeneratorSwapFixedIbor generator, double etc);
	~AnnuityCouponFixedDefinition();
};
/*
class AnnuityCouponFixedDefinition : public AnnuityCouponDefinition 
*/
