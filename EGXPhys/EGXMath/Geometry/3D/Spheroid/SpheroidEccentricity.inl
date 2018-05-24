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
	T SpheroidEccentricity(const T equatorialRadiusInm, const T polarRadiusInm) {
		if (equatorialRadiusInm > polarRadiusInm) {
			return ( (equatorialRadiusInm * equatorialRadiusInm) - (polarRadiusInm * polarRadiusInm) ) / (equatorialRadiusInm * equatorialRadiusInm);
		}
		else {
			return ( (polarRadiusInm * polarRadiusInm) - (equatorialRadiusInm * equatorialRadiusInm) ) / (polarRadiusInm * polarRadiusInm);
		}
	}

}//namespace EGXMath
