/// @file EGXMath/Conversions/AngleConversions/HMSConversion.inl
///
/// @brief Implimentation of hours minutes seconds conversions.
/// @author Elliot Grafil (Metex)
/// @date 3/29/18


namespace EGXMath {

	template<typename T>
	T HMSToRadian(const T& hour, const T& minute, const T& second) {
		return HoursMinutesSecondsToRadian(hour,minute,second);
	}

	template<typename T>
	T HMSToMilliradian(const T& hour, const T& minute, const T& second) {
		return HoursMinutesSecondsToMilliradian(hour, minute, second);
	}

	template<typename T>
	T HMSToTurn(const T& hour, const T& minute, const T& second) {
		return HoursMinutesSecondsToTurn(hour, minute, second);
	}

	template<typename T>
	T HMSToDegree(const T& hour, const T& minute, const T& second) {
		return HoursMinutesSecondsToDegree(hour, minute, second);
	}

	template<typename T>
	T HMSToDecimalDegree(const T& hour, const T& minute, const T& second) {
		return HoursMinutesSecondsToDegree(hour, minute, second);
	}

	template<typename T>
	T HMSToArcdegree(const T& hour, const T& minute, const T& second) {
		return HoursMinutesSecondsToDegree(hour, minute, second);
	}

	template<typename T>
	T HMSToIntegerDegree(const T& hour, const T& minute, const T& second) {
		return HoursMinutesSecondsToIntegerDegree(hour, minute, second);
	}

	template<typename T, typename T2>
	T HMSToBinaryDegree(const T& hour, const T& minute, const T& second, const T2& bits) {
		return HoursMinutesSecondsToBinaryDegree(hour, minute, second, bits);
	}

	template<typename T>
	T HMSToArcminute(const T& hour, const T& minute, const T& second) {
		return HoursMinutesSecondsToArcminute(hour, minute, second);
	}

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T HMSToArcsecond(const T& hour, const T& minute, const T& second) {
		return HoursMinutesSecondsToArcsecond(hour, minute, second);
	}

	template<typename T>
	T HMSToMilliarcsecond(const T& hour, const T& minute, const T& second) {
		return HoursMinutesSecondsToMilliarcsecond(hour, minute, second);
	}

	template<typename T>
	T HMSToMicroarcsecond(const T& hour, const T& minute, const T& second) {
		return HoursMinutesSecondsToMicroarcsecond(hour, minute, second);
	}

	template<typename T>
	void HMSToDegreesMinutesSeconds(const T& hour, const T& minute, const T& second, T& integerDegree, T& arcminute, T& arcsecond) {
		HoursMinutesSecondsToDegreesMinutesSeconds(hour, minute, second, integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void HMSToDMS(const T& hour, const T& minute, const T& second, T& integerDegree, T& arcminute, T& arcsecond) {
		HoursMinutesSecondsToDegreesMinutesSeconds(hour, minute, second, integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void HMSToHoursMinutesSeconds(const T& hour, const T& minute, const T& second, T& hour2, T& minute2, T& second2) {
		hour2 = hour;
		minute2 = minute;
		second2 = second;
	}

	template<typename T>
	T HMSToGradian(const T& hour, const T& minute, const T& second) {
		return HoursMinutesSecondsToGradian(hour, minute, second);
	}

	template<typename T>
	T HMSToGon(const T& hour, const T& minute, const T& second) {
		return HoursMinutesSecondsToGon(hour, minute, second);
	}

	template<typename T>
	std::string HMSToCompassWind(const T& hour, const T& minute, const T& second, const unsigned int winds, const bool abbreviate) {
		return DegreeToCompassWind(HoursMinutesSecondsToDegree(hour, minute, second), winds, abbreviate);
	}

}//namespace EGXPhys
