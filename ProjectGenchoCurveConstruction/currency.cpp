#include "Currency.h"

Currency::Currency(std::string currencyName)
	: currencyName{ currencyName }
{
	currencyName;

}

Currency::Currency()
{
	currencyName = "UAH";
}