/// @file EGXMath/Geometry/2D/Ellipse/EllipseSemiMinorAxis.inl
///
/// @brief Implimentation of functions related to ellipse semi-minor axis.
/// @author Elliot Grafil 
/// @date 4/25/18


namespace EGXMath {

	template <typename T>
	T EllipseSemiMinorAxis(const T semiMajorAxisInm, const T eccentricity) {
		EllipseSemiMinorAxisFromSemiMajorAxisAndEccentricity(semiMajorAxisInm, eccentricity);
	}

	template <typename T>
	T EllipseSemiMinorAxisFromSemiMajorAxisAndLinearEccentricity(const T semiMajorAxisInm, const T linearEccentricityInm) {
		return std::sqrt(semiMajorAxisInm * semiMajorAxisInm - linearEccentricityInm * linearEccentricityInm);
	}

	template <typename T>
	T EllipseSemiMinorAxisFromSemiMajorAxisAndEccentricity(const T semiMajorAxisInm, const T eccentricity) {
		return semiMajorAxisInm * std::sqrt((T)1.0 - eccentricity * eccentricity);
	}

	template <typename T>
	T EllipseSemiMinorAxisFromSemiMajorAxisAndSemiLatusRectum(const T semiMajorAxisInm, const T semiLatusRectumInm) {
		return std::sqrt(semiMajorAxisInm * semiLatusRectumInm);
	}



	template <typename T>
	T EllipseSemiMinorAxisFromSemiMajorAxisAndFocalParameter(const T semiMajorAxisInm, const T focalParameterInm) {
		T p2 = focalParameterInm * focalParameterInm;
		T p4 = p2 * p2;

		return std::sqrt(std::sqrt((T)4.0 * semiMajorAxisInm * semiMajorAxisInm * p2 + p4) - p2 ) / (T) 2.0;
	}


	template <typename T>
	T EllipseSemiMinorAxisFromLinearEccentricityAndEccentricity(const T linearEccentricityInm, const T eccentricity) {
		return (linearEccentricityInm / eccentricity) * std::sqrt((T)1.0 - eccentricity * eccentricity);
	}
	
	template <typename T>
	T EllipseSemiMinorAxisFromLinearEccentricityAndSemiLatusRectum(const T linearEccentricityInm, const T semiLatusRectumInm) {
		T l2 = semiLatusRectumInm * semiLatusRectumInm;
		T l4 = l2 * l2;

		return std::sqrt(std::sqrt((T)4.0 * linearEccentricityInm * linearEccentricityInm * l2 + l4) - l2) / (T) 2.0;
	}

	template <typename T>
	T EllipseSemiMinorAxisFromLinearEccentricityAndFocalParameter(const T linearEccentricityInm, const T focalParameterInm) {
		return std::sqrt(linearEccentricityInm * focalParameterInm);
	}



	template <typename T>
	T EllipseSemiMinorAxisFromEccentricityAndSemiLatusRectum(const T eccentricity, const T semiLatusRectumInm) {
		return semiLatusRectumInm / std::sqrt((T)1.0 - eccentricity * eccentricity);
	}

	template <typename T>
	T EllipseSemiMinorAxisFromEccentricityAndFocalParameter(const T eccentricity, const T focalParameterInm) {
		return (eccentricity * focalParameterInm) / std::sqrt((T)1.0 - eccentricity * eccentricity);
	}

	template <typename T>
	T EllipseSemiMinorAxisFromSemiLatusRectumAndFocalParameter(const T semiLatusRectumInm, const T focalParameterInm) {
		return semiLatusRectumInm / std::sqrt((T)1.0 - ((semiLatusRectumInm * semiLatusRectumInm) / (focalParameterInm * focalParameterInm)));
	}


}//namespace EGXMath
