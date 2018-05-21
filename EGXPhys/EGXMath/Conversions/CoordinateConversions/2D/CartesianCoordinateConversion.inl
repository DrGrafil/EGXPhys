/// @file EGXMath/Conversions/CoordinateConversions/2D/CartesianCoordinateConversion.inl
///
/// @brief Implimentation of convertions from 2D Cartesian coordinates to other coordinate systems.
///
/// @author Elliot Grafil (Metex)
/// @date 5/18/18

namespace EGXMath {

    template<typename T>
    void CartesianCoordinateToPolarCoordinate(const T x, const T y, T& polarR, T& polarAzimuthInRadians) {
        polarR = sqrt(x*x + y * y);
        polarAzimuthInRadians = atan2(y,x);
    }

}//namespace EGXMath
