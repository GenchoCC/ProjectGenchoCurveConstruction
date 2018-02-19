#pragma once
#include "GeneratorSwapFixedIbor.h"
#include "AnnuityCouponFixedDefinition.h"
#include "Currency.h"


class AnnuityCouponFixedDefinition
{
//private:
	GeneratorSwapFixedIbor generator;
	double mktQuote;
	double etc;
	Currency currency;
public:
	AnnuityCouponFixedDefinition();
	AnnuityCouponFixedDefinition(double mktQuote, GeneratorSwapFixedIbor generator, double etc);
	AnnuityCouponFixedDefinition from(Currency currency, double maturityDate, double frequency, double notional, double fixedRate, bool isPayer);
	AnnuityCouponFixedDefinition(double coupons, double calendar);
	~AnnuityCouponFixedDefinition();
};
