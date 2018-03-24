/// @file EGXPhys/Astrophysics/RightAscensionAndDeclination.inl
///
/// @brief Right ascension and declination calculations
/// @author Elliot Grafil (Metex)
/// @date 3/19/18


namespace EGXPhys{
	
	// https://physics.stackexchange.com/questions/224950/how-can-i-convert-right-ascension-and-declination-to-distances helpful

	template<typename T>
	T RightAscensionToRadians(const T hours, const T minutes, const T seconds)
	{
		return (hours * 15 + minutes / 4.0 + seconds / 240.0) * (pi / 180.0);
	}

	template<typename T>
	void RadiansToRightAscension(const T radians, T& hours, T& minutes, T& seconds) {
		EGXMath::RadianToHMS(radians, hours, minutes, seconds);
	}

	template<typename T>
	T DeclinationToRadians(const T degrees, const T arcminutes, const T arcseconds) {
		return (degrees + arcminutes / 60.0 + arcseconds / 3600.0)* (pi / 180.0);
	}
    
	template<typename T>
	void DeclinationToRadians(const T& radians, T& degrees, T& arcminutes, T& arcseconds) {
		EGXMath::RadianToDMS(radians, degrees, arcminutes, arcseconds);
	}

}//namespace EGXPhys
