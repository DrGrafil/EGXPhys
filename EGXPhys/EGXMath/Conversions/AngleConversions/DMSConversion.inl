/// @file EGXMath/Conversions/AngleConversions/DMSConversion.inl
///
/// @brief Implimentation of degrees minutes seconds conversions.
/// @author Elliot Grafil 
/// @date 3/29/18


namespace EGXMath {

	template<typename T>
	T DMSToRadian(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreesMinutesSecondsToRadian(integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	T DMSToMilliradian(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreesMinutesSecondsToMilliradian(integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	T DMSToTurn(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreesMinutesSecondsToTurn(integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	T DMSToDegree(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	T DMSToDecimalDegree(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DMSToDegree(integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	T DMSToArcdegree(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DMSToDegree(integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	T DMSToIntegerDegree(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreesMinutesSecondsToIntegerDegree(integerDegree, arcminute, arcsecond);
	}

	template<typename T, typename T2>
	T DMSToBinaryDegree(const T& integerDegree, const T& arcminute, const T& arcsecond, const T2& bits) {
		return DegreesMinutesSecondsToBinaryDegree(integerDegree, arcminute, arcsecond, bits);
	}

	template<typename T>
	T DMSToArcminute(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreesMinutesSecondsToArcminute(integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	T DMSToArcsecond(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreesMinutesSecondsToArcsecond(integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	T DMSToMilliarcsecond(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreesMinutesSecondsToMilliarcsecond(integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	T DMSToMicroarcsecond(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreesMinutesSecondsToMicroarcsecond(integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void DMSToDegreesMinutesSeconds(const T& integerDegree, const T& arcminute, const T& arcsecond, T& integerDegree2, T& arcminute2, T& arcsecond2) {
		integerDegree2 = integerDegree;
		arcminute2 = arcminute;
		arcsecond2 = arcsecond;
	}

	template<typename T>
	void DMSToHoursMinutesSeconds(const T& integerDegree, const T& arcminute, const T& arcsecond, T& hour, T& minute, T& second) {
		DegreesMinutesSecondsToHoursMinutesSeconds(DMSToDegree(integerDegree, arcminute, arcsecond), hour, minute, second);
	}

	template<typename T>
	void DMSToHMS(const T& integerDegree, const T& arcminute, const T& arcsecond, T& hour, T& minute, T& second) {
		DegreesMinutesSecondsToHoursMinutesSeconds(DMSToDegree(integerDegree, arcminute, arcsecond), hour, minute, second);
	}

	template<typename T>
	T DMSToGradian(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DegreesMinutesSecondsToGradian(integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	T DMSToGon(const T& integerDegree, const T& arcminute, const T& arcsecond) {
		return DMSToGradian(integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	std::string DMSToCompassWind(const T& integerDegree, const T& arcminute, const T& arcsecond, const unsigned int winds, const bool abbreviate) {
		return DegreeToCompassWind(DMSToDegree(integerDegree, arcminute, arcsecond), winds, abbreviate);
	}

}//namespace EGXPhys
