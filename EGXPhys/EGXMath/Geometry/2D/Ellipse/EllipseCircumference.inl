/// @file EGXMath/Geometry/2D/Ellipse/EllipseCircumference.inl
///
/// @brief Implimentation of functions related to Ellipse shape.
/// @author Elliot Grafil 
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
			return (T)2.0 * (T)EGXMath::pi * semiMajorAxisInm;
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
		T h = pow((a - b)/(a + b), (T)2.0);
		return (T)EGXMath::pi * (a + b) * ((T)1.0 + (((T)3.0 * h) / ((T)10.0 + sqrt((T)4.0 - (T)3.0 * h))));
	}

	template <typename T>
	T EllipseCircumferencePade33approximation(const T semiMajorAxisInm, const T semiMinorAxisInm) {
		T a, b;
		if (semiMajorAxisInm == semiMinorAxisInm)
		{
			return (T)2.0 * (T)EGXMath::pi * semiMajorAxisInm;
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
		T h = pow((a - b) / (a + b), (T)2.0);

		return (T)EGXMath::pi * (a + b) * ((T)135168.0 - (T)85760.0 * h - (T)5568.0 * h * h + (T)3867.0 * h * h * h)/((T)135168.0 - (T)119552.0 * h + (T)22208.0 * h * h - (T)345.0 * h * h * h);
	}

}//namespace EGXMath
