/// @file EGXPhys/Astrophysics/RightAscension.inl
///
/// @brief Right ascension  calculations
/// @author Elliot Grafil 
/// @date 3/29/18


namespace EGXPhys{
	
	// https://physics.stackexchange.com/questions/224950/how-can-i-convert-right-ascension-and-declination-to-distances helpful

	template<typename T>
	T RightAscensionToDegree(const T hour, const T minute, const T second){
		return EGXMath::HoursMinutesSecondsToDegree(hour, minute, second);
	}

	template<typename T>
	T RightAscensionToRadian(const T hour, const T minute, const T second){
		return EGXMath::HoursMinutesSecondsToRadian(hour, minute, second);
	}

	template<typename T>
	void DegreeToRightAscension(const T decimalDegree, T& hour, T& minute, T& second) {
		EGXMath::DegreeToHoursMinutesSeconds(decimalDegree, hour, minute, second);
	}

	template<typename T>
	void RadianToRightAscension(const T radian, T& hour, T& minute, T& second) {
		EGXMath::RadianToHoursMinutesSeconds(radian, hour, minute, second);
	}

}//namespace EGXPhys
