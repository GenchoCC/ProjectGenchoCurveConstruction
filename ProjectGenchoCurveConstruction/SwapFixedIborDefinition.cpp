#include "SwapFixedIborDefinition.h"
#include <iostream>



SwapFixedIborDefinition::SwapFixedIborDefinition(const AnnuityCouponFixedDefinition& fixedLeg, const AnnuityCouponIborDefinition& iborLeg)
	: fixedLeg{ fixedLeg }, iborLeg{ iborLeg }
{
	std::cout << "Object of class 'SwapFixedIborDefinition' is being created";

}
