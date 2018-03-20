/// @file EGXPhys/Astrophysics/Parallax.inl
///
/// @brief Implimentation of parallax calculations
/// @author Elliot Grafil (Metex)
/// @date 3/20/18


namespace EGXPhys{
	    
	/**
	*   @brief Converts an angle \f$(\alpha)\f$ in radians to (decimal) degrees.
	*   		\f[\alpha_{Deg}=\alpha_{Rad}\frac{180}{\pi}\f]
	*   See https://en.wikipedia.org/wiki/Stellar_mass
	*
	*   @param radians \f$\alpha_{Rad}\ (rad)\f$ is the angle in radians.
	*   @return \f$\alpha_{Deg} ({^{\circ}})\f$ is the angle in decimal degrees.
	*	@see RadiansToDegrees() for (decimal) degrees.
	*	@see RadiansToDecimalDegrees() for decimal degrees.
	*	@see RadiansToMilliradian() for milliradians.
	*	@see RadiansToDegreesMinutesSeconds() to convert to DMS.
	*	@see RadiansToHoursMinutesSeconds() to convert to HMS.
	*/

	template<typename T>
	T RadianToRadian(const T& radians);

//https://en.wikipedia.org/wiki/Milliradian
	template<typename T>
	T RadianToMilliradian(const T& radians);

	//https://en.wikipedia.org/wiki/Degree_(angle)
	
	template<typename T>
	T RadianToDegree(const T& radians);
	//https://en.wikipedia.org/wiki/Degree_(angle)
	
	template<typename T>
	T RadianToDecimalDegree(const T& radians);
	//https://en.wikipedia.org/wiki/Degree_(angle)
	
	template<typename T>
	T RadianToArcdegree(const T& radians);

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T RadianToArcminute(const T& radians);

	//https://en.wikipedia.org/wiki/Minute_and_second_of_arc
	template<typename T>
	T RadianToArcsecond(const T& radians);

	template<typename T>
	T RadianToMilliarcsecond(const T& radians);

	template<typename T>
	T RadianToMicroarcsecond(const T& radians);

	template<typename T>
	void RadianToDegreesMinutesSeconds(const T& starMass);

	template<typename T>
	void RadianToDMS(const T& starMass);

	template<typename T>
	void RadianToHoursMinutesSeconds(const T& starMass);

	template<typename T>
	void RadianToHMS(const T& starMass);

	template<typename T>
	void RadianToGradian(const T& starMass);

https://en.wikipedia.org/wiki/Points_of_the_compass
	template<typename T>
	std::string RadianToCompass8Wind(const T& starMass);

	template<typename T>
	std::string RadianToCompass16Wind(const T& starMass);

	template<typename T>
	std::string RadianToCompass32Wind(const T& radian) {
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

		T angle = RadianToDegree(radian);
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

		if (!abreviation) {
			return pointName[position];
		} else {
			return pointAbreviation[position];
		}
	}
}//namespace EGXPhys
