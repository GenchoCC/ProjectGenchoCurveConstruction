#include "AnnuityCouponDefinition.h"

AnnuityCouponDefinition::AnnuityCouponDefinition()
{
}


AnnuityCouponDefinition::~AnnuityCouponDefinition()
{
}

/* I thiknk it should not be defined here
int AnnuityCouponDefinition::get_n_of_coupons(double typeOfCoupon, double settlementDate, double maturityDate, double paymentPeriod) const {

double dfStart = 1; //cash.get_startTime();
double dfEnd = curves; // cash.get_endTime();

double part1 = cash.get_initialAmount() * dfStart;
double part2 = (cash.get_notional() + cash.get_interestAmount()) * dfEnd;
double part3 = (cash.get_notional() * cash.get_accrualFactor() * dfEnd);

return (part1 - part2) / part3;
}
*/