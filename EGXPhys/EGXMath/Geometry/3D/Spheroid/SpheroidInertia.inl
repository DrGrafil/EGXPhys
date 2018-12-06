/// @file EGXMath/Geometry/3D/Spheroid/SpheroidInertia.inl
///
/// @brief Implimentation of functions related to the inertia of a spheroid.
/// @author Elliot Grafil 
/// @date 5/24/18


namespace EGXMath {


	template <typename T, typename T2>
	void SpheroidInertia(const T mass, const T equatorialRadiusInm, const T polarRadiusInm, T2(&matrix)[9]) {
		std::fill(matrix, matrix + 9, T2(0)); // Prefer fill to memset see https://stackoverflow.com/questions/9146395/reset-c-int-array-to-zero-the-fastest-way
	
        T asq = equatorialRadiusInm * equatorialRadiusInm;
        T csq = polarRadiusInm * polarRadiusInm;

        matrix[0] = (T2)((T)1.0 / (T)5.0 * mass * (asq + csq));
        matrix[4] = (T2)((T)1.0 / (T)5.0 * mass * (asq + csq));
        matrix[8] = (T2)((T)1.0 / (T)5.0 * mass * (asq + asq));
	}


	template <typename T, typename T2>
	void SpheroidInertia(const T mass, const T equatorialRadiusInm, const T polarRadiusInm, std::vector<T2>& matrix) {
		std::fill(matrix.begin(), matrix.end(), T2(0)); // Prefer fill to memset see https://stackoverflow.com/questions/9146395/reset-c-int-array-to-zero-the-fastest-way

        T asq = equatorialRadiusInm * equatorialRadiusInm;
        T csq = polarRadiusInm * polarRadiusInm;

		matrix[0] = (T2)((T)1.0 / (T)5.0 * mass * (asq + csq));
		matrix[4] = (T2)((T)1.0 / (T)5.0 * mass * (asq + csq));
		matrix[8] = (T2)((T)1.0 / (T)5.0 * mass * (asq + asq));
	}

#ifdef EGXMATH_GLM
	template <typename T>
	void SpheroidInertia(const T mass, const T equatorialRadiusInm, const T polarRadiusInm, glm::mat3& matrix)
	{
		matrix = glm::mat3(0.0f);
        T asq = equatorialRadiusInm * equatorialRadiusInm;
        T csq = polarRadiusInm * polarRadiusInm;

        matrix[0][0] = static_cast<decltype(matrix[0].x)>(1.0 / 5.0 * mass * (asq + csq));
        matrix[1][1] = static_cast<decltype(matrix[0].x)>(1.0 / 5.0 * mass * (asq + csq));
        matrix[2][2] = static_cast<decltype(matrix[0].x)>(1.0 / 5.0 * mass * (asq + asq));
	}


#endif // EGXMATH_GLM

}//namespace EGXMath
