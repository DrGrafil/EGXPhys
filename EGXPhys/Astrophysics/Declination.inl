/// @file EGXPhys/Astrophysics/Declination.inl
///
/// @brief declination calculations
/// @author Elliot Grafil (Metex)
/// @date 3/29/18


namespace EGXPhys{
	
	// https://physics.stackexchange.com/questions/224950/how-can-i-convert-right-ascension-and-declination-to-distances helpful

	
	template<typename T>
	T DeclinationToDegree(const T& integerDegrees, const T& arcminutes, const T& arcseconds) {
		return EGXMath::DMSToDegree(integerDegrees, arcminutes, arcseconds);
	}

	template<typename T>
	void DegreeToDeclination(const T& decimalDegree, T& degrees, T& arcminutes, T& arcseconds) {
		EGXMath::DegreeToDMS(decimalDegree, degrees, arcminutes, arcseconds);
	}

	template<typename T>
	T DeclinationToRadian(const T& integerDegrees, const T& arcminutes, const T& arcseconds) {
		return EGXMath::DMSToRadian(integerDegrees, arcminutes, arcseconds);
	}

	template<typename T>
	void RadianToDeclination(const T& radians, T& degrees, T& arcminutes, T& arcseconds) {
		EGXMath::RadianToDMS(radians, degrees, arcminutes, arcseconds);
	}

}//namespace EGXPhys
