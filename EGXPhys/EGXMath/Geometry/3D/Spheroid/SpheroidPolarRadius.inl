/// @file EGXMath/Geometry/3D/Spheroid/SpheroidPolarRadius.inl
///
/// @brief Implimentation of functions related to the polar radius of an spheroid.
/// @author Elliot Grafil 
/// @date 4/20/18


namespace EGXMath {

    template <typename T>
    T SpheroidPolarRadius(const T meanRadiusInm, const T flattening) {
        return meanRadiusInm * ((T)1.0 - (T)2.0 * flattening / (T)3.0);
    }

}//namespace EGXMath
