/// @file EGXMath/Conversions/CoordinateConversions/CartesianCoordinateConversion.inl
///
/// @brief Implimentation of convertions from Cartesian coordinates to other coordinate systems.
///
/// @author Elliot Grafil (Metex)
/// @date 5/18/18

namespace EGXMath {

    template<typename T>
    void CartesianCoordinateToPolarCoordinate(const T x, const T y, const T z, const T& r, const T& azimuthInRadians, const T& polarZ) {
        r = sqrt(x*x + y * y);
        azimuthInRadians = atan2(x, y);
        polarZ = z;
    }


    template<typename T>
    void CartesianCoordinateToSphericalCoordinate(const T x, const T y, const T z, const T& r, const T& azimuthInRadians, const T& zenithInRadians) {
        r = std::sqrt(x * x + y * y + z * z);
        azimuthInRadians = atan(y / x);
        zenithInRadians = acos(z / r);
    }


}//namespace EGXMath
