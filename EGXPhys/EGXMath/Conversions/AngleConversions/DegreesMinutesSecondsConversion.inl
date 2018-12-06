/// @file EGXMath/Conversions/AngleConversions/DegreesMinutesSecondsConversion.inl
///
/// @brief Implimentation of degrees minutes seconds conversions.
/// @author Elliot Grafil 
/// @date 3/28/18


namespace EGXMath {

	template<typename T>
	T DegreesMinutesSecondsToRadian(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreeToRadian(DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond));
	}

	template<typename T>
	T DegreesMinutesSecondsToMilliradian(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreeToMilliradian(DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond));
	}

	template<typename T>
	T DegreesMinutesSecondsToTurn(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreeToTurn(DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond));
	}

	template<typename T>
	T DegreesMinutesSecondsToDegree(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return integerDegree + (arcminute / 60.0) + (arcsecond / 3600);
	}

	template<typename T>
	T DegreesMinutesSecondsToDecimalDegree(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	T DegreesMinutesSecondsToArcdegree(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	T DegreesMinutesSecondsToIntegerDegree(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return std::round(DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond));
	}

	template<typename T, typename T2>
	T DegreesMinutesSecondsToBinaryDegree(const T& integerDegree, const T& arcminute, const T& arcsecond, const T2& bits) {
		return DegreeToBinaryDegree(DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond), bits);
	}

	template<typename T>
	T DegreesMinutesSecondsToArcminute(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreeToArcminute(DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond));
	}

	template<typename T>
	T DegreesMinutesSecondsToArcsecond(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreeToArcsecond(DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond));
	}

	template<typename T>
	T DegreesMinutesSecondsToMilliarcsecond(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreeToMilliarcsecond(DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond));
	}

	template<typename T>
	T DegreesMinutesSecondsToMicroarcsecond(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreeToMicroarcsecond(DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond));
	}

	template<typename T>
	void DegreesMinutesSecondsToDMS(const T& integerDegree, const T& arcminute, const T& arcsecond, T& integerDegree2, T& arcminute2, T& arcsecond2) {
		integerDegree2 = integerDegree;
		arcminute2 = arcminute;
		arcsecond2 = arcsecond;
	}

	template<typename T>
	void DegreesMinutesSecondsToHoursMinutesSeconds(const T& integerDegree, const T& arcminute, const T& arcsecond, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond), hour, minute, second);
	}

	template<typename T>
	void DegreesMinutesSecondsToHMS(const T& integerDegree, const T& arcminute, const T& arcsecond, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond), hour, minute, second);
	}

	template<typename T>
	T DegreesMinutesSecondsToGradian(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreeToGradian(DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond));
	}

	template<typename T>
	T DegreesMinutesSecondsToGon(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreeToGon(DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond));
	}

	template<typename T>
	std::string DegreesMinutesSecondsToCompassWind(const T& integerDegree, const T& arcminute, const T& arcsecond, const unsigned int winds, const bool abbreviate) {
		return DegreeToCompassWind(DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond), winds, abbreviate);
	}

}//namespace EGXPhys
