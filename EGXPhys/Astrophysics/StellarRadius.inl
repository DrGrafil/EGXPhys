/// @file EGXPhys/Astrophysics/PlanetCriteria.inl
///
/// @brief Implimentation of planet criteria calculations
/// @author Elliot Grafil (Metex)
/// @date 7/31/17


namespace EGXPhys{
	
	template<typename T>
	T StellarMass(const T& starMass, const T& referenceMass) {
		return starMass / referenceMass;
	}

	template<typename T>
	T SolarMass(const T& starMass) {
		return starMass / SunMass;
	}
    
    
    

}//namespace EGXPhys
