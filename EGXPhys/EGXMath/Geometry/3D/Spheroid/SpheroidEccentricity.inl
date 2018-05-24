/// @file EGXMath/Geometry/3D/Spheroid/SpheroidEccentricity.inl
///
/// @brief Implimentation of spheroid eccentricity functions.
/// @author Elliot Grafil (Metex)
/// @date 4/23/18


namespace EGXMath {

	template <typename T>
	T SpheroidEccentricity(const T flattening) {
		return std::sqrt(flattening * ((T)2.0 - flattening) );
	}

	template <typename T>
	T SpheroidEccentricity(const T equatorialRadius, const T polarRadius) {
		if (equatorialRadius > polarRadius) {
			return ( (equatorialRadius * equatorialRadius) - (polarRadius * polarRadius) ) / (equatorialRadius * equatorialRadius);
		}
		else {
			return ( (polarRadius * polarRadius) - (equatorialRadius * equatorialRadius) ) / (polarRadius * polarRadius);
		}
	}

}//namespace EGXMath
