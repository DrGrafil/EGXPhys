/// @file EGXPhys/Astrophysics/Parallax.inl
///
/// @brief Implimentation of parallax calculations
/// @author Elliot Grafil (Metex)
/// @date 3/20/18


namespace EGXMath {

	//// Degrees
	template<typename T>
	T DegreeToRadian(const T& decimalDegree) {
		return decimalDegree * EGXMath::pi<T> / 180.0;
	}

	template<typename T>
	T DegreeToMilliradian(const T& decimalDegree) {
		return decimalDegree * EGXMath::pi<T> / 180.0 * 1000.0;
	}

	template<typename T>
	T DegreeToDegree(const T& decimalDegree) {
		return decimalDegree;
	}

	template<typename T>
	T DegreeToIntegerDegree(const T& decimalDegree) {
		return std::round(decimalDegree);
	}

	template<typename T>
	T DegreeToDecimalDegree(const T& decimalDegree) {
		return decimalDegree;
	}

	template<typename T>
	T DegreeToArcdegree(const T& decimalDegree) {
		return decimalDegree;
	}

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T DegreeToArcminute(const T& decimalDegree) {
		return decimalDegree * 60.0;
	}

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T DegreeToArcsecond(const T& decimalDegree) {
		return decimalDegree * 3600.0;
	}

	template<typename T>
	T DegreeToMilliarcsecond(const T& decimalDegree) {
		return decimalDegree * 3600000.0;
	}

	template<typename T>
	T DegreeToMicroarcsecond(const T& decimalDegree) {
		return decimalDegree * 3600000000.0;
	}

	template<typename T>
	void DegreeToDegreesMinutesSeconds(const T& decimalDegree, T& integerDegree, T& arcminute, T& arcsecond) {

		//See https://en.wikipedia.org/wiki/Decimal_degrees
		integerDegree = std::trunc(decimalDegree);

		arcminute = std::fmod( std::trunc( std::abs(decimalDegree) * 60.0), 60.0);
		arcsecond = std::fmod( std::abs(decimalDegree) * 3600.0, 60.0);
	}

