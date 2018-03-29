/// @file EGXPhys/Astrophysics/RightAscension.inl
///
/// @brief Right ascension  calculations
/// @author Elliot Grafil (Metex)
/// @date 3/29/18


namespace EGXPhys{
	
	// https://physics.stackexchange.com/questions/224950/how-can-i-convert-right-ascension-and-declination-to-distances helpful

	template<typename T>
	T RightAscensionToDegree(const T& hours, const T& minutes, const T& seconds){
		return EGXMath::HoursMinutesSecondsToDegree(hours, minutes, seconds);
	}

	template<typename T>
	T RightAscensionToRadian(const T& hours, const T& minutes, const T& seconds){
		return EGXMath::HoursMinutesSecondsToRadian(hours, minutes, seconds);
	}

	template<typename T>
	void DegreeToRightAscension(const T& decimalDegree, T& hours, T& minutes, T& seconds) {
		EGXMath::DegreeToHoursMinutesSeconds(decimalDegree, hours, minutes, seconds);
	}

	template<typename T>
	void RadianToRightAscension(const T& radians, T& hours, T& minutes, T& seconds) {
		EGXMath::RadianToHoursMinutesSeconds(radians, hours, minutes, seconds);
	}

}//namespace EGXPhys
