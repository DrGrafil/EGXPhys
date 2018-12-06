/// @file EGXMath/Conversions/AngleConversions/RadianConversion.inl
///
/// @brief Implimentation of radian conversions.
/// @author Elliot Grafil 
/// @date 3/28/18


namespace EGXMath {

	template<typename T>
	T RadianToMilliradian(const T& radian) {
		return radian / 1000.0;
	}

	template<typename T>
	T RadianToTurn(const T& radian) {
		return radian / (2.0 * (T)EGXMath::pi);
	}

	template<typename T>
	T RadianToDegree(const T& radian) {
		return radian * 180.0 / (T)EGXMath::pi;
	}

	template<typename T>
	T RadianToDecimalDegree(const T& radian) {
		return RadianToDegree(radian);
	}

	template<typename T>
	T RadianToArcdegree(const T& radian) {
		return RadianToDegree(radian);
	}

	template<typename T>
	T RadianToIntegerDegree(const T& radian) {
		return std::round(RadianToDegree(radian));
	}

	template<typename T, typename T2>
	T RadianToBinaryDegree(const T& radian, const T2& bits) {
		return std::round(radian * std::pow(2.0, bits - 1.0) / (2.0 * (T)EGXMath::pi));
	}

	template<typename T>
	T RadianToArcminute(const T& radian) {
		return radian * 10800.0 / (T)EGXMath::pi; // 60 * 180
	}

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T RadianToArcsecond(const T& radian) {
		return radian * 648000.0 / (T)EGXMath::pi; // 60 * 60 * 180 
	}

	template<typename T>
	T RadianToMilliarcsecond(const T& radian) {
		return radian * 648000000.0 / (T)EGXMath::pi; // 60 * 60 * 180 * 1000
	}

	template<typename T>
	T RadianToMicroarcsecond(const T& radian) {
		return radian * 648000000000.0 / (T)EGXMath::pi;// 60 * 60 * 180 * 1000 * 1000
	}

	template<typename T>
	void RadianToDegreesMinutesSeconds(const T& radian, T& integerDegree, T& arcminute, T& arcsecond) {
		DegreeToDegreesMinutesSeconds(RadianToDegree(radian), integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void RadianToDMS(const T& radian, T& integerDegree, T& arcminute, T& arcsecond) {
		DegreeToDegreesMinutesSeconds(RadianToDegree(radian), integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void RadianToHoursMinutesSeconds(const T& radian, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(RadianToDegree(radian), hour, minute, second);
	}

	template<typename T>
	void RadianToHMS(const T& radian, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(RadianToDegree(radian), hour, minute, second);
	}

	//https://en.wikipedia.org/wiki/Gradian
	template<typename T>
	T RadianToGradian(const T& radian) {
		return radian * 200.0 / (T)EGXMath::pi;
	}

	template<typename T>
	T RadianToGon(const T& radian) {
		return RadianToGradian(radian);
	}

	template<typename T>
	std::string RadianToCompassWind(const T& radian, const unsigned int winds, const bool abbreviate) {
		return DegreeToCompassWind(RadianToDegree(radian), winds, abbreviate);
	}

}//namespace EGXPhys
