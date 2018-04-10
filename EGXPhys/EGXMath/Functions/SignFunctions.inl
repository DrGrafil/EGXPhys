/// @file EGXMath/Functions/SignFunctions.inl
///
/// @brief Implimentation of functions related to the sign function.
/// @author Elliot Grafil (Metex)
/// @date 4/9/18


namespace EGXMath {

	template <typename T>
	inline int QuickSign(const T& x)
	{
		return (T(0) < x) - (x < T(0));
	}

}//namespace EGXMath
