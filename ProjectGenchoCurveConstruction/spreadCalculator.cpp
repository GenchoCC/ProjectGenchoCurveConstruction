#include "SpreadCalculator.h"
//#include "Cash.h"
#include <map>

// I have been offered this: spreadCalculator::~spreadCalculator(Cash cash, double curves)
SpreadCalculator::SpreadCalculator(const Cash& cash, double curves)
	: cash{ cash }, curves{ curves }
{ 	
}

double SpreadCalculator::get_spread(const Cash& cash, double curves) const {
double dfStart = 1; //cash.get_startTime();
double dfEnd = curves; // cash.get_endTime();

double part1 = cash.get_initialAmount() * dfStart;
double part2 = (cash.get_notional() + cash.get_interestAmount()) * dfEnd;
double part3 = (cash.get_notional() * cash.get_accrualFactor() * dfEnd);

return (part1 - part2) / part3;
}



/*
double SpreadCalculator::get_spreadSensitivity(const Cash& cash, double curves) const {
	
	typedef std::map<std::string, double> MapDsc;
	
	double dfStart = 1;
	double dfEnd = curves;
	// Backward sweep
	double parSpreadBar = 1.0;
	double dfEndBar = -(cash.get_initialAmount() * dfStart / (dfEnd * dfEnd)) / (cash.get_notional() * cash.get_accrualFactor ) * parSpreadBar;
	double dfStartBar = (cash.get_initialAmount() / dfEnd) / (cash.get_notional() * * cash.get_accrualFactor) * parSpreadBar;
	
	//listDiscounting.add(DoublesPair.of(deposit.getStartTime(), -deposit.getStartTime() * dfStart * dfStartBar));
	//listDiscounting.add(DoublesPair.of(deposit.getEndTime(), -deposit.getEndTime() * dfEnd * dfEndBar));
	MapDsc//.put(curves.getName(deposit.getCurrency()), listDiscounting);
	return MapDsc;
}
*/

// return curves
// pass by value/reference
// visitor pattern
// use pointer/smart pointer to pass cash
// look at singleton desing pattern and static functions