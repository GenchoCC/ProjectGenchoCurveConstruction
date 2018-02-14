#include "AnnuityCouponFixedDefinition.h"
#include "AnnuityCouponDefinition.h"

// virtual function of the AnnuityCouponDefinition defined here
int AnnuityCouponDefinition::get_n_of_coupons(double typeOfCoupon, double settlementDate, double maturityDate, double paymentPeriod) {
	return 1;
}
	
	
/*
AnnuityCouponFixedDefinition::AnnuityCouponFixedDefinition()
{
}


AnnuityCouponFixedDefinition::~AnnuityCouponFixedDefinition()
{
}
*/