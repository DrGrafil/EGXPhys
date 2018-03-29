/// @file EGXMath/Conversions/AngleConversions/GonConversion.inl
///
/// @brief Implimentation of gradian conversions.
/// @author Elliot Grafil (Metex)
/// @date 3/28/18


namespace EGXMath {

	template<typename T>
	T GonToRadian(const T& gradian) {
		return GradianToRadian(gradian);
	}

	template<typename T>
	T GonToMilliradian(const T& gradian) {
		return GradianToMilliradian(gradian);
	}

	template<typename T>
	T GonToTurn(const T& gradian) {
		return GradianToTurn(gradian);
	}

	template<typename T>
	T GonToDegree(const T& gradian) {
		return GradianToDegree(gradian);
	}

	template<typename T>
	T GonToDecimalDegree(const T& gradian) {
		return GradianToDegree(gradian);
	}

	template<typename T>
	T GonToArcdegree(const T& gradian) {
		return GradianToDegree(gradian);
	}

	template<typename T>
	T GonToIntegerDegree(const T& gradian) {
		return std::round(GradianToDegree(gradian));
	}

	template<typename T, typename T2>
	T GonToBinaryDegree(const T& gradian, const T2& bits) {
		return GradianToBinaryDegree(gradian, bits);
	}

	template<typename T>
	T GonToArcminute(const T& gradian) {
		return GradianToArcminute(gradian); 
	}

	template<typename T>
	T GonToArcsecond(const T& gradian) {
		return GradianToArcsecond(gradian); 
	}

	template<typename T>
	T GonToMilliarcsecond(const T& gradian) {
		return GradianToMilliarcsecond(gradian); 
	}

	template<typename T>
	T GonToMicroarcsecond(const T& gradian) {
		return GradianToMicroarcsecond(gradian);
	}

	template<typename T>
	void GonToDegreesMinutesSeconds(const T& gradian, T& integerDegree, T& arcminute, T& arcsecond) {
		DegreeToDegreesMinutesSeconds(GradianToDegree(gradian), integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void GonToDMS(const T& gradian, T& integerDegree, T& arcminute, T& arcsecond) {
		DegreeToDegreesMinutesSeconds(GradianToDegree(gradian), integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void GonToHoursMinutesSeconds(const T& gradian, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(GradianToDegree(gradian), hour, minute, second);
	}

	template<typename T>
	void GonToHMS(const T& gradian, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(GradianToDegree(gradian), hour, minute, second);
	}

	template<typename T>
	T GonToGradian(const T& gradian) {
		return gradian;
	}

	template<typename T>
	T GonToGon(const T& gradian) {
		return GonToGradian(gradian);
	}

	template<typename T>
	std::string GonToCompassWind(const T& gradian, const unsigned int winds, const bool abbreviate) {
		return DegreeToCompassWind(GradianToDegree(gradian), winds, abbreviate);
	}

}//namespace EGXPhys
