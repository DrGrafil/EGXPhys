/// @file EGXMath/Geometry/2D/Ellipse/EllipseSemiMajorAxis.inl
///
/// @brief Implimentation of functions related to ellipse semi-major axis.
/// @author Elliot Grafil (Metex)
/// @date 4/23/18


namespace EGXMath {

	template <typename T>
	T EllipseSemiMajorAxis(const T semiMinorAxisInm, const T eccentricity) {
		return EllipseSemiMinorAxisFromEccentricity(semiMinorAxisInm, eccentricity);
	}

	template <typename T>
	T EllipseSemiMajorAxisFromEccentricity(const T semiMinorAxisInm, const T eccentricity) {
		return semiMinorAxisInm / std::sqrt((T)1.0 - eccentricity * eccentricity);
	}

	template <typename T>
	T EllipseSemiMajorAxisFromLinearEccentricity(const T semiMinorAxisInm, const T linearEccentricityInm) {
		return std::sqrt(semiMinorAxisInm * semiMinorAxisInm + linearEccentricityInm * linearEccentricityInm);
	}

	template <typename T>
	T EllipseSemiMajorAxisFromSemiLatusRectum(const T semiMinorAxisInm, const T semiLatusRectumInm) {
		return semiMinorAxisInm * semiMinorAxisInm / semiLatusRectumInm;
	}

}//namespace EGXMath
