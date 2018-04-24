/// @file EGXMath/Geometry/2D/Ellipse.inl
///
/// @brief Implimentation of functions related to Ellipse shape.
/// @author Elliot Grafil (Metex)
/// @date 4/23/18


namespace EGXMath {

	template <typename T>
	T EllipseSurfaceArea(const T semiMajorAxisInm, const T semiMinorAxisInm)
	{
		return pi * semiMajorAxisInm * semiMinorAxisInm;
	}

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

	template <typename T, typename T2>
	void EllipseInertia(const T massInkg, const T semiMajorAxisInm, const T semiMinorAxisInm, T2(&matrix)[9]) {
		std::fill(matrix, matrix + 9, T2(0)); // Prefer fill to memset see https://stackoverflow.com/questions/9146395/reset-c-int-array-to-zero-the-fastest-way

		//matrix[0] = (T2)((T)1.0 / (T)2.0 * mass * radius * radius);
		//matrix[4] = (T2)((T)1.0 / (T)2.0 * mass * radius * radius);
		//matrix[8] = (T2)(mass * radius * radius);
	}


	template <typename T, typename T2>
	void EllipseInertia(const T massInkg, const T semiMajorAxisInm, const T semiMinorAxisInm, std::vector<T2>& matrix) {
		std::fill(matrix.begin(), matrix.end(), T2(0)); // Prefer fill to memset see https://stackoverflow.com/questions/9146395/reset-c-int-array-to-zero-the-fastest-way

		//matrix[0] = (T2)((T)1.0 / (T)2.0 * mass * radius * radius);
		//matrix[4] = (T2)((T)1.0 / (T)2.0 * mass * radius * radius);
		//matrix[8] = (T2)(mass * radius * radius);
	}


#ifdef EGXMATH_GLM
	template <typename T>
	void EllipseInertia(const T massInkg, const T semiMajorAxisInm, const T semiMinorAxisInm, glm::mat3& matrix)
	{
		matrix = glm::mat3(0.0f);

		//matrix[0][0] = static_cast<decltype(matrix[0].x)>(1.0f / 2.0f * mass * radius * radius);
		//matrix[1][1] = static_cast<decltype(matrix[0].x)>(1.0f / 2.0f * mass * radius * radius);
		//matrix[2][2] = static_cast<decltype(matrix[0].x)>(mass * radius * radius);
	}


#endif // EGXMATH_GLM

}//namespace EGXMath
