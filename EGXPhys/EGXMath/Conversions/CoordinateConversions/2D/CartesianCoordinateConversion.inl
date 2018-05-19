/// @file EGXMath/Conversions/CoordinateConversions/CartesianCoordinateConversion.inl
///
/// @brief Implimentation of convertions from Cartesian coordinates to other coordinate systems.
///
/// @author Elliot Grafil (Metex)
/// @date 5/18/18

namespace EGXMath {

    template<typename T>
    void CartesianCoordinateToPolarCoordinate(const T x, const T y, const T z, const T& polarR, const T& polarAzimuthInRadians, const T& polarZ) {
        polarR = sqrt(x*x + y * y);
        polarAzimuthInRadians = atan2(x, y);
        polarZ = z;
    }


    template<typename T>
    void CartesianCoordinateToSphericalCoordinate(const T x, const T y, const T z, const T& sphericalR, const T& sphericalAzimuthInRadians, const T& sphericalZenithInRadians) {
        sphericalR = std::sqrt(x * x + y * y + z * z);
        sphericalAzimuthInRadians = atan(y / x);
        sphericalZenithInRadians = acos(z / r);
    }


}//namespace EGXMath
