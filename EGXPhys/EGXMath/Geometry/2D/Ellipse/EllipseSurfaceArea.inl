/// @file EGXMath/Geometry/2D/Ellipse/EllipseSurfaceArea.inl
///
/// @brief Implimentation of functions related to ellipse surface area.
/// @author Elliot Grafil (Metex)
/// @date 4/23/18


namespace EGXMath {

	template <typename T>
	T EllipseSurfaceArea(const T semiMajorAxisInm, const T semiMinorAxisInm)
	{
		return pi * semiMajorAxisInm * semiMinorAxisInm;
	}

}//namespace EGXMath