	template<typename T>
	void DegreeToDMS(const T& decimalDegree, T& integerDegree, T& arcminute, T& arcsecond){
		DegreeToDegreesMinutesSeconds(decimalDegree, integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void DegreeToHoursMinutesSeconds(const T& decimalDegree, T& hour, T& minute, T& second) {
		T hUntrunct = decimalDegree / 15.0;	//Before truncation
		hour = std::trunc(hUntrunct);

		T mUntrunct = std::abs(hUntrunct - hour) * 60.0; // Remainder * 60 minutes in a hour
		minute = std::trunc(mUntrunct);

		second = (mUntrunct - minute) * 60.0; // Remainder * 60 seconds in a minute
	}

	template<typename T>
	void DegreeToHMS(const T& decimalDegree, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(decimalDegree, hour, minute, second);
	}

	template<typename T>
	T DegreeToGradian(const T& decimalDegree) {
		return decimalDegree * 10.0 / 9.0;
	}

	template<typename T>
	T DegreeToGon(const T& decimalDegree) {
		return DegreeToGradian(decimalDegree);
	}

	template<typename T>
	std::string DegreeToCompassWind(const T& decimalDegree, const unsigned int winds, const bool abbreviate) {
		const static std::vector<std::string> pointName = {
			"north",				"north by east",		"north-northeast",	"northeast by north",
			"northeast",			"northeast by east",	"east-northeast",	"east by north",
			"east",					"east by south",		"east-southeast",	"southeast by east",
			"southeast",			"southeast by south",	"south-southeast",	"south by east",
			"south",				"south by west",		"south-southwest",	"southwest by south",
			"southwest",			"southwest by west",	"west-southwest",	"west by south",
			"west",					"west by north",		"west-northwest",	"northwest by west",
			"northwest",			"northwest by north",	"north-northwest",	"north by west"
		};

		const static std::vector<std::string> pointAbreviation = {
			"N",		"NbE",		"NNE",		"NEbN",
			"NE",		"NEbE",		"ENE",		"EbN",
			"E",		"EbS",		"ESE",		"SEbE",
			"SE",		"SEbS",		"SSE",		"SbE",
			"S",		"SbW",		"SSW",		"SWbS",
			"SW",		"SWbW",		"WSW",		"WbS",
			"W",		"WbN",		"WNW",		"NWbW",
			"NW",		"NWbN",		"NNW",		"NbW"
		};

		

		T windAngle = 360.0/(T)winds; // how much each slice of compass is in degrees. 11.25 in the case of 32 wind compass

		T angle = decimalDegree;
		angle += windAngle / 2.0; // offset angle by half the distance of a wind. 
									//This means that North is now 0=11.25 instead of -5.625 to 5.625 in the case of a 32 wind compass

		//Converts negative angle to positive
		while (angle < 0.0) {
			angle += 360.0;
		}
		//Caps positive angle at 360
		while (angle > 360.0) {
			angle -= 360.0;
		}
		//Angle now ranges from 0-360
		unsigned int position = (unsigned int)(angle / windAngle);
		
		unsigned int positionScale = 32/winds; // for diffrent wind numbers the scale needs to be offset by a multiple number
		//32 = 1, 16 = 2 8 = 4 ect...


		if (!abbreviate) {
			return pointName[position*positionScale];
		}
		else {
			return pointAbreviation[position*positionScale];
		}
	}


	//Decimal Degree (alias of degree)
	template<typename T>
	T DecimalDegreeToRadian(const T& decimalDegree) {
		return DegreeToRadian(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToMilliradian(const T& decimalDegree) {
		return DegreeToMilliradian(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToDegree(const T& decimalDegree) {
		return DegreeToDegree(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToIntegerDegree(const T& decimalDegree) {
		return DegreeToIntegerDegree(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToDecimalDegree(const T& decimalDegree) {
		return DegreeToDecimalDegree(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToArcdegree(const T& decimalDegree) {
		return DegreeToArcdegree(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToArcminute(const T& decimalDegree) {
		return DegreeToArcminute(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToArcsecond(const T& decimalDegree) {
		return DegreeToArcsecond(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToMilliarcsecond(const T& decimalDegree) {
		return DegreeToMilliarcsecond(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToMicroarcsecond(const T& decimalDegree) {
		return DegreeToMicroarcsecond(decimalDegree);
	}

	template<typename T>
	void DecimalDegreeToDegreesMinutesSeconds(const T& decimalDegree, T& integerDegree, T& arcminute, T& arcsecond) {
		DegreeToDegreesMinutesSeconds(decimalDegree, integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void DecimalDegreeToDMS(const T& decimalDegree, T& integerDegree, T& arcminute, T& arcsecond) {
		DegreeToDegreesMinutesSeconds(decimalDegree, integerDegree, arcminute, arcsecond);
	}

	template<typename T>
	void DecimalDegreeToHoursMinutesSeconds(const T& decimalDegree, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(decimalDegree, hour, minute, second);
	}

	template<typename T>
	void DecimalDegreeToHMS(const T& decimalDegree, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(decimalDegree, hour, minute, second);
	}

	template<typename T>
	T DecimalDegreeToGradian(const T& decimalDegree) {
		return DegreeToGradian(decimalDegree);
	}

	template<typename T>
	T DecimalDegreeToGon(const T& decimalDegree) {
		return DegreeToGradian(decimalDegree);
	}

	template<typename T>
	std::string DecimalDegreeToCompassWind(const T& decimalDegree, const unsigned int winds, const bool abbreviate) {
		return DegreeToCompassWind(decimalDegree, winds, abbreviate);
	}











	//Integer Degrees
	template<typename T>
	T IntegerDegreeToRadian(const T& integerDegree) {
		return DegreeToRadian(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToMilliradian(const T& integerDegree) {
		return DegreeToMilliradian(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToDegree(const T& integerDegree) {
		return DegreeToDegree(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToIntegerDegree(const T& integerDegree) {
		return DegreeToIntegerDegree(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToDecimalDegree(const T& integerDegree) {
		return DegreeToDecimalDegree(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToArcdegree(const T& integerDegree) {
		return DegreeToArcdegree(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToArcminute(const T& integerDegree) {
		return DegreeToArcminute(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToArcsecond(const T& integerDegree) {
		return DegreeToArcsecond(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToMilliarcsecond(const T& integerDegree) {
		return DegreeToMilliarcsecond(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToMicroarcsecond(const T& integerDegree) {
		return DegreeToMicroarcsecond(integerDegree);
	}

	template<typename T>
	void IntegerDegreeToDegreesMinutesSeconds(const T& integerDegree, T& degree, T& arcminute, T& arcsecond) {
		degree = integerDegree;
		arcminute = 0;
		arcsecond = 0;
	}

	template<typename T>
	void IntegerDegreeToDMS(const T& integerDegree, T& degree, T& arcminute, T& arcsecond) {
		degree = integerDegree;
		arcminute = 0;
		arcsecond = 0;
	}

	template<typename T>
	void IntegerDegreeToHoursMinutesSeconds(const T& integerDegree, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(integerDegree, hour, minute, second);
	}

	template<typename T>
	void IntegerDegreeToHMS(const T& integerDegree, T& hour, T& minute, T& second) {
		DegreeToHoursMinutesSeconds(integerDegree, hour, minute, second);
	}

	template<typename T>
	T IntegerDegreeToGradian(const T& integerDegree) {
		return DegreeToGradian(integerDegree);
	}

	template<typename T>
	T IntegerDegreeToGon(const T& integerDegree) {
		return DegreeToGradian(integerDegree);
	}

	template<typename T>
	std::string IntegerDegreeToCompassWind(const T& integerDegree, const unsigned int winds, const bool abbreviate) {
		return DegreeToCompassWind(integerDegree, winds, abbreviate);
	}











	//// RADIANS

	template<typename T>
	T RadianToRadian(const T& radian) {
		return 1;
	}

	template<typename T>
	T RadianToMilliradian(const T& radian) {
		return radian / 1000.0;
	}

	template<typename T>
	T RadianToDegree(const T& radian) {
		return radian * 180.0 / EGXMath::pi<T>;
	}

	template<typename T>
	T RadianToDecimalDegree(const T& radian) {
		return RadianToDegree(radian);
	}

	template<typename T>
	T RadianToArcdegree(const T& radian) {
		return RadianToDegree(radian);
	}

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T RadianToArcminute(const T& radian) {
		return radian * 10800.0 / EGXMath::pi<T>; // 60 * 180
	}

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T RadianToArcsecond(const T& radian) {
		return radian * 648000.0 / EGXMath::pi<T>; // 60 * 60 * 180 
	}

	template<typename T>
	T RadianToMilliarcsecond(const T& radian) {
		return radian * 648000000.0 / EGXMath::pi<T>; // 60 * 60 * 180 * 1000
	}

	template<typename T>
	T RadianToMicroarcsecond(const T& radian) {
		return radian * 648000000000.0 / EGXMath::pi<T>;// 60 * 60 * 180 * 1000 * 1000
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
		return radian * 200.0 / EGXMath::pi<T>;
	}

	template<typename T>
	T RadianToGon(const T& radian) {
		return RadianToGradian(radian);
	}

//https://en.wikipedia.org/wiki/Points_of_the_compass
	template<typename T>
	std::string RadianToCompassWind(const T& radian, const unsigned int winds, const bool abbreviate) {
		return DegreeToCompassWind(RadianToDegree(radian), winds, abbreviate);
	}

}//namespace EGXPhys
