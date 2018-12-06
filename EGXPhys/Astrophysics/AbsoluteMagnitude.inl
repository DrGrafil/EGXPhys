/// @file EGXPhys/Astrophysics/AbsoluteMagnitude.inl
///
/// @brief Implimentation of absolute magnitude calculations
/// @author Elliot Grafil 
/// @date 4/14/18


namespace EGXPhys{
	

	template<typename T>
	T AbsoluteMagnitude(const T apparentMagnitude, const T distanceInparsecs) {
		return AbsoluteMagnitudeFromParsecs(apparentMagnitude, distanceInparsecs);
	}    

    template<typename T>
    T AbsoluteMagnitudeFromParsecs(const T apparentMagnitude, const T distanceInparsecs) {
        return apparentMagnitude - 5.0 * (log10(distanceInparsecs) - 1.0);
    }

    template<typename T>
    T AbsoluteMagnitudeFromParallax(const T apparentMagnitude, const T parallaxInArcSec) {
        return AbsoluteMagnitudeFromParsecs(apparentMagnitude, ParallaxToParsec(parallaxInArcSec));
    }

    template<typename T>
    T AbsoluteMagnitudeFromAU(const T apparentMagnitude, const T distanceInAstronomicalUnits) {
        return AbsoluteMagnitudeFromParsecs(apparentMagnitude, EGXMath::AstronomicalUnitToParsec(distanceInAstronomicalUnits));
    }
}//namespace EGXPhys
