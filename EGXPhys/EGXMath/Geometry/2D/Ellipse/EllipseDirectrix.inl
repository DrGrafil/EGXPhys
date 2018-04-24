/// @file EGXMath/Geometry/2D/Ellipse/EllipseDirectrix.inl
///
/// @brief Implimentation of functions related to ellipse directrix.
/// @author Elliot Grafil (Metex)
/// @date 4/24/18


namespace EGXMath {



	template <typename T>
	T EllipseDirectrix(const T semiMajorAxisInm, const T semiMinorAxisInm) {
		return EllipseDirectrixFromSemiMajorAndSemiMinorAxes(semiMajorAxisInm, semiMinorAxisInm);
	}

	template <typename T>
	T EllipseDirectrixFromSemiMajorAndSemiMinorAxes(const T semiMajorAxisInm, const T semiMinorAxisInm) {
		T a, b;
		if (semiMajorAxisInm > semiMinorAxisInm) {
			a = semiMajorAxisInm;
			b = semiMinorAxisInm;
		}
		else {
			b = semiMajorAxisInm;
			a = semiMinorAxisInm;
		}
		return a * a / std::sqrt{ a*a - b * b };
	}

	template <typename T>
	T EllipseDirectrixFromLinearEccentricity(const T semiMajorAxisInm, const T linearEccentricityInm) {
		return semiMajorAxisInm * semiMajorAxisInm / linearEccentricityInm;
	}


}//namespace EGXMath
