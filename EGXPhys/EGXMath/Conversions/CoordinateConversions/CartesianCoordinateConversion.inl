/// @file EGXMath/Conversions/AngleConversions/DegreeConversion.inl
///
/// @brief Implimentation of degree conversions.
/// @author Elliot Grafil (Metex)
/// @date 3/28/18


namespace EGXMath {

	template<typename T>
	T DegreeToRadian(const T& decimalDegree) {
		return decimalDegree * (T)EGXMath::pi / 180.0;
	}

	template<typename T>
	T DegreeToMilliradian(const T& decimalDegree) {
		return decimalDegree * (T)EGXMath::pi / 180.0 * 1000.0;
	}

	template<typename T>
	T DegreeToTurn(const T& decimalDegree) {
		return decimalDegree /360.0;
	}

	template<typename T>
	T DegreeToDegree(const T& decimalDegree) {
		return decimalDegree;
	}

	template<typename T>
	T DegreeToDecimalDegree(const T& decimalDegree) {
		return decimalDegree;
	}

	template<typename T>
	T DegreeToArcdegree(const T& decimalDegree) {
		return decimalDegree;
	}

	template<typename T>
	T DegreeToIntegerDegree(const T& decimalDegree) {
		return std::round(decimalDegree);
	}

	template<typename T, typename T2>
	T DegreeToBinaryDegree(const T& decimalDegree, const T2& bits) {
		return std::round(decimalDegree * std::pow(2.0, bits - 1.0) / 360.0);
	}

	template<typename T>
	T DegreeToArcminute(const T& decimalDegree) {
		return decimalDegree * 60.0;
	}

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
}//namespace EGXPhys
