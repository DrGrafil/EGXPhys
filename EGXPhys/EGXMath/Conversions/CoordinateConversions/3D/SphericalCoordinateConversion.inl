/// @file EGXMath/Conversions/CoordinateConversions/SphericalCoordinateConversion.inl
///
/// @brief Implimentation of convertions from Spherical coordinates to other coordinate systems.
///
/// @author Elliot Grafil (Metex)
/// @date 5/18/18


namespace EGXMath {

    template<typename T>
    void SphericalCordinatesOfPointGivenCenter(const T centerR, const T centerAzimuthInRadians, const T centerZenithInRadians,
        const T pointR, const T pointAzimuthInRadians, const T poinZenithInRadians,
        T& shiftedR, T& shiftedAzimuthInRadians, T& shiftedZenithInRadians) {
        //Note that the vector formed is 1-2 where 1 is the point and 2 is center
        //we do conversion to cartesian space and recalculate the new spherical variables.
        // dont know of a quicker way yet.

        // Cos and sins of thetas (azimuth)
        T ct1 = cos(pointAzimuthInRadians); T ct2 = cos(centerAzimuthInRadians);
        T st1 = sin(pointAzimuthInRadians); T st2 = sin(centerAzimuthInRadians);
        //Cos and sin of phis (zenith)
        T cp1 = cos(poinZenithInRadians); T cp2 = cos(centerZenithInRadians);
        T sp1 = sin(poinZenithInRadians); T sp2 = sin(centerZenithInRadians);

        // \[Sqrt](r1^2+r2^2-2 r1 r2 (Cos[Phi1] Cos[Phi2]+Cos[Theta1-Theta2] Sin[Phi1] Sin[Phi2]))
        R = sqrt(centerR*centerR + pointR * pointR - 2.0 * centerR * pointR *
            (cp1 * cp2 + cos(pointAzimuthInRadians - centerAzimuthInRadians) * sp1 * sp2));

        //Azimuth arctan2 y/x	See http://en.wikipedia.org/wiki/Atan2
        Azimuth = atan2(
            ((pointR * st1 * sp1) - (centerR * st2 * sp2)),
            ((pointR * ct1 * sp1) - (centerR * ct2 * sp2))
        );

        Zenith = acos(
            ((pointR * cp1) - (centerR * cp2)) / R
        );

    }

    template<typename T>
    void SphericalCoordinateToCartesianCoordinate(  const T sphericalR, const T sphericalAzimuthInRadians, const T sphericalZenithInRadians,
                                                    T& x, T& y, T& z) {
        x = sphericalR * sin(sphericalZenithInRadians) * cos(sphericalAzimuthInRadians);
        y = sphericalR * sin(sphericalZenithInRadians) * sin(sphericalAzimuthInRadians);
        z = sphericalR * cos(sphericalZenithInRadians);
    }


    template<typename T>
    void SphericalCoordinateToCylindricalCoordinate(const T sphericalR, const T sphericalAzimuthInRadians, const T sphericalZenithInRadians,
                                                    T& cylindricalR, T& cylindricalAzimuthInRadians, T& cylindricalZ) {
        cylindricalR = sphericalR * sin(sphericalZenithInRadians);
        cylindricalAzimuthInRadians = sphericalAzimuthInRadians;
        cylindricalZ = sphericalR * cos(sphericalZenithInRadians);

    }
	
}//namespace EGXMath
