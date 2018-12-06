/// @file EGXMath/Conversions/AngleConversions/DecimalDegreeConversion.inl
///
/// @brief Implimentation of decimal degree conversions
/// @author Elliot Grafil 
/// @date 3/28/18


namespace EGXMath {

	template<typename T>
	T DecimalDegreeToRadian(const T& decimalDegree) {
		return DegreeToRadian(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToMilliradian(const T& decimalDegree) {
		return DegreeToMilliradian(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToTurn(const T& decimalDegree) {
		return DegreeToTurn(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToDegree(const T& decimalDegree) {
		return DegreeToDegree(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToDecimalDegree(const T& decimalDegree) {
		return DegreeToDecimalDegree(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToArcdegree(const T& decimalDegree) {
		return DegreeToArcdegree(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToIntegerDegree(const T& decimalDegree) {
		return DegreeToIntegerDegree(decimalDegree);
	}

	template<typename T, typename T2>
	T DecimalDegreeToBinaryDegree(const T& decimalDegree, const T2& bits) {
		return DegreeToBinaryDegree(decimalDegree, bits);
	}

	template<typename T>
	T DecimalDegreeToArcminute(const T& decimalDegree) {
		return DegreeToArcminute(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToArcsecond(const T& decimalDegree) {
		return DegreeToArcsecond(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToMilliarcsecond(const T& decimalDegree) {
		return DegreeToMilliarcsecond(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToMicroarcsecond(const T& decimalDegree) {
		return DegreeToMicroarcsecond(decimalDegree);
	}

	template<typename T>
	void DecimalDegreeToDegreesMinutesSeconds(const T& decimalDegree, T& integerDegree, T& arcminute, T& arcsecond) {
		DegreeToDegreesMinutesSeconds(decimalDegree, integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void DecimalDegreeToDMS(const T& decimalDegree, T& integerDegree, T& arcminute, T& arcsecond) {
		DegreeToDegreesMinutesSeconds(decimalDegree, integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void DecimalDegreeToHoursMinutesSeconds(const T& decimalDegree, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(decimalDegree, hour, minute, second);
	}

	template<typename T>
	void DecimalDegreeToHMS(const T& decimalDegree, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(decimalDegree, hour, minute, second);
	}

	template<typename T>
	T DecimalDegreeToGradian(const T& decimalDegree) {
		return DegreeToGradian(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToGon(const T& decimalDegree) {
		return DegreeToGradian(decimalDegree);
	}

	template<typename T>
	std::string DecimalDegreeToCompassWind(const T& decimalDegree, const unsigned int winds, const bool abbreviate) {
		return DegreeToCompassWind(decimalDegree, winds, abbreviate);
	}

}//namespace EGXPhys
