/// @file EGXPhys/Astrophysics/Eccentricity.inl
///
/// @brief Implimentation of orbital eccentricity calculations.
/// @author Elliot Grafil (Metex)
/// @date 8/24/17


namespace EGXPhys{
	
	template<typename T>
	OrbitalEccentricityFromApoapsis(const T& apoapsis, const T& semiMajorAxis ){
		return (apoapsis/semiMajorAxis) - 1.0;
	}
	
	template<typename T>
	OrbitalEccentricityFromPeriapsis(const T& periapsis, const T& semiMajorAxis ){
		return 1.0 - (periapsis/semiMajorAxis);
	}
	
	template<typename T>
	OrbitalEccentricity(const T& semiMajorAxis, const T& semiMinorAxis ){
		return sqrt(1.0 + (  pow(semiMinorAxis, 2.0)/pow(semiMajorAxis,2.0) ) );
	}
	
	template<typename T>
	OrbitalEccentricity(const T& specificOrbitalEnergy, const T& standardGravitationalParameter, const T& specificRelativeAngularMomentum ){
		return sqrt(1.0 + ( (2.0 * specificOrbitalEnergy * pow(specificRelativeAngularMomentum, 2.0))/pow(standardGravitationalParameter,2.0) ));
	}
	
	//https://en.wikipedia.org/wiki/Orbital_eccentricity
	template<typename T>
	OrbitalEccentricity(const T& periapsis, const T& apoapsis){
		return (apoapsis - periapsis) / (apoapsis + periapsis);
	}

}//namespace EGXPhys
