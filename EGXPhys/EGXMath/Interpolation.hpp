#include "Math/MathConst.hpp"

namespace EGMath
{
	
template< typename T, typename T2 >
inline T LinearInterpolate( T y1, T y2, T2 mu)
{
   return( y1 * ( 1 - mu ) + y2 * mu );
}


template<typename T, typename T2>
inline T CosineInterpolate( T y1, T y2, T2 mu)
{
   T2 mu2;

   mu2 = ( 1.0 - cos ( mu * pi ) ) / 2.0;
   return( y1 * ( 1 - mu2 ) + y2 * mu2 ) ;
}

template<typename T, typename T2>
T CubicInterpolate( T y0,T y1, T y2, T y3, T mu )
{
   T a0,a1,a2,a3;
   T2 mu2;

   mu2 = mu * mu;
   a0 = y3 - y2 - y0 + y1;
   a1 = y0 - y1 - a0;
   a2 = y2 - y0;
   a3 = y1;

   return( a0 * mu * mu2 + a1 * mu2 + a2 * mu + a3 );
}


//Need to Specialize for vec3 and vec4.
/*
   Tension: 1 is high, 0 normal, -1 is low
   Bias: 0 is even,
         positive is towards first segment,
         negative towards the other
*/
template<typename T, typename T2>
T HermiteInterpolate( T y0,T y1, T y2, T y3, T2 mu, T2 tension, T2 bias )
{
	T m0,m1,mu2,mu3;
	T a0,a1,a2,a3;
	mu2 = mu * mu;
	mu3 = mu2 * mu;
	m0  = (y1-y0)*(1+bias)*(1-tension)/2;
	m0 += (y2-y1)*(1-bias)*(1-tension)/2;
	m1  = (y2-y1)*(1+bias)*(1-tension)/2;
	m1 += (y3-y2)*(1-bias)*(1-tension)/2;
	a0 =  2*mu3 - 3*mu2 + 1;
	a1 =    mu3 - 2*mu2 + mu;
	a2 =    mu3 -   mu2;
	a3 = -2*mu3 + 3*mu2;

	return( a0 * y1 + a1 * m0 + a2 * m1 + a3 * y2 );
}

}
