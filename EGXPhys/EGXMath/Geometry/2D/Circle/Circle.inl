/// @file EGXMath/Geometry/2D/Circle.inl
///
/// @brief Implimentation of functions related to Circle shape.
/// @author Elliot Grafil 
/// @date 4/10/18


namespace EGXMath {


	template <typename T>
	T CircleSurfaceArea(const T radius)
	{
		return (T)pi * radius * radius;
	}

	template <typename T>
	T CircleCircumference(const T radius)
	{
		return (T)2.0 * (T)pi * radius;
	}

	template <typename T>
	T CirclePerimeter(const T radius)
	{
		return (T)2.0 * (T)pi * radius;
	}

}//namespace EGXMath
