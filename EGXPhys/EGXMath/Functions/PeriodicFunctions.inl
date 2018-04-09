/// @file EGXMath/Conversions/AngleConversions/HMSConversion.inl
///
/// @brief Implimentation of hours minutes seconds conversions.
/// @author Elliot Grafil (Metex)
/// @date 3/29/18


namespace EGXMath {

	/*Sawtooth wave, -1,1 with a period of period*/
	template <typename T>
	T SawtoothWave(T x, T period)
	{
		return 2.0*(x / period - floor(x / period + 0.5));
	}
	/*Square wave, -1,1 with a period of period*/
	template <typename T>
	T SquareWave(T x, T period)
	{
		return QuickSign(sin(2.0 * pi * x / period));
	}

	/*Triangle wave, -1,1 with a period of period*/
	template <typename T>
	T TriangleWave(T x, T period)
	{
		return 2.0 * fabs(SawtoothWave(x + (period / 4.0), period)) + 1.0;
	}

	template <typename T>
	T HeavisideStep(T x)
	{
		return (x >= 0);
	}

}//namespace EGXPhys
