/// @file EGXMath/Geometry/3D/Ellipsoid/EllipsoidInertia.inl
///
/// @brief Implimentation of functions related to the inertia of an ellipsoid.
/// @author Elliot Grafil (Metex)
/// @date 5/23/18


namespace EGXMath {


	template <typename T, typename T2>
	void EllipsoidInertia(const T mass, const T aSemiPrincipleAxisInm, const T bSemiPrincipleAxisInm, const T cSemiPrincipleAxisInm, T2(&matrix)[9]) {
		std::fill(matrix, matrix + 9, T2(0)); // Prefer fill to memset see https://stackoverflow.com/questions/9146395/reset-c-int-array-to-zero-the-fastest-way
	
        T asq = aSemiPrincipleAxisInm * aSemiPrincipleAxisInm;
        T bsq = bSemiPrincipleAxisInm * bSemiPrincipleAxisInm;
        T csq = cSemiPrincipleAxisInm * cSemiPrincipleAxisInm;

        matrix[0] = (T2)((T)1.0 / (T)5.0 * mass * (bsq + csq));
        matrix[4] = (T2)((T)1.0 / (T)5.0 * mass * (asq + csq));
        matrix[8] = (T2)((T)1.0 / (T)5.0 * mass * (asq + bsq));
	}


	template <typename T, typename T2>
	void EllipsoidInertia(const T mass, const T aSemiPrincipleAxisInm, const T bSemiPrincipleAxisInm, const T cSemiPrincipleAxisInm, std::vector<T2>& matrix) {
		std::fill(matrix.begin(), matrix.end(), T2(0)); // Prefer fill to memset see https://stackoverflow.com/questions/9146395/reset-c-int-array-to-zero-the-fastest-way

        T asq = aSemiPrincipleAxisInm * aSemiPrincipleAxisInm;
        T bsq = bSemiPrincipleAxisInm * bSemiPrincipleAxisInm;
        T csq = cSemiPrincipleAxisInm * cSemiPrincipleAxisInm;

		matrix[0] = (T2)((T)1.0 / (T)5.0 * mass * (bsq + csq));
		matrix[4] = (T2)((T)1.0 / (T)5.0 * mass * (asq + csq));
		matrix[8] = (T2)((T)1.0 / (T)5.0 * mass * (asq + bsq));
	}

#ifdef EGXMATH_GLM
	template <typename T>
	void EllipsoidInertia(const T mass, const T aSemiPrincipleAxisInm, const T bSemiPrincipleAxisInm, const T cSemiPrincipleAxisInm, glm::mat3& matrix)
	{
		matrix = glm::mat3(0.0f);
        T asq = aSemiPrincipleAxisInm * aSemiPrincipleAxisInm;
        T bsq = bSemiPrincipleAxisInm * bSemiPrincipleAxisInm;
        T csq = cSemiPrincipleAxisInm * cSemiPrincipleAxisInm;

        matrix[0][0] = static_cast<decltype(matrix[0].x)>(1.0 / 5.0 * mass * (bsq + csq));
        matrix[1][1] = static_cast<decltype(matrix[0].x)>(1.0 / 5.0 * mass * (asq + csq));
        matrix[2][2] = static_cast<decltype(matrix[0].x)>(1.0 / 5.0 * mass * (asq + bsq));
	}


#endif // EGXMATH_GLM

}//namespace EGXMath
