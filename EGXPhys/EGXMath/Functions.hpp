// Quick math functions

//=================================
// header guards
#ifndef __MATH_FUNCTIONS_HPP__ 
#define __MATH_FUNCTIONS_HPP__

//=================================
// included dependencies
#include <math.h>
#include "Math/MathConst.hpp"
//=================================
//

template <typename T> 
inline int QuickSign(T val)
{
   	return (T(0) < val) - (val < T(0));
}

float AbsLog( float value, float base = 10.0f);

namespace EGMath
{
	
/*Sawtooth wave, -1,1 with a period of period*/
template <typename T> 
T SawtoothWave( T x, T period )
{
	return 2.0*( x/period - floor( x/period + 0.5 ) );
}
/*Square wave, -1,1 with a period of period*/
template <typename T> 
T SquareWave( T x, T period )
{
	return QuickSign( sin( 2.0 * pi * x / period ) );
}

/*Triangle wave, -1,1 with a period of period*/
template <typename T> 
T TriangleWave( T x, T period )
{
    return 2.0 * fabs( SawtoothWave( x + (period/4.0) , period) ) + 1.0;
}

template <typename T> 
T HeavisideStep( T x )
{
	return ( x >= 0 );
}

template <typename T> 
T Gaussian( T x, T mu, T sigma )
{
	return ( 1.0 / (sigma * sqrt( 2.0 * pi ) ) ) * exp( -pow( x - mu, 2.0 )/( 2.0 * sigma * sigma ) );
}

template <typename T> 
T GaussianFWHM( T sigma )
{
	return ( 2.0 * sqrt( 2.0*log(2.0) ) * sigma );
}

}
#endif

