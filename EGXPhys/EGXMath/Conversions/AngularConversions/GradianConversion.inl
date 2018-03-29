/// @file EGXMath/Conversions/AngleConversions/GradianConversion.inl
///
/// @brief Implimentation of gradian conversions.
/// @author Elliot Grafil (Metex)
/// @date 3/28/18


namespace EGXMath {

	template<typename T>
	T GradianToRadian(const T& gradian) {
		return gradian * EGXMath::pi<T> / 200.0;
	}

	template<typename T>
	T GradianToMilliradian(const T& gradian) {
		return GradianToRadian(gradian) * 1000.0;
	}

	template<typename T>
	T GradianToTurn(const T& gradian) {
		return gradian / 400.0;
	}

	template<typename T>
	T GradianToDegree(const T& gradian) {
		return gradian * 9.0 / 10.0;
	}

	template<typename T>
	T GradianToDecimalDegree(const T& gradian) {
		return GradianToDegree(gradian);
	}

	template<typename T>
	T GradianToArcdegree(const T& gradian) {
		return GradianToDegree(gradian);
	}

	template<typename T>
	T GradianToIntegerDegree(const T& gradian) {
		return std::round(GradianToDegree(gradian));
	}

	template<typename T, typename T2>
	T GradianToBinaryDegree(const T& gradian, const T2& bits) {
		return gradian * std::pow(2.0, bits - 1.0) / (400.0);
	}

	template<typename T>
	T GradianToArcminute(const T& gradian) {
		return gradian * 9.0 / 10.0 * 60.0; 
	}

	template<typename T>
	T GradianToArcsecond(const T& gradian) {
		return gradian * 9.0 / 10.0 * 60.0 * 60.0;
	}

	template<typename T>
	T GradianToMilliarcsecond(const T& gradian) {
		return gradian * 9.0 / 10.0 * 60.0 * 60.0 * 1000.0;
	}

	template<typename T>
	T GradianToMicroarcsecond(const T& gradian) {
		return gradian * 9.0 / 10.0 * 60.0 * 60.0 * 1000.0 * 1000.0;
	}

	template<typename T>
	void GradianToDegreesMinutesSeconds(const T& gradian, T& integerDegree, T& arcminute, T& arcsecond) {
		DegreeToDegreesMinutesSeconds(GradianToDegree(gradian), integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void GradianToDMS(const T& gradian, T& integerDegree, T& arcminute, T& arcsecond) {
		DegreeToDegreesMinutesSeconds(GradianToDegree(gradian), integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void GradianToHoursMinutesSeconds(const T& gradian, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(GradianToDegree(gradian), hour, minute, second);
	}

	template<typename T>
	void GradianToHMS(const T& gradian, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(GradianToDegree(gradian), hour, minute, second);
	}

	template<typename T>
	T GradianToGon(const T& gradian) {
		return GradianToGradian(gradian);
	}

	template<typename T>
	std::string GradianToCompassWind(const T& gradian, const unsigned int winds, const bool abbreviate) {
		return DegreeToCompassWind(GradianToDegree(gradian), winds, abbreviate);
	}

}//namespace EGXPhys
