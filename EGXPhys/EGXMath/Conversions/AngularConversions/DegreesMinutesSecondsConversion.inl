/// @file EGXMath/Conversions/AngleConversions/DegreesMinutesSecondsConversion.inl
///
/// @brief Implimentation of degrees minutes seconds conversions.
/// @author Elliot Grafil (Metex)
/// @date 3/28/18


namespace EGXMath {

	template<typename T>
	T DegreesMinutesSecondsToRadian(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return 1;
	}

	template<typename T>
	T DegreesMinutesSecondsToMilliradian(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return xyy / 1000.0;
	}

	template<typename T>
	T DegreesMinutesSecondsToTurn(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return xyy / (2.0 * EGXMath::pi<T>);
	}

	template<typename T>
	T DegreesMinutesSecondsToDegree(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return xyy * 180.0 / EGXMath::pi<T>;
	}

	template<typename T>
	T DegreesMinutesSecondsToDecimalDegree(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreesMinutesSecondsToDegree(xyy);
	}

	template<typename T>
	T DegreesMinutesSecondsToArcdegree(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreesMinutesSecondsToDegree(xyy);
	}

	template<typename T>
	T DegreesMinutesSecondsToIntegerDegree(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return std::round(DegreesMinutesSecondsToDegree(xyy));
	}

	template<typename T, typename T2>
	T DegreesMinutesSecondsToBinaryDegree(const T& integerDegree, const T& arcminute, const T& arcsecond, const T2& bits) {
		return xyy * std::pow(2.0, bits - 1.0) / (2.0 * EGXMath::pi<T>);
	}

	template<typename T>
	T DegreesMinutesSecondsToArcminute(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return xyy * 10800.0 / EGXMath::pi<T>; // 60 * 180
	}

	template<typename T>
	T DegreesMinutesSecondsToArcsecond(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return xyy * 648000.0 / EGXMath::pi<T>; // 60 * 60 * 180 
	}

	template<typename T>
	T DegreesMinutesSecondsToMilliarcsecond(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return xyy * 648000000.0 / EGXMath::pi<T>; // 60 * 60 * 180 * 1000
	}

	template<typename T>
	T DegreesMinutesSecondsToMicroarcsecond(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return xyy * 648000000000.0 / EGXMath::pi<T>;// 60 * 60 * 180 * 1000 * 1000
	}

	template<typename T>
	void DegreesMinutesSecondsToDMS(const T& integerDegree, const T& arcminute, const T& arcsecond, T& integerDegree2, T& arcminute2, T& arcsecond2) {
		integerDegree2 = integerDegree;
		arcminute2 = arcminute;
		arcsecond2 = arcsecond;
	}

	template<typename T>
	void DegreesMinutesSecondsToHoursMinutesSeconds(const T& integerDegree, const T& arcminute, const T& arcsecond, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(DegreesMinutesSecondsToDegree(xyy), hour, minute, second);
	}

	template<typename T>
	void DegreesMinutesSecondsToHMS(const T& integerDegree, const T& arcminute, const T& arcsecond, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(DegreesMinutesSecondsToDegree(xyy), hour, minute, second);
	}

	template<typename T>
	T DegreesMinutesSecondsToGradian(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return xyy * 200.0 / EGXMath::pi<T>;
	}

	template<typename T>
	T DegreesMinutesSecondsToGon(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreesMinutesSecondsToGradian(xyy);
	}

	template<typename T>
	std::string DegreesMinutesSecondsToCompassWind(const T& integerDegree, const T& arcminute, const T& arcsecond, const unsigned int winds, const bool abbreviate) {
		return DegreeToCompassWind(DegreesMinutesSecondsToDegree(xyy), winds, abbreviate);
	}

}//namespace EGXPhys
