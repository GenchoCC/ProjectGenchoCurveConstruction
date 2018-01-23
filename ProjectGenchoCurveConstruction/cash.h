#include "Currency.h"

class Cash {
	Currency currency;
	double startTime;
	double endTime;
	double accrualFactor;
	double notional;
	double rate;
	double interestAmount;
	double initialAmount;

public:
	Cash(Currency currency, double startTime, double endTime, double notional, double rate, double accrualFactor);
};