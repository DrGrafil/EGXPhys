/// @file EGXMath/Conversions/AngleConversions/IntegerDegreeConversion.inl
///
/// @brief Implimentation of integer degree conversions.
/// @author Elliot Grafil (Metex)
/// @date 3/28/18


namespace EGXMath {

	template<typename T>
	T IntegerDegreeToRadian(const T& integerDegree) {
		return DegreeToRadian(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToMilliradian(const T& integerDegree) {
		return DegreeToMilliradian(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToTurn(const T& integerDegree) {
		return DegreeToTurn(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToDegree(const T& integerDegree) {
		return DegreeToDegree(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToDecimalDegree(const T& integerDegree) {
		return DegreeToDecimalDegree(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToArcdegree(const T& integerDegree) {
		return DegreeToArcdegree(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToIntegerDegree(const T& integerDegree) {
		return DegreeToIntegerDegree(integerDegree);
	}

	template<typename T, typename T2>
	T IntegerDegreeToBinaryDegree(const T& integerDegree, const T2& bits) {
		return DegreeToBinaryDegree(integerDegree, bits);
	}

	template<typename T>
	T IntegerDegreeToArcminute(const T& integerDegree) {
		return DegreeToArcminute(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToArcsecond(const T& integerDegree) {
		return DegreeToArcsecond(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToMilliarcsecond(const T& integerDegree) {
		return DegreeToMilliarcsecond(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToMicroarcsecond(const T& integerDegree) {
		return DegreeToMicroarcsecond(integerDegree);
	}

	template<typename T>
	void IntegerDegreeToDegreesMinutesSeconds(const T& integerDegree, T& degree, T& arcminute, T& arcsecond) {
		degree = integerDegree;
		arcminute = 0;
		arcsecond = 0;
	}

	template<typename T>
	void IntegerDegreeToDMS(const T& integerDegree, T& degree, T& arcminute, T& arcsecond) {
		degree = integerDegree;
		arcminute = 0;
		arcsecond = 0;
	}

	template<typename T>
	void IntegerDegreeToHoursMinutesSeconds(const T& integerDegree, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(integerDegree, hour, minute, second);
	}

	template<typename T>
	void IntegerDegreeToHMS(const T& integerDegree, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(integerDegree, hour, minute, second);
	}

	template<typename T>
	T IntegerDegreeToGradian(const T& integerDegree) {
		return DegreeToGradian(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToGon(const T& integerDegree) {
		return DegreeToGradian(integerDegree);
	}

	template<typename T>
	std::string IntegerDegreeToCompassWind(const T& integerDegree, const unsigned int winds, const bool abbreviate) {
		return DegreeToCompassWind(integerDegree, winds, abbreviate);
	}
}//namespace EGXPhys
