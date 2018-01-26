#include "SpreadCalculator.h"
//#include "Cash.h"

// I have been offered this: spreadCalculator::~spreadCalculator(Cash cash, double curves)
SpreadCalculator::SpreadCalculator(const Cash& cash, double curves)
	: cash{ cash }, curves{ curves }
{ 	
}
double SpreadCalculator::get_spread() {
	return 0;

}

double SpreadCalculator::get_spread(const Cash& cash) const {
double dfStart = 1;
double dfEnd = cash.get_endTime();
double spread = 0;
double part1 = cash.get_initialAmount() * dfStart;
double part2 = (cash.get_notional() + cash.get_interestAmount()) * dfEnd;
double part3 = (cash.get_notional() * cash.get_accrualFactor() * dfEnd);
//spread =  ( part1 - part2 ) / part3;
return spread;

}

/*
double SpreadCalculator::get_spread(const Cash& cash, double curves) const {
	double dfStart = 1;

	//dfStart = cash.get_startTime();
	double dfEnd = curves;
	double spread = 0;
	double part1 = cash.get_initialAmount() * dfStart;
	double part2 = (cash.get_notional() + cash.get_interestAmount()) * dfEnd;
	double part3 = (cash.get_notional() * cash.get_accrualFactor() * dfEnd);
	//spread =  ( part1 - part2 ) / part3;
	return spread;

}
*/
// return curves
// pass by value/reference
// visitor pattern
// use pointer/smart pointer to pass cash
// look at singleton desing pattern and static functions