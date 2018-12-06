/// @file EGXMath/Functions/LogFunctions.inl
///
/// @brief Implimentation of functions related to the log function.
/// @author Elliot Grafil 
/// @date 4/9/18


namespace EGXMath {


	template<typename T>
	T SignedLog(const T& x) {
		return (T)QuickSign(x)* log(abs(x));
	}

	template<typename T>
	T SignedLog(const T& x, const T& base) {
		return ((T)QuickSign(x)* log(abs(x)) / log(base));
	}

}//namespace EGXMath
