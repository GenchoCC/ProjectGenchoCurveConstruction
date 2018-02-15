#pragma once
// we replicate same named class with the 2nd constructor from OG.
#include "GeneratorSwapFixedIbor.h"
//#include "AnnuityCouponFixedDefinition.h"

class SwapFixedIborDefinition
{
private:
	GeneratorSwapFixedIbor generator;
	double startDate;
	double endDate;
	double accrualFactor;
	double notional;
	double rate;
	int zero;
	double mktQuote;
	double etc;
	//AnnuityCouponFixedDefinition fixed_leg;
	//AnnuityCouponFloatingDefinition floating_leg;

public:
	SwapFixedIborDefinition();
	SwapFixedIborDefinition(double mktQuote, GeneratorSwapFixedIbor generator, double etc); //needed for a getDef call
	SwapFixedIborDefinition getDefinition(double startDate, double endDate, GeneratorSwapFixedIbor generator, double notional, double rate, int zero);
	//AnnuityCouponFixedDefinition getFixedLeg(double mktQuote, GeneratorSwapFixedIbor generator, double etc);
	//AnnuityCouponFloatingDefinition getFloatingLeg(double mktQuote, GeneratorSwapFixedIbor generator, double etc);
	~SwapFixedIborDefinition();
	double get_smth();
};

//  * Below a constructor of the fixed - ibor swap from its two legs.
//	* @param fixedLeg The fixed leg.
//	* @param iborLeg The ibor leg.

//SwapFixedIborDefinition(const AnnuityCouponFixedDefinition& fixedLeg, const AnnuityCouponIborDefinition& iborLeg);
//double get_FixedLeg();
//double get_IborLeg();
// do we need to define destructor as well?
	//const AnnuityCouponFixedDefinition fixedLeg; //Defining Class Object as const //When an object is declared or created using the const keyword, its data members can never be changed, during the object's lifetime.
	//const AnnuityCouponIborDefinition iborLeg; //Defining Class Object as const //When an object is declared or created using the const keyword, its data members can never be changed, during the object's lifetime.
