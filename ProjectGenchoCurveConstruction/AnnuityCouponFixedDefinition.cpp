#include <iostream>
#include "SwapFixedIborDefinition.h"
#include "GeneratorSwapFixedIbor.h"
#include "AnnuityCouponFixedDefinition.h"
#include "Currency.h"

AnnuityCouponFixedDefinition::AnnuityCouponFixedDefinition()
{
	std::cout << "\n Object AnnuityCouponFixedDefinition is being created";
}

AnnuityCouponFixedDefinition::AnnuityCouponFixedDefinition(double mktQuote, GeneratorSwapFixedIbor generator, double etc)
{
	std::cout << "\n Object AnnuityCouponFixedDefinition is being created";
}

AnnuityCouponFixedDefinition AnnuityCouponFixedDefinition::from(Currency currency, double maturityDate, double frequency, double notional, double fixedRate, bool isPayer)
{
	/*
	int paymentDates[] = { 0,0,0 };
	std::array<int, 3> myints = { 0,0, 0 };
	double coupon0 [] = {9,8,7};
	coupon0[0] = CouponFixedDefinition(paymentDates[0], currency);
	for (int a = 1; a < arr.size(); a = a + 1) {
		std::cout << "value of a: " << a;
	}
	*/
	double coupons = 1;
	double calendar = 2;
	return AnnuityCouponFixedDefinition(coupons, calendar);
}

AnnuityCouponFixedDefinition::AnnuityCouponFixedDefinition(double coupons, double calendar)
{
	std::cout << "\n returned Object AnnuityCouponFixedDefinition is being created";

}


AnnuityCouponFixedDefinition::~AnnuityCouponFixedDefinition(){}
