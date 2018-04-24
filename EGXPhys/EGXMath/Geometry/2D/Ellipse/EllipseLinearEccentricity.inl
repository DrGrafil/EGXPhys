/// @file EGXMath/Geometry/2D/Ellipse/EllipseLinearEccentricity.inl
///
/// @brief Implimentation of functions related to ellipse linear eccentricity.
/// @author Elliot Grafil (Metex)
/// @date 4/23/18


namespace EGXMath {

	template <typename T>
	T EllipseLinearEccentricity(const T semiMajorAxisInm, const T semiMinorAxisInm) {
		EllipseLinearEccentricityFromSemiMajorAndSemiMinorAxes(semiMajorAxisInm, semiMinorAxisInm);
	}


	template <typename T>
	T EllipseLinearEccentricityFromSemiMajorAndSemiMinorAxes(const T semiMajorAxisInm, const T semiMinorAxisInm) {
		T a, b;
		if (semiMajorAxisInm > semiMinorAxisInm) {
			a = semiMajorAxisInm;
			b = semiMinorAxisInm;
		}
		else {
			b = semiMajorAxisInm;
			a = semiMinorAxisInm;
		}
		return std::sqrt( a*a - b * b );
	}

	template <typename T>
	T EllipseLinearEccentricityFromEccentricity(const T semiMajorAxisInm, const T eccentricity) {
		return semiMajorAxisInm * eccentricity;
	}
}//namespace EGXMath
