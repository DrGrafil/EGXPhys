/// @file EGXMath/Geometry/3D/Spheroid/SpheroidEquatorialRadius.inl
///
/// @brief Implimentation of functions related to the equatorial radius of an spheroid.
/// @author Elliot Grafil 
/// @date 5/24/18


namespace EGXMath {


    template <typename T>
    T SpheroidEquatorialRadius(const T meanRadiusInm, const T flattening) {
        return meanRadiusInm * ((T)1.0 + flattening / (T)3.0);
    }

}//namespace EGXMath
