#include "AnnuityCouponFloatingDefinition.h"
#include "AnnuityCouponDefinition.h"

// virtual function of the AnnuityCouponDefinition defined here
int AnnuityCouponDefinition::get_n_of_coupons(double typeOfCoupon, double settlementDate, double maturityDate, double paymentPeriod) {
	int answer;
	if (paymentPeriod == 1) {
		answer = (maturityDate - settlementDate);
	}
	else {
		answer = 1;
	}
	return answer;
}
AnnuityCouponFloatingDefinition::AnnuityCouponFloatingDefinition()
{
}


AnnuityCouponFloatingDefinition::~AnnuityCouponFloatingDefinition()
{
}
