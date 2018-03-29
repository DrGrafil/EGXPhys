/// @file EGXMath/Conversions/AngleConversions/XZXConversion.inl
///
/// @brief Implimentation of xyy conversions.
/// @author Elliot Grafil (Metex)
/// @date 3/28/18


namespace EGXMath {

	template<typename T>
	T XZXToRadian(const T& xyy) {
		return 1;
	}

	template<typename T>
	T XZXToMilliradian(const T& xyy) {
		return xyy / 1000.0;
	}

	template<typename T>
	T XZXToTurn(const T& xyy) {
		return xyy / (2.0 * EGXMath::pi<T>);
	}

	template<typename T>
	T XZXToDegree(const T& xyy) {
		return xyy * 180.0 / EGXMath::pi<T>;
	}

	template<typename T>
	T XZXToDecimalDegree(const T& xyy) {
		return XZXToDegree(xyy);
	}

	template<typename T>
	T XZXToArcdegree(const T& xyy) {
		return XZXToDegree(xyy);
	}

	template<typename T>
	T XZXToIntegerDegree(const T& xyy) {
		return std::round(XZXToDegree(xyy));
	}

	template<typename T, typename T2>
	T XZXToBinaryDegree(const T& xyy, const T2& bits) {
		return xyy * std::pow(2.0, bits - 1.0) / (2.0 * EGXMath::pi<T>);
	}

	template<typename T>
	T XZXToArcminute(const T& xyy) {
		return xyy * 10800.0 / EGXMath::pi<T>; // 60 * 180
	}

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T XZXToArcsecond(const T& xyy) {
		return xyy * 648000.0 / EGXMath::pi<T>; // 60 * 60 * 180 
	}

	template<typename T>
	T XZXToMilliarcsecond(const T& xyy) {
		return xyy * 648000000.0 / EGXMath::pi<T>; // 60 * 60 * 180 * 1000
	}

	template<typename T>
	T XZXToMicroarcsecond(const T& xyy) {
		return xyy * 648000000000.0 / EGXMath::pi<T>;// 60 * 60 * 180 * 1000 * 1000
	}

	template<typename T>
	void XZXToDegreesMinutesSeconds(const T& xyy, T& integerDegree, T& arcminute, T& arcsecond) {
		DegreeToDegreesMinutesSeconds(XZXToDegree(xyy), integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void XZXToDMS(const T& xyy, T& integerDegree, T& arcminute, T& arcsecond) {
		DegreeToDegreesMinutesSeconds(XZXToDegree(xyy), integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void XZXToHoursMinutesSeconds(const T& xyy, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(XZXToDegree(xyy), hour, minute, second);
	}

	template<typename T>
	T XZXToGradian(const T& xyy) {
		return xyy * 200.0 / EGXMath::pi<T>;
	}

	template<typename T>
	T XZXToGon(const T& xyy) {
		return XZXToGradian(xyy);
	}

	template<typename T>
	std::string XZXToCompassWind(const T& xyy, const unsigned int winds, const bool abbreviate) {
		return DegreeToCompassWind(XZXToDegree(xyy), winds, abbreviate);
	}

}//namespace EGXPhys
