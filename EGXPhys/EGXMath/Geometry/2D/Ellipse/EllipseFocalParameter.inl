/// @file EGXMath/Geometry/2D/Ellipse/EllipseFocalParameter.inl
///
/// @brief Implimentation of functions related to ellipse focal parameter.
/// @author Elliot Grafil (Metex)
/// @date 4/24/18


namespace EGXMath {

	template <typename T>
	T EllipseFocalParameter(const T semiMajorAxisInm, const T semiMinorAxisInm) {
		return EllipseFocalParameterFromSemiMajorAndSemiMinorAxes(semiMajorAxisInm, semiMinorAxisInm);
	}

	template <typename T>
	T EllipseFocalParameterFromSemiMajorAndSemiMinorAxes(const T semiMajorAxisInm, const T semiMinorAxisInm) {
		T a, b;
		if (semiMajorAxisInm > semiMinorAxisInm) {
			a = semiMajorAxisInm;
			b = semiMinorAxisInm;
		}
		else {
			b = semiMajorAxisInm;
			a = semiMinorAxisInm;
		}
		return b * b / std::sqrt(a*a - b * b);
	}

	template <typename T>
	T EllipseFocalParameterFromLinearEccentricity(const T semiMajorAxisInm, const T linearEccentricityInm) {
		return (semiMajorAxisInm * semiMajorAxisInm - linearEccentricityInm * linearEccentricityInm) / linearEccentricityInm;
	}

	template <typename T>
	T EllipseFocalParameterFromEccentricity(const T semiMajorAxisInm, const T eccentricity) {
		return (semiMajorAxisInm * ((T)1.0 - eccentricity * eccentricity)) / eccentricity;
	}

	template <typename T>
	T EllipseFocalParameterFromSemiLatusRectum(const T semiLatusRectumInm, const T eccentricity) {
		return semiLatusRectumInm / eccentricity;
	}

}//namespace EGXMath
