#pragma once // with this uncommented we have 0 errors. 
// otherwise: Cash class type redefinition error
// and      : S[readCA;culator::cash uses undefined class Cash


#include "Currency.h"

class Cash {
private:
	const Currency currency;
	const double startTime;
	double endTime;
	double accrualFactor;
	double notional;
	double rate;
	double interestAmount;
	double initialAmount;

public:
	Cash(const Currency& currency, double startTime, double endTime, double notional, double rate, double accrualFactor);
	double get_startTime() { return startTime; }
	double get_endTime() { return endTime; }
	double get_accrualFactor() { return accrualFactor; }
	double get_notional() { return notional; }
	double get_rate() { return rate; }
	double get_interestAmount() { return interestAmount; }
	double get_initialAmount() { return initialAmount; }

	

};