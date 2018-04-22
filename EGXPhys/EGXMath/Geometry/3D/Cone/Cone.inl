/// @file EGXMath/Geometry/XXXXX.inl
///
/// @brief Implimentation of functions related to shape.
/// @author Elliot Grafil (Metex)
/// @date 4/10/18


namespace EGXMath {

	template <typename T>
	T Gaussian(const T&  x, const T&  mu, const T& sigma)
	{
		return (1.0 / (sigma * sqrt(2.0 * pi))) * exp(-pow(x - mu, 2.0) / (2.0 * sigma * sigma));
	}

}//namespace EGXMath
