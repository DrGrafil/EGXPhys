/// @file EGXMath/Conversions/CoordinateConversions/PolarCoordinateConversion.inl
///
/// @brief Implimentation of convertions from Polar coordinates to other coordinate systems.
///
/// @author Elliot Grafil (Metex)
/// @date 5/18/18


namespace EGXMath {

    template<typename T>
    void CylindricalCoordinateToCartesianCoordinate(const T cylindricalR, const T cylindricalAzimuthInRadians, const T cylindricalZ, T& x, T& y, T& z) {
        x = cylindricalR * cos(cylindricalAzimuthInRadians);
        y = cylindricalR * sin(cylindricalAzimuthInRadians);
        z = cylindricalZ
    }


    template<typename T>
    void CylindricalCoordinateToSphericalCoordinate(    const T cylindricalR, const T cylindricalAzimuthInRadians, const T cylindricalZ,
                                                        T& sphericalR, T& sphericalAzimuthInRadians, T& sphericalZenithInRadians) {
        sphericalR = sqrt(cylindricalR*cylindricalR + cylindricalZ * cylindricalZ);
        sphericalAzimuthInRadians = cylindricalAzimuthInRadians;
        sphericalZenithInRadians = atan(cylindricalR / cylindricalZ);

    }

}//namespace EGXMath
