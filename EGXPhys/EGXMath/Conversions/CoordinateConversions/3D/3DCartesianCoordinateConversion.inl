/// @file EGXMath/Conversions/CoordinateConversions/CartesianCoordinateConversion.inl
///
/// @brief Implimentation of convertions from Cartesian coordinates to other coordinate systems.
///
/// @author Elliot Grafil (Metex)
/// @date 5/18/18

namespace EGXMath {

    template<typename T>
    void CartesianCoordinateToCylindricalCoordinate(const T x, const T y, const T z, T& cylindricalR, T& cylindricalAzimuthInRadians, T& cylindricalZ) {
        cylindricalR = sqrt(x*x + y * y);
        cylindricalAzimuthInRadians = atan2(y, x);
        cylindricalZ = z;
    }


    template<typename T>
    void CartesianCoordinateToSphericalCoordinate(const T x, const T y, const T z, T& sphericalR, T& sphericalAzimuthInRadians, T& sphericalZenithInRadians) {
        sphericalR = std::sqrt(x * x + y * y + z * z);
        sphericalAzimuthInRadians = atan(y / x);
        sphericalZenithInRadians = acos(z / r);
    }


}//namespace EGXMath
