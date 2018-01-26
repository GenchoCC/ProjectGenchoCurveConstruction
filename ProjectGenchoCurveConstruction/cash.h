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
	double initialAmount;  // notional

public:
	Cash(const Currency& currency, double startTime, double endTime, double notional, double rate, double accrualFactor);
	double get_startTime() const { return startTime; }  // method with a body.
	double get_endTime() const  { return endTime; } // added const here..
	double get_accrualFactor() const { return accrualFactor; }
	double get_notional() const { return notional; }
	double get_rate() const { return rate; }
	double get_interestAmount() const { return interestAmount; }
	double get_initialAmount() const { return notional; } 

	

};