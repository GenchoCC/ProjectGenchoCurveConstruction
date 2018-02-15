#pragma once
class AnnuityCouponDefinition   
{
	//int n_of_coupons;
	//double coupons[]; // not doubles butmore complex structure
	double typeOfCoupon; // 0 - fixed, 1 -floating
	double settlementDate;
	double maturityDate;
	double paymentPeriod; // period between payments.
public:
	AnnuityCouponDefinition();
	~AnnuityCouponDefinition();
	int get_n_of_coupons(double typeOfCoupon, double settlementDate, double maturityDate, double paymentPeriod); // declaration of the Virtual Function that will be redefined in the AnnuityCouponFixedDefinition
};

