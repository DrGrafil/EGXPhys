/// @file EGXMath/Geometry/3D/EllipsoidVolume.inl
///
/// @brief Implimentation of functions relating to the volume of an ellipsoid.
/// @author Elliot Grafil 
/// @date 5/23/18


namespace EGXMath {
	
    template <typename T>
    T EllipsoidVolume(const T aSemiPrincipleAxisInm, const T bSemiPrincipleAxisInm, const T cSemiPrincipleAxisInm)
    {
        return (T)4.0 / (T)3.0 * (T)EGXMath::pi * aSemiPrincipleAxisInm * bSemiPrincipleAxisInm * cSemiPrincipleAxisInm;
    }

}//namespace EGXMath
