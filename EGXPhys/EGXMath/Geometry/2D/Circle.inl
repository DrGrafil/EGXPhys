/// @file EGXMath/Geometry/XXXXX.inl
///
/// @brief Implimentation of functions related to shape.
/// @author Elliot Grafil (Metex)
/// @date 4/10/18


namespace EGXMath {


	template <typename T>
	T CircleArea(const T radius)
	{
		return pi<T> * radius * radius;
	}

	template <typename T>
	T CircleCircumference(const T radius)
	{
		return (T)2.0 * pi<T> * radius;
	}


}//namespace EGXMath
