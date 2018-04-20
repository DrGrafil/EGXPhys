/// @file EGXMath/Geometry/3D/SpheroidFlattening.inl
///
/// @brief Implimentation of spheroid flattening functions.
/// @author Elliot Grafil (Metex)
/// @date 4/20/18


namespace EGXMath {


	template <typename T>
	T SpheroidFlattening(const T equatorialRadius, const T polarRadius) {
		if (equatorialRadius > polarRadius) {
			return (equatorialRadius - polarRadius) / equatorialRadius;
		}
		else {
			return (polarRadius - equatorialRadius) / equatorialRadius;
		}
	}

	template <typename T>
	T SpheroidFlattening(const T ellipticity) {
		return (T)1.0 - sqrt((T)1.0 - (ellipticity * ellipticity));
	}

	
	template <typename T>
	T SpheroidOblateness(const T equatorialRadius, const T polarRadius) {
		return SpheroidFlattening(equatorialRadius, polarRadius);
	}

	template <typename T>
	T SpheroidOblateness(const T ellipticity) {
		return SpheroidFlattening(ellipticity);
	}

}//namespace EGXMath
