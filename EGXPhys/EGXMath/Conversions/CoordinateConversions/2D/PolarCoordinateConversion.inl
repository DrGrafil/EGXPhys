/// @file EGXMath/Conversions/CoordinateConversions/2D/PolarCoordinateConversion.inl
///
/// @brief Implimentation of convertions from 2D Polar coordinates to other coordinate systems.
///
/// @author Elliot Grafil 
/// @date 5/18/18


namespace EGXMath {

    template<typename T>
    void PolarCoordinateToCartesianCoordinate(const T polarR, const T polarAzimuthInRadians, T& x, T& y) {
        x = polarR * cos(polarAzimuthInRadians);
        y = polarR * sin(polarAzimuthInRadians);
    }


}//namespace EGXMath
