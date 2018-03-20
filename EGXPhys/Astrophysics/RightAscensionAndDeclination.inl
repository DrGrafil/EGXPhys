/// @file EGXPhys/Astrophysics/RightAscensionAndDeclination.inl
///
/// @brief Right ascension and declination calculations
/// @author Elliot Grafil (Metex)
/// @date 3/19/18


namespace EGXPhys{
	
	template<typename T>
	T RightAscensionToRadians(const T hours, const T minutes, const T seconds)
	{
		return (hours * pi / 12.0 + minutes * pi / 720.0 + seconds * pi / 43200.0);
	}

	template<typename T>
	T SolarMass(const T& starMass) {
		return starMass / SunMass;
	}
    
    
    

}//namespace EGXPhys
