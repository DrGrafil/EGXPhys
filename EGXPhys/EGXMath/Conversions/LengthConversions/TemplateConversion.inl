/// @file EGXMath/Conversions/DistanceConversions/uzitzsConversion.inl
///
/// @brief Implimentation of uzitzs conversions
/// @author Elliot Grafil (Metex)
/// @date 6/1/18


namespace EGXMath {

	template<typename T>
	T DecimalDegreeToRadian(const T& decimalDegree) {
		return DegreeToRadian(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToMilliradian(const T& decimalDegree) {
		return DegreeToMilliradian(decimalDegree);
	}



}//namespace EGXPhys
