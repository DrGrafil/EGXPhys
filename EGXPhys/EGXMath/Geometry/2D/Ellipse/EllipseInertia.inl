/// @file EGXMath/Geometry/2D/Ellipse/EllipseInertia.inl
///
/// @brief Implimentation of functions related to ellipse inertia.
/// @author Elliot Grafil 
/// @date 4/23/18


namespace EGXMath {

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
