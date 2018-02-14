#pragma once
#include "Currency.h"

class CouponIborDefinition
{

	double paymentDate;
	double accrualStartDate;
	double accrualEndDate;
	double paymentAccrualFactor;
	double notional;
	double fixingDate;
	// double IborIndex index;
	// double Calendar calendar;

public:
	CouponIborDefinition(Currency currency, double paymentDate, double accrualStartDate, double notional, double fixingDate);
	~CouponIborDefinition();
};

