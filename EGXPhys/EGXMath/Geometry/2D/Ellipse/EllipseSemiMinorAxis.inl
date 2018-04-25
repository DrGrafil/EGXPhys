/// @file EGXMath/Geometry/2D/Ellipse/EllipseSemiMinorAxis.inl
///
/// @brief Implimentation of functions related to ellipse semi-minor axis.
/// @author Elliot Grafil (Metex)
/// @date 4/25/18


namespace EGXMath {

	template <typename T>
	T EllipseSemiMinorAxis(const T semiMajorAxisInm, const T eccentricity) {
		EllipseSemiMinorAxisFromEccentricity(semiMajorAxisInm, eccentricity);
	}

	template <typename T>
	T EllipseSemiMinorAxisFromEccentricity(const T semiMajorAxisInm, const T eccentricity) {
		return semiMajorAxisInm * std::sqrt((T)1.0 - eccentricity * eccentricity);
	}

	template <typename T>
	T EllipseSemiMinorAxisFromLinearEccentricity(const T semiMajorAxisInm, const T linearEccentricityInm) {
		return std::sqrt(semiMajorAxisInm * semiMajorAxisInm - linearEccentricityInm * linearEccentricityInm);
	}

	template <typename T>
	T EllipseSemiMinorAxisFromSemiLatusRectum(const T semiMajorAxisInm, const T semiLatusRectumInm) {
		return std::sqrt(semiMajorAxisInm * semiLatusRectumInm);
	}





}//namespace EGXMath
