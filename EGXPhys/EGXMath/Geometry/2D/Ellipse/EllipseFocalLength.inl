/// @file EGXMath/Geometry/2D/Ellipse/EllipseFocalLength.inl
///
/// @brief Implimentation of functions related to ellipse focal length.
/// @author Elliot Grafil 
/// @date 4/24/18


namespace EGXMath {

	template <typename T>
	T EllipseFocalLength(const T linearEccentricityInm) {
		return (T)2.0 * linearEccentricityInm;
	}

	template <typename T>
	T EllipseFocalLength(const T semiMajorAxisInm, const T semiMinorAxisInm) {
		return EllipseFocalLengthFromSemiMajorAndSemiMinorAxes(semiMajorAxisInm, semiMinorAxisInm);
	}

	template <typename T>
	T EllipseFocalLengthFromSemiMajorAndSemiMinorAxes(const T semiMajorAxisInm, const T semiMinorAxisInm) {
		T a, b;
		if (semiMajorAxisInm > semiMinorAxisInm) {
			a = semiMajorAxisInm;
			b = semiMinorAxisInm;
		}
		else {
			b = semiMajorAxisInm;
			a = semiMinorAxisInm;
		}
		return (T)2.0 * std::sqrt(a*a - b * b);
	}

	template <typename T>
	T EllipseFocalLengthFromEccentricity(const T semiMajorAxisInm, const T eccentricity) {
		return (T)2.0 * semiMajorAxisInm * eccentricity;
	}

}//namespace EGXMath
