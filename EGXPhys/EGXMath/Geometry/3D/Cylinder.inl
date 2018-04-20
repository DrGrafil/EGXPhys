/// @file EGXMath/Geometry/3D/Cylinder.inl
///
/// @brief Implimentation of functions related to cylinder shape.
/// @author Elliot Grafil (Metex)
/// @date 4/19/18

#ifdef EGXMATH_GLM
#include <glm/glm.hpp>
#endif // EGXPHYS_GLM

namespace EGXMath {

	template <typename T>
	T Gaussian(const T&  x, const T&  mu, const T& sigma)
	{
		return (1.0 / (sigma * sqrt(2.0 * pi))) * exp(-pow(x - mu, 2.0) / (2.0 * sigma * sigma));
	}

}//namespace EGXMath
