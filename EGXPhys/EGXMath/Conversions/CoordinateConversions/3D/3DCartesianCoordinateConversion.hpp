/// @file EGXMath/Conversions/CoordinateConversions/3D/3DCartesianCoordinateConversion.hpp
///
/// @brief Converts a set of 3D coordinates from Cartesian into Spherical, Cylindrical ect.
///
/// @author Elliot Grafil (Metex)
/// @date 5/18/18

/// @defgroup EGXMath-Conversions-CoordinateConversions-3D-Cartesian Cartesian
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
	/// @addtogroup EGXMath-Conversions-CoordinateConversions-3D-Cartesian
	/// @{
	

    /**
    *   @brief Converts a 3D point represented in the Cartesian coordinate system \f$(x,y,z)\f$ to a representation in the Cylindrical coordiante system \f$(r_C,\theta_C,z_C)\f$.
    *		\f[ r_C = \sqrt{x^2+y^2} \f]
    *       \f[ \theta_C = atan2(y,x) \f]
    *       \f[ z_C = z \f]
    *
    *
    *	See http://mathworld.wolfram.com/CylindricalCoordinates.html and https://en.wikipedia.org/wiki/Cylindrical_coordinate_system
    *   @param x \f$ x\ (m)\f$ The \f$x\f$ cartesian coordinate in meters.
    *   @param y \f$ y\ (m)\f$ The \f$y\f$ cartesian coordinate in meters.
    *   @param z \f$ z\ (m)\f$ The \f$z\f$ cartesian coordinate in meters.
    *   @param cylindricalR \f$ r_C\ (m)\f$ The \f$r_C\f$ cylindrical coordinate (cylindrical radius) in meters.
    *   @param cylindricalAzimuthInRadians \f$ \theta_C\ (rad)\f$ The \f$\theta_C\f$ cylindrical coordinate (azimuth angle) in radians.
    *   @param cylindricalZ \f$ z_C\ (m)\f$ The \f$z_C\f$ cylindrical coordinate in meters.
    *	@see CylindricalCoordinateToCartesianCoordinate() for reverse coordinate transform.
    *	@see CartesianCoordinateToPolarCoordinate() for 2D.
    *	@see DegreeToRadian() for conversion from degrees to radians.
    */
	template<typename T>
    void CartesianCoordinateToCylindricalCoordinate(    const T x, const T y, const T z, 
                                                        const T& cylindricalR, const T& cylindricalAzimuthInRadians, const T& cylindricalZ);


    /**
    *   @brief Converts a 3D point represented in the Cartesian coordinate system \f$(x,y,z)\f$ to a representation in the Spherical coordiante system \f$(r_S,\theta_S,\phi_S)\f$. Note that \f$\theta_S\f$ lays in the \f$x\ y\f$ plane. 
    *		\f[ r_S = \sqrt{r_C+z_C^2} \f]
    *       \f[ \theta_S = \theta_C \f]
    *       \f[ \phi_S = arctan(\frac{r_C}{z_C}) \f]
    *
    *	See http://mathworld.wolfram.com/SphericalCoordinates.html and https://en.wikipedia.org/wiki/Spherical_coordinate_system
    *   @param x \f$ x\ (m)\f$ The \f$x\f$ cartesian coordinate in meters.
    *   @param y \f$ y\ (m)\f$ The \f$y\f$ cartesian coordinate in meters.
    *   @param z \f$ z\ (m)\f$ The \f$z\f$ cartesian coordinate in meters.
    *   @param sphericalR \f$ r_S\ (m)\f$ The \f$r_S\f$ spherical coordinate (spherical radius) in meters.
    *   @param sphericalAzimuthInRadians \f$ \theta_S\ (rad)\f$ The \f$\theta_S\f$ spherical coordinate (azimuth angle) in radians. Note that the azimuth angle is in the \f$x\ y\f$ plane.
    *   @param sphericalZenithInRadians \f$ \phi_S\ (rad)\f$ The \f$\phi_S\f$ spherical coordinate (zenith angle) in radians. Note that the zenith angle is measured from the z-axis.
    *	@see SphericalCoordinateToCartesianCoordinate() for reverse coordinate transform.
    *	@see DegreeToRadian() for conversion from degrees to radians.
    */
    template<typename T>
    void CartesianCoordinateToSphericalCoordinate(  const T x, const T y, const T z,
                                                    const T& sphericalR, const T& sphericalAzimuthInRadians, const T& sphericalZenithInRadians);
    
	/// @}
} //namespace EGXMath

#include "3DCartesianCoordinateConversion.inl"
