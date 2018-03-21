/// @file EGXPhys/Astrophysics/Parallax.inl
///
/// @brief Implimentation of parallax calculations
/// @author Elliot Grafil (Metex)
/// @date 3/20/18


namespace EGXMath {

	//// degrees
	template<typename T>
	T DegreeToRadian(const T& decimalDegree) {
		return decimalDegree * EGXMath::pi<T> / 180.0;
	}

	template<typename T>
	T DegreeToMilliradian(const T& decimalDegree) {
		return decimalDegree * EGXMath::pi<T> / 180000.0;
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
		return decimalDegree / 60.0;
	}

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T DegreeToArcsecond(const T& decimalDegree) {
		return decimalDegree / 3600.0;
	}

	template<typename T>
	T DegreeToMilliarcsecond(const T& decimalDegree) {
		return decimalDegree / 3600000.0;
	}

	template<typename T>
	T DegreeToMicroarcsecond(const T& decimalDegree) {
		return decimalDegree / 3600000000.0;
	}
//#include <functional>
	template<typename T>
	void DegreeToDegreesMinutesSeconds(const T& decimalDegree, T& degree, T& minute, T& second) {
		/*
		//See https://en.wikipedia.org/wiki/Decimal_degrees
		degree = std::trunc(decimalDegree);
		
		minute = std::modulus( std::trunc( std::abs(decimalDegree) * 60.0), 60.0);
		second = std::modulus( std::abs(decimalDegree) * 3600.0, 60.0);*/
	}

	template<typename T>
	void DegreeToDMS(const T& decimalDegree, T& degree, T& minute, T& second){
		DegreeToDegreesMinutesSeconds(decimalDegree, degree, minute, second);
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

	//https://en.wikipedia.org/wiki/Points_of_the_compass
	template<typename T>
	std::string DegreeToCompass8Wind(const T& decimalDegree, const bool abbreviate) {
		return "not working";
	}
	//https://en.wikipedia.org/wiki/Points_of_the_compass
	template<typename T>
	std::string DegreeToCompass16Wind(const T& decimalDegree, const bool abbreviate) {
		return "not working";
	}
	//https://en.wikipedia.org/wiki/Points_of_the_compass
	template<typename T>
	std::string DegreeToCompass32Wind(const T& decimalDegree, const bool abbreviate) {
		static std::vector<std::string> pointName;
		pointName = {
			"north",				"north by east",		"north-northeast",	"northeast by north",
			"northeast",			"northeast by east",	"east-northeast",	"east by north",
			"east",					"east by south",		"east-southeast",	"southeast by east",
			"southeast",			"southeast by south",	"south-southeast",	"south by east",
			"south",				"south by west",		"south-southwest",	"southwest by south",
			"southwest",			"southwest by west",	"west-southwest",	"west by south",
			"west",					"west by north",		"west-northwest",	"northwest by west",
			"northwest",			"northwest by north",	"north-northwest",	"north by west"
		};


		static std::vector<std::string> pointAbreviation;
		pointAbreviation = {
			"N",		"NbE",		"NNE",		"NEbN",
			"NE",		"NEbE",		"ENE",		"EbN",
			"E",		"EbS",		"ESE",		"SEbE",
			"SE",		"SEbS",		"SSE",		"SbE",
			"S",		"SbW",		"SSW",		"SWbS",
			"SW",		"SWbW",		"WSW",		"WbS",
			"W",		"WbN",		"WNW",		"NWbW",
			"NW",		"NWbN",		"NNW",		"NbW"
		};

		T angle = decimalDegree;
		angle += 5.625; // offset angle by half the distance of a wind. This means that North is now 0=11.25 instead of -5.625 to 5.625

						//Converts negative angle to positive
		while (angle < 0.0) {
			angle += 360.0;
		}
		//Caps positive angle at 360
		while (angle > 360.0) {
			angle -= 360.0;
		}
		//Angle now ranges from 0-360

		unsigned int position = (unsigned int)angle / (unsigned int)32;

		if (!abbreviate) {
			return pointName[position];
		}
		else {
			return pointAbreviation[position];
		}
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
	void RadianToDegreesMinutesSeconds(const T& radian, T& degree, T& minute, T& second) {
		DegreeToDegreesMinutesSeconds(RadianToDegree(radian), degree, minute, second);
	}

	template<typename T>
	void RadianToDMS(const T& radian, T& degree, T& minute, T& second) {
		DegreeToDegreesMinutesSeconds(RadianToDegree(radian), degree, minute, second);
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
	std::string RadianToCompass8Wind(const T& radian, const bool abbreviate) {
		return DegreeToCompass8Wind(RadianToDegree(radian), abbreviate);
	}

	template<typename T>
	std::string RadianToCompass16Wind(const T& radian, const bool abbreviate) {
		return DegreeToCompass16Wind(RadianToDegree(radian), abbreviate);
	}

	template<typename T>
	std::string RadianToCompass32Wind(const T& radian, const bool abbreviate) {
		return DegreeToCompass32Wind(RadianToDegree(radian), abbreviate);
	}
}//namespace EGXPhys
