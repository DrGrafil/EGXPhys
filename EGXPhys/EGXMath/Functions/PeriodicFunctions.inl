/// @file EGXMath/Functions/PeriodicFunctions.inl
///
/// @brief Implimentation of functions related to the log function.
/// @author Elliot Grafil 
/// @date 4/9/18


namespace EGXMath {

	template <typename T>
	T SawtoothWave(const T& x, const T& period)
	{
		return 2.0*(x / period - floor(x / period + 0.5));
	}

	template <typename T>
	T SquareWave(const T& x, const T& period)
	{
		return QuickSign(sin(2.0 * pi * x / period));
	}

	template <typename T>
	T TriangleWave(const T& x, const T& period)
	{
		T fl = floor((2.0 * x / period) + 0.5);
		return (4.0/period) * (x - (period/2.0) * fl) * pow(-1.0, fl);
	}

	template <typename T>
	T HeavisideStep(const T& x)
	{
		return (x >= 0);
	}

}//namespace EGXMath
