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
	T EllipseSemiMajorAxisFromSemiMinorAxisAndLinearEccentricity(const T semiMinorAxisInm, const T linearEccentricityInm) {
		return std::sqrt(semiMinorAxisInm * semiMinorAxisInm + linearEccentricityInm * linearEccentricityInm);
	}

	template <typename T>
	T EllipseSemiMajorAxisFromSemiMinorAxisAndEccentricity(const T semiMinorAxisInm, const T eccentricity) {
		return semiMinorAxisInm / std::sqrt((T)1.0 - eccentricity * eccentricity);
	}

	template <typename T>
	T EllipseSemiMajorAxisFromSemiMinorAxisAndSemiLatusRectum(const T semiMinorAxisInm, const T semiLatusRectumInm) {
		return semiMinorAxisInm * semiMinorAxisInm / semiLatusRectumInm;
	}

	template <typename T>
	T EllipseSemiMajorAxisFromSemiMinorAxisAndFocalParameter(const T semiMinorAxisInm, const T focalParameterInm) {
		return semiMinorAxisInm * std::sqrt((T)1.0 + ((semiMinorAxisInm * semiMinorAxisInm) / (focalParameterInm * focalParameterInm)));
	}

	template <typename T>
	T EllipseSemiMajorAxisFromLinearEccentricityAndEccentricity(const T linearEccentricityInm, const T eccentricity) {
		return linearEccentricityInm / eccentricity;
	}

	template <typename T>
	T EllipseSemiMajorAxisFromLinearEccentricityAndSemiLatusRectum(const T linearEccentricityInm, const T semiLatusRectumInm) {
		return (semiLatusRectumInm + std::sqrt((T)4.0 * linearEccentricityInm * linearEccentricityInm + semiLatusRectumInm * semiLatusRectumInm) )/ (T)2.0;
	}

	template <typename T>
	T EllipseSemiMajorAxisFromLinearEccentricityAndFocalParameter(const T linearEccentricityInm, const T focalParameterInm) {
		return std::sqrt(focalParameterInm * linearEccentricityInm + linearEccentricityInm * linearEccentricityInm);
	}

	template <typename T>
	T EllipseSemiMajorAxisFromEccentricityAndSemiLatusRectum(const T eccentricity, const T semiLatusRectumInm) {
		return semiLatusRectumInm / (1.0 - eccentricity * eccentricity);
	}

	template <typename T>
	T EllipseSemiMajorAxisFromEccentricityAndFocalParameter(const T eccentricity, const T focalParameterInm) {
		return eccentricity * focalParameterInm / (1.0 - eccentricity * eccentricity);
	}

	template <typename T>
	T EllipseSemiMajorAxisFromSemiLatusRectumAndFocalParameter(const T semiLatusRectumInm, const T focalParameterInm) {
		return semiLatusRectumInm / ( (T)1.0 - ( (semiLatusRectumInm * semiLatusRectumInm) /  (focalParameterInm * focalParameterInm) ) );
	}
}//namespace EGXMath
