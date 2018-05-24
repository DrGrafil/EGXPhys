/// @file EGXMath/Geometry/3D/Spheroid/SpheroidFlattening.inl
///
/// @brief Implimentation of spheroid flattening functions.
/// @author Elliot Grafil (Metex)
/// @date 4/20/18


namespace EGXMath {


	template <typename T>
	T SpheroidFlattening(const T equatorialRadiusInm, const T polarRadiusInm) {
		if (equatorialRadiusInm > polarRadiusInm) {
			return (equatorialRadiusInm - polarRadiusInm) / equatorialRadiusInm;
		}
		else {
			return (polarRadiusInm - equatorialRadiusInm) / equatorialRadiusInm;
		}
	}

	template <typename T>
	T SpheroidFlattening(const T eccentricity) {
		return (T)1.0 - sqrt((T)1.0 - (eccentricity * eccentricity));
	}

	
	template <typename T>
	T SpheroidOblateness(const T equatorialRadiusInm, const T polarRadiusInm) {
		return SpheroidFlattening(equatorialRadiusInm, polarRadiusInm);
	}

	template <typename T>
	T SpheroidOblateness(const T eccentricity) {
		return SpheroidFlattening(eccentricity);
	}

}//namespace EGXMath
