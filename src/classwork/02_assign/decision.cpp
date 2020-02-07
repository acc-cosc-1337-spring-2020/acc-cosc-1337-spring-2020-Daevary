#include "decision.h"
//Write the function code that returns the product of hours and hourly_rate.
double gross_pay(double hours, double hourly_payrate)
{
	if (hours > 40)
	{
		double oT = hours - 40;
		return((hours - oT) * hourly_payrate) + (hourly_payrate * 1.5 * oT);
	}
	
	return hours * hourly_payrate;
}
	
