#pragma once
class GeneratorSwapFixedIbor
{
	double somePrimitive;
	double startDate;
	double endDate;
	double notional;
	double rate;
	int zero;
public:
	GeneratorSwapFixedIbor();
	~GeneratorSwapFixedIbor();
	double getSomePrimitive();

};
/*
 * this is what inside the OG GeneratorSwapFixedIbor generator
 *
_businessDayConvention	ModifiedFollowingBusinessDayConvention(id = 1538)
_calendar	CalendarTarget(id = 1539)
_endOfMonth	true
_fixedLegDayCount	ThirtyUThreeSixty(id = 1557)
_fixedLegPeriod	Period(id = 1558)
_fromEnd	false
_iborIndex	IborIndex(id = 1559)
_name	"EUR1YEURIBOR3M" (id = 1554)
_spotLag	2
_stubShort	true
*/
