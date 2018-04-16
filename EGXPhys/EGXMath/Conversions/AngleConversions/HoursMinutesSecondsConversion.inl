/// @file EGXMath/Conversions/AngleConversions/HoursMinutesSecondsConversion.inl
///
/// @brief Implimentation of hours minutes seconds conversions.
/// @author Elliot Grafil (Metex)
/// @date 3/28/18


namespace EGXMath {

	template<typename T>
	T HoursMinutesSecondsToRadian(const T& hour, const T& minute, const T& second) {
		return DegreeToRadian(HoursMinutesSecondsToDegree(hour, minute, second));
	}

	template<typename T>
	T HoursMinutesSecondsToMilliradian(const T& hour, const T& minute, const T& second) {
		return DegreeToMilliradian(HoursMinutesSecondsToDegree(hour, minute, second));
	}

	template<typename T>
	T HoursMinutesSecondsToTurn(const T& hour, const T& minute, const T& second) {
		return DegreeToTurn(HoursMinutesSecondsToDegree(hour, minute, second));
	}

	template<typename T>
	T HoursMinutesSecondsToDegree(const T& hour, const T& minute, const T& second) {
		return  15.0 * hour + (minute / 4.0) + (second / 240.0);
	}

	template<typename T>
	T HoursMinutesSecondsToDecimalDegree(const T& hour, const T& minute, const T& second) {
		return HoursMinutesSecondsToDegree(hour, minute, second);
	}

	template<typename T>
	T HoursMinutesSecondsToArcdegree(const T& hour, const T& minute, const T& second) {
		return HoursMinutesSecondsToDegree(hour, minute, second);
	}

	template<typename T>
	T HoursMinutesSecondsToIntegerDegree(const T& hour, const T& minute, const T& second) {
		return std::round(HoursMinutesSecondsToDegree(hour, minute, second));
	}

	template<typename T, typename T2>
	T HoursMinutesSecondsToBinaryDegree(const T& hour, const T& minute, const T& second, const T2& bits) {
		return DegreeToBinaryDegree(HoursMinutesSecondsToDegree(hour, minute, second),bits);
	}

	template<typename T>
	T HoursMinutesSecondsToArcminute(const T& hour, const T& minute, const T& second) {
		return DegreeToArcminute(HoursMinutesSecondsToDegree(hour, minute, second));
	}

	template<typename T>
	T HoursMinutesSecondsToArcsecond(const T& hour, const T& minute, const T& second) {
		return DegreeToArcsecond(HoursMinutesSecondsToDegree(hour, minute, second));
	}

	template<typename T>
	T HoursMinutesSecondsToMilliarcsecond(const T& hour, const T& minute, const T& second) {
		return DegreeToMilliarcsecond(HoursMinutesSecondsToDegree(hour, minute, second));
	}

	template<typename T>
	T HoursMinutesSecondsToMicroarcsecond(const T& hour, const T& minute, const T& second) {
		return DegreeToMicroarcsecond(HoursMinutesSecondsToDegree(hour, minute, second));
	}

	template<typename T>
	void HoursMinutesSecondsToDegreesMinutesSeconds(const T& hour, const T& minute, const T& second, T& integerDegree, T& arcminute, T& arcsecond) {
		DegreeToDegreesMinutesSeconds(HoursMinutesSecondsToDegree(hour, minute, second), integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void HoursMinutesSecondsToDMS(const T& hour, const T& minute, const T& second, T& integerDegree, T& arcminute, T& arcsecond) {
		DegreeToDegreesMinutesSeconds(HoursMinutesSecondsToDegree(hour, minute, second), integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void HoursMinutesSecondsToHMS(const T& hour, const T& minute, const T& second, T& hour2, T& minute2, T& second2) {
		hour2 = hour;
		minute2 = minute;
		second2 = second;
	}

	template<typename T>
	T HoursMinutesSecondsToGradian(const T& hour, const T& minute, const T& second) {
		return DegreeToGradian(HoursMinutesSecondsToDegree(hour, minute, second));
	}

	template<typename T>
	T HoursMinutesSecondsToGon(const T& hour, const T& minute, const T& second) {
		return DegreeToGon(HoursMinutesSecondsToDegree(hour, minute, second));
	}

	template<typename T>
	std::string HoursMinutesSecondsToCompassWind(const T& hour, const T& minute, const T& second, const unsigned int winds, const bool abbreviate) {
		return DegreeToCompassWind(HoursMinutesSecondsToDegree(hour, minute, second), winds, abbreviate);
	}

}//namespace EGXPhys
