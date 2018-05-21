/// @file EGXMath/Conversions/CoordinateConversions/3D/CylindricalCoordinateConversion.hpp
///
/// @brief Converts a set of 3D coordinates from Cylindrical into Spherical, Caresian ect.
///
/// @author Elliot Grafil (Metex)
/// @date 5/18/18

/// @defgroup EGXMath-Conversions-CoordinateConversions-3D-Cylindrical Cylindrical
/// @ingroup EGXMath-Conversions-CoordinateConversions-3D

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <math.h> 

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXMath
{
	/// @addtogroup  EGXMath-Conversions-CoordinateConversions-3D-Cylindrical
	/// @{
	
    /**
    *   @brief Converts a 3D point represented in the Cylindrical coordiante system \f$(r_C,\theta_C,z_C)\f$ to a representation in the Cartesian coordinate system \f$(x,y,z)\f$.
    *		\f[ x = r_C\ cos(\theta_C) \f]
    *       \f[ y = r_C\ sin(\theta_C) \f]
    *       \f[ z = z_C \f]
    *
    *
    *	See http://mathworld.wolfram.com/CylindricalCoordinates.html and https://en.wikipedia.org/wiki/Cylindrical_coordinate_system
    *   @param cylindricalR \f$ r_C\ (m)\f$ The \f$r_C\f$ cylindrical coordinate (cylindrical radius) in meters.
    *   @param cylindricalAzimuthInRadians \f$ \theta_C\ (rad)\f$ The \f$\theta_C\f$ cylindrical coordinate (azimuth angle) in radians.
    *   @param cylindricalZ \f$ z_C\ (m)\f$ The \f$z_C\f$ cylindrical coordinate in meters.
    *   @param x \f$ x\ (m)\f$ The \f$x\f$ cartesian coordinate in meters.
    *   @param y \f$ y\ (m)\f$ The \f$y\f$ cartesian coordinate in meters.
    *   @param z \f$ z\ (m)\f$ The \f$z\f$ cartesian coordinate in meters.
    *	@see CartesianCoordinateToCylindricalCoordinate() for reverse coordinate transform.
    *	@see PolarCoordinateToCartesianCoordinate() for 2D.
    *	@see DegreeToRadian() for conversion from degrees to radians.
    */
    template<typename T>
    void CylindricalCoordinateToCartesianCoordinate(    const T cylindricalR, const T cylindricalAzimuthInRadians, const T cylindricalZ,
                                                        const T& x, const T& y, const T& z);

    /**
    *   @brief Converts a 3D point represented in the Cartesian coordinate system \f$(x,y,z)\f$ to a representation in the Spherical coordiante system \f$(r,\theta,\phi)\f$. Note that \f$\theta\f$ lays in the \f$x\ y\f$ plane.
    *		\f[ r_S = \sqrt{x^2+y^2+z^2} \f]
    *       \f[ \theta_S = arctan(\frac{y}{x}) \f]
    *       \f[ \phi_S = arccos(\frac{z}{r}) \f]
    *
    *	See http://mathworld.wolfram.com/SphericalCoordinates.html and https://en.wikipedia.org/wiki/Spherical_coordinate_system
    *   @param cylindricalR \f$ r_C\ (m)\f$ The \f$r_C\f$ cylindrical coordinate (cylindrical radius) in meters.
    *   @param cylindricalAzimuthInRadians \f$ \theta_C\ (rad)\f$ The \f$\theta_C\f$ cylindrical coordinate (azimuth angle) in radians.
    *   @param cylindricalZ \f$ z_C\ (m)\f$ The \f$z_C\f$ cylindrical coordinate in meters.
    *   @param sphericalR \f$ r_S\ (m)\f$ The \f$r_S\f$ spherical coordinate (spherical radius) in meters.
    *   @param sphericalAzimuthInRadians \f$ \theta_S\ (rad)\f$ The \f$\theta_S\f$ spherical coordinate (azimuth angle) in radians. Note that the azimuth angle is in the \f$x\ y\f$ plane.
    *   @param sphericalZenithInRadians \f$ \phi_S\ (rad)\f$ The \f$\phi_S\f$ spherical coordinate (zenith angle) in radians. Note that the zenith angle is measured from the z-axis.
    *	@see SphericalCoordinateToCylindricalCoordinate() for reverse coordinate transform.
    *	@see DegreeToRadian() for conversion from degrees to radians.
    */
    template<typename T>
    void CylindricalCoordinateToSphericalCoordinate(    const T cylindricalR, const T cylindricalAzimuthInRadians, const T cylindricalZ,
                                                        const T& sphericalR, const T& sphericalAzimuthInRadians, const T& sphericalZenithInRadians);

	/// @}
} //namespace EGXMath

#include "CylindricalCoordinateConversion.inl"