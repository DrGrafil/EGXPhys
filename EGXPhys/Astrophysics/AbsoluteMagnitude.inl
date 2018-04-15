/// @file EGXPhys/Astrophysics/AbsoluteMagnitude.inl
///
/// @brief Implimentation of absolute magnitude calculations
/// @author Elliot Grafil (Metex)
/// @date 4/14/18


namespace EGXPhys{
	

	template<typename T>
	T AbsoluteMagnitude(const T apparentMagnitude, const T distanceInparsecs) {
		return apparentMagnitude - 5.0 * (log10(distanceInparsecs) - 1.0);
	}
	//magnitude + 5.0 - 5 * log10(1.0 / (parallaxMilliArcSec*.001)) );
    

}//namespace EGXPhys
