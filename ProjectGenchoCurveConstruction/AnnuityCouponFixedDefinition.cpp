#include "AnnuityCouponFixedDefinition.h"
#include <iostream>


AnnuityCouponFixedDefinition::AnnuityCouponFixedDefinition()
{
	std::cout << "Object AnnuityCouponFixedDefinition is being created";
}

AnnuityCouponFixedDefinition::AnnuityCouponFixedDefinition(double mktQuote, GeneratorSwapFixedIbor generator, double etc)
	//: mktQuote{ mktQuote }, generator{ generator }, etc{ etc }
{
	std::cout << "Object AnnuityCouponFixedDefinition is being created";
}

AnnuityCouponFixedDefinition::~AnnuityCouponFixedDefinition()
{
}
