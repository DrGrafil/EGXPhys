/// @file EGXMath/Geometry/3D/Spheroid/SpheroidVolume.inl
///
/// @brief Implimentation of functions relating to the volume of a spheroid.
/// @author Elliot Grafil 
/// @date 5/21/18


namespace EGXMath {
	
    template <typename T>
    T SpheroidVolume(const T equatorialRadiusInm, const T polarRadiusInm)
    {
        return (T)4.0 / (T)3.0 * (T)EGXMath::pi * polarRadiusInm * equatorialRadiusInm * equatorialRadiusInm;
    }

}//namespace EGXMath
