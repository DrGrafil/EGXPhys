#include <math.h>
#include "Math/Functions.hpp"

float AbsLog( float value, float base)
{
	return ( (float)QuickSign(value)* logf( fabs(value) )/ logf( base ) );
}
