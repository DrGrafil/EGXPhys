/// @file EGXMath/Geometry/3D/SpheroidVolume.inl
///
/// @brief Implimentation of functions relating to the volume of a spheroid.
/// @author Elliot Grafil (Metex)
/// @date 5/21/18


namespace EGXMath {
	
    template <typename T>
    T SpheroidVolume(const T symmetricSemiPrincipleAxisInm, const T uniqueSemiPrincipleAxisInm)
    {
        return (T)4.0 / (T)3.0 * (T)EGXMath::pi * uniqueSemiPrincipleAxisInm * symmetricSemiPrincipleAxisInm * symmetricSemiPrincipleAxisInm;
    }

}//namespace EGXMath
