#pragma once

#include "Cash.h"

class SpreadCalculator
{

	const Cash cash; //Defining Class Object as const //When an object is declared or created using the const keyword, its data members can never be changed, during the object's lifetime.
	double curves;

public:


//	double get_spread(cash, dfStart, dfEnd) { return 0; };
	//double get_spread() { return 0; }

	SpreadCalculator(const Cash& cash, double curves);// constructor 

};

//class spreadCalculator
//{
//public:
//	spreadCalculator();
//	~spreadCalculator();
//};
