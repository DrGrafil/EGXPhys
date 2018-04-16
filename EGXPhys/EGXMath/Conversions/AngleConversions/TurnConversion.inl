/// @file EGXMath/Conversions/AngleConversions/TurnConversion.inl
///
/// @brief Implimentation of turn conversions.
/// @author Elliot Grafil (Metex)
/// @date 3/28/18


namespace EGXMath {

	template<typename T>
	T TurnToRadian(const T& turn) {
		return turn * 2.0 * (T)EGXMath::pi;
	}

	template<typename T>
	T TurnToMilliradian(const T& turn) {
		return TurnToRadian(turn) * 1000.0;
	}

	template<typename T>
	T TurnToDegree(const T& turn) {
		return turn * 360.0;
	}

	template<typename T>
	T TurnToDecimalDegree(const T& turn) {
		return TurnToDegree(turn);
	}

	template<typename T>
	T TurnToArcdegree(const T& turn) {
		return TurnToDegree(turn);
	}

	template<typename T>
	T TurnToIntegerDegree(const T& turn) {
		return std::round(TurnToDegree(turn));
	}

	template<typename T, typename T2>
	T TurnToBinaryDegree(const T& turn, const T2& bits) {
		return std::round(turn * std::pow(2.0, bits - 1.0));
	}

	template<typename T>
	T TurnToArcminute(const T& turn) {
		return TurnToDegree(turn) * 60.0; // 60 * 180
	}

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T TurnToArcsecond(const T& turn) {
		return TurnToDegree(turn) * 60.0 * 60.0; // 60 * 60 * 180 
	}

	template<typename T>
	T TurnToMilliarcsecond(const T& turn) {
		return TurnToDegree(turn) * 60.0 * 60.0 * 1000.0; // 60 * 60 * 180 * 1000
	}

	template<typename T>
	T TurnToMicroarcsecond(const T& turn) {
		return TurnToDegree(turn) * 60.0 * 60.0 * 1000.0 * 1000.0;// 60 * 60 * 180 * 1000 * 1000
	}

	template<typename T>
	void TurnToDegreesMinutesSeconds(const T& turn, T& integerDegree, T& arcminute, T& arcsecond) {
		DegreeToDegreesMinutesSeconds(TurnToDegree(turn), integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void TurnToDMS(const T& turn, T& integerDegree, T& arcminute, T& arcsecond) {
		DegreeToDegreesMinutesSeconds(TurnToDegree(turn), integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void TurnToHoursMinutesSeconds(const T& turn, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(TurnToDegree(turn), hour, minute, second);
	}

	template<typename T>
	void TurnToHMS(const T& turn, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(TurnToDegree(turn), hour, minute, second);
	}

	template<typename T>
	T TurnToGradian(const T& turn) {
		return turn * 400.0;
	}

	template<typename T>
	T TurnToGon(const T& turn) {
		return TurnToGradian(turn);
	}

	template<typename T>
	std::string TurnToCompassWind(const T& turn, const unsigned int winds, const bool abbreviate) {
		return DegreeToCompassWind(TurnToDegree(turn), winds, abbreviate);
	}

}//namespace EGXPhys
