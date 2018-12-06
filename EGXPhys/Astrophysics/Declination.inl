/// @file EGXPhys/Astrophysics/Declination.inl
///
/// @brief declination calculations
/// @author Elliot Grafil 
/// @date 3/29/18


namespace EGXPhys{
	
	// https://physics.stackexchange.com/questions/224950/how-can-i-convert-right-ascension-and-declination-to-distances helpful

	template<typename T>
	T DeclinationToDegree(const T integerDegree, const T arcminute, const T arcsecond) {
		return EGXMath::DegreesMinutesSecondsToDegree(integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	T DeclinationToRadian(const T integerDegree, const T arcminute, const T arcsecond) {
		return EGXMath::DegreesMinutesSecondsToRadian(integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void DegreeToDeclination(const T decimalDegree, T& integerDegree, T& arcminute, T& arcsecond) {
		EGXMath::DegreeToDegreesMinutesSeconds(decimalDegree, integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void RadianToDeclination(const T radian, T& integerDegree, T& arcminute, T& arcsecond) {
		EGXMath::RadianToDegreesMinutesSeconds(radian, integerDegree, arcminute, arcsecond);
	}

}//namespace EGXPhys
