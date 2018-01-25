#include "Cash.h"


Cash::Cash(const Currency& currency, double startTime, double endTime, double notional, double rate, double accrualFactor)
	: currency{ currency }, startTime{ startTime }, endTime{ endTime }, notional{ notional }, rate{ rate }, accrualFactor{ accrualFactor }
{
	interestAmount = notional * rate * accrualFactor;

}

// we make getters and private with consts