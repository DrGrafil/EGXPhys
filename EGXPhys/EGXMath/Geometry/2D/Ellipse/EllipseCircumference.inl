/// @file EGXMath/Geometry/2D/Ellipse/EllipseCircumference.inl
///
/// @brief Implimentation of functions related to Ellipse shape.
/// @author Elliot Grafil (Metex)
/// @date 4/23/18


namespace EGXMath {
	
	template <typename T>
	T EllipseCircumference(const T semiMajorAxisInm, const T semiMinorAxisInm)
	{
		return EllipseCircumferencePade33approximation(semiMajorAxisInm, semiMinorAxisInm);
	}

	template <typename T>
	T EllipsePerimeter(const T semiMajorAxisInm, const T semiMinorAxisInm)
	{
		return EllipseCircumferencePade33approximation(semiMajorAxisInm, semiMinorAxisInm);
	}

	template <typename T>
	T EllipseCircumferenceRamanujanIIapproximation(const T semiMajorAxisInm, const T semiMinorAxisInm) {
		T a, b;
		if (semiMajorAxisInm == semiMinorAxisInm)
		{
			return pi * semiMajorAxisInm * semiMajorAxisInm;
		}
		else if (semiMajorAxisInm > semiMinorAxisInm)
		{
			a = semiMajorAxisInm;
			b = semiMinorAxisInm;
		}
		else
		{
			b = semiMajorAxisInm;
			a = semiMinorAxisInm;
		}

		//Approximation Ramanujan 
		T h = pow(a - b, 2.0) / pow(a + b, 2.0);
		return pi * (a + b) * (1.0 + ((3.0 * h) / (10.0 + sqrt(4.0 - 3.0 * h))));
	}

	template <typename T>
	T EllipseCircumferencePade33approximation(const T semiMajorAxisInm, const T semiMinorAxisInm) {
		T a, b;
		if (semiMajorAxisInm == semiMinorAxisInm)
		{
			return pi * semiMajorAxisInm * semiMajorAxisInm;
		}
		else if (semiMajorAxisInm > semiMinorAxisInm)
		{
			a = semiMajorAxisInm;
			b = semiMinorAxisInm;
		}
		else
		{
			b = semiMajorAxisInm;
			a = semiMinorAxisInm;
		}

		//Approximation Pade 3/3 
		T h = pow(a - b, 2.0) / pow(a + b, 2.0);

		return pi * (a + b) * (135168.0 - 85760.0 * h - 5568.0 * h * h + 3867.0 * h * h * h)/(135168.0 - 119552.0 * h + 22208.0 * h * h - 345.0 * h * h * h);
	}

}//namespace EGXMath
