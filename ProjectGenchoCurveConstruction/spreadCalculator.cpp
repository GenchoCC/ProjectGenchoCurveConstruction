#include "SpreadCalculator.h"
//#include "Cash.h"

// I have been offered this: spreadCalculator::~spreadCalculator(Cash cash, double curves)
SpreadCalculator::SpreadCalculator(const Cash& cash, double curves)
	: cash{ cash }, curves{ curves }
{ 
	curves = curves + 1;
	//double dfStart = 1;
	//double dfEnd = curves;
}
//SpreadCalculator::get_spread(cash, dfStart, dfEnd) {
//	double spread;
//	spread =  (cash.get_initialAmount() * dfStart - (cash.get_notional() + cash.get_interestAmount()) * dfEnd) / (cash.get_notional() * cash.get_accrualFactor() * dfEnd);
//	return spread;
//}
// return curves
// pass by value/reference
// visitor pattern
// use pointer/smart pointer to pass cash
// look at singleton desing pattern and static functions