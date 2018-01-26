//#pragma once

#include "Cash.h"

class SpreadCalculator
{
	const Cash cash; //Defining Class Object as const //When an object is declared or created using the const keyword, its data members can never be changed, during the object's lifetime.
	double curves;

public:
	SpreadCalculator(const Cash& cash, double curves); // constructor 
	double get_spread(const Cash & cash) const;
	

};

//class spreadCalculator
//{
//public:
//	spreadCalculator();
//	~spreadCalculator();
//};
