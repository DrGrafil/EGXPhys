/// @file EGXPhys/Astrophysics/RotationalFlattening.inl
///
/// @brief Implimentation of rotational flattening functions.
/// @author Elliot Grafil (Metex)
/// @date 4/20/18


namespace EGXPhys {

	template <typename T>
	T RotationalFlattening(const T ellipticity) {
		return EGXMath::SpheroidFlattening(ellipticity);
	}

	template <typename T>
	T RotationalFlattening(const T equatorialRadius, const T polarRadius) {
		return EGXMath::SpheroidFlattening(equatorialRadius, polarRadius);
	}

	//http://farside.ph.utexas.edu/teaching/336k/Newtonhtml/node109.html
	template <typename T>
	T RotationalFlattening(const T massInkg, const T meanRadiusInm, const T angularVelocityInmPersSquared) {
		return ((T)5.0 / (T)4.0) * (angularVelocityInmPersSquared * angularVelocityInmPersSquared) * (meanRadiusInm * meanRadiusInm * meanRadiusInm) / (NISTConst::gravitationalConstant * massInkg);
	}

	template <typename T>
	T RotationalOblateness(const T ellipticity) {
		return EGXMath::SpheroidFlattening(ellipticity);
	}
	
	template <typename T>
	T RotationalOblateness(const T equatorialRadius, const T polarRadius) {
		return EGXMath::SpheroidFlattening(equatorialRadius, polarRadius);
	}

	template <typename T>
	T RotationalOblateness(const T massInkg, const T meanRadiusInm, const T angularVelocityInmPersSquared) {
		return RotationalFlattening(massInkg, meanRadiusInm, angularVelocityInmPersSquared);
	}


}//namespace EGXPhys
