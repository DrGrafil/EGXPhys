/// @file EGXMath/Geometry/3D/SpheroidEccentricity.inl
///
/// @brief Implimentation of spheroid eccentricity functions.
/// @author Elliot Grafil (Metex)
/// @date 4/23/18


namespace EGXMath {

	template <typename T>
	T EllipseEccentricity(const T flattening) {
		return std::sqrt(flattening * ((T)2.0 - flattening) );
	}

	template <typename T>
	T EllipseEccentricity(const T semiMajorAxisInm, const T semiMinorAxisInm) {
		if (semiMajorAxisInm  > semiMinorAxisInm) {
			return std::sqrt((T)1.0 - ((semiMinorAxisInm * semiMinorAxisInm) / (semiMajorAxisInm * semiMajorAxisInm)));
		}
		else {
			return std::sqrt((T)1.0 - ((semiMajorAxisInm * semiMajorAxisInm) / (semiMinorAxisInm * semiMinorAxisInm)));
		}
	}

}//namespace EGXMath
