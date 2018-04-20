/// @file EGXMath/Geometry/3D/Cylinder.inl
///
/// @brief Implimentation of functions related to cylinder shape.
/// @author Elliot Grafil (Metex)
/// @date 4/19/18

#ifdef EGXMATH_GLM
#include <glm/glm.hpp>
#endif // EGXPHYS_GLM

namespace EGXMath {
	template<typename T>
	T CylinderSurfaceArea(const T radius, const T height)
	{
		return (((T)2.0 * (T)pi * radius * radius) + (((T)2.0 * (T)pi * radius * height)));
	}

	template<typename T>
	T CylinderVolume(const T radius, const T height)
	{
		return (T)4.0 / (T)3.0 * (T)pi * radius * radius * radius;
	}


	template <typename T, typename T2>
	void CylinderInertia(const T mass, const T height, const T radius, T2(&matrix)[9]) {
		std::fill(matrix, matrix + 9, T2(0)); // Prefer fill to memset see https://stackoverflow.com/questions/9146395/reset-c-int-array-to-zero-the-fastest-way

		matrix[0] = (T2)(((T)1.0 / (T)12.0 * mass * height * height) + ((T)1.0 / (T)4.0 * mass * radius * radius));
		matrix[4] = (T2)(((T)1.0 / (T)12.0 * mass * height * height) + ((T)1.0 / (T)4.0 * mass * radius * radius));
		matrix[8] = (T2)((T)1.0 / (T)2.0 * mass * radius * radius);
	}


	template <typename T, typename T2>
	void CylinderInertia(const T mass, const T height, const T radius, std::vector<T2>& matrix) {
		std::fill(matrix.begin(), matrix.end(), T2(0)); // Prefer fill to memset see https://stackoverflow.com/questions/9146395/reset-c-int-array-to-zero-the-fastest-way

		matrix[0] = (T2)( ((T)1.0 / (T)12.0 * mass * height * height) + ((T)1.0 / (T)4.0 * mass * radius * radius));
		matrix[4] = (T2)( ((T)1.0 / (T)12.0 * mass * height * height) + ((T)1.0 / (T)4.0 * mass * radius * radius));
		matrix[8] = (T2)((T)1.0 / (T)2.0 * mass * radius * radius);
	}

#ifdef EGXMATH_GLM

	template <typename T>
	void CylinderInertia(const T mass, const T height, const T radius, glm::mat3& matrix) {
		matrix = glm::mat3(0.0f);

		matrix[0][0] = static_cast<decltype(matrix[0].x)>(1.0 / 12.0 * mass * height * height + 1.0 / 4.0 * mass * radius * radius);
		matrix[1][1] = static_cast<decltype(matrix[0].x)>(1.0 / 12.0 * mass * height * height + 1.0 / 4.0 * mass * radius * radius);
		matrix[2][2] = static_cast<decltype(matrix[0].x)>(1.0 / 2.0 * mass * radius * radius);
	}

#endif // EGXMATH_GLM

}//namespace EGXMath
