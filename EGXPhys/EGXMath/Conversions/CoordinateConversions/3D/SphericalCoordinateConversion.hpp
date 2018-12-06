/// @file EGXMath/Conversions/CoordinateConversions/3D/SphericalCoordinateConversion.hpp
///
/// @brief Converts a set of 3D coordinates fom Spherical into Cartesian, Polar ect.
///
/// @author Elliot Grafil 
/// @date 5/18/18

/// @defgroup EGXMath-Conversions-CoordinateConversions-3D-Spherical Spherical
/// @ingroup EGXMath-Conversions-CoordinateConversions-3D
//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <cmath>  

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXMath
{
	/// @addtogroup EGXMath-Conversions-CoordinateConversions-3D-Spherical
	/// @{
	
    /// @todo Move this function to Coordinate transforms
    /**
    *   @brief In a Spherical coordinate system, given a point, \f$p\f$, and a new origin (center), \f$o\f$, this function gives the shifted spherical coordinates of the point relative to this new center.
    *		\f[ r_{shift} = \sqrt{r_o^2+r_p^2 - 2 r_o r_p ( \cos(\phi_p) \cos(\phi_o) + \cos(\theta_p-\theta_o) * \sin(\phi_p) \sin(\phi_o))}\f]
    *       \f[ \theta_{shift} = atan2( r_p sin(\theta_p) \sin(\phi_p) - r_o \sin(\theta_o) \sin(\phi_o) , r_p \cos(\theta_p) \sin(\phi_p) - r_o \cos(\theta_o) \sin(\phi_o) )\f]
    *       \f[ \phi_{shift} = \arccos(\frac{r_p \cos(\phi_p) - r_o (\phi_o)}{r_{shift}}) \f]
    *
    *	See http://mathworld.wolfram.com/SphericalCoordinates.html and https://en.wikipedia.org/wiki/Spherical_coordinate_system and 
    *   @param centerR \f$ r_o\ (m)\f$ The \f$r_o\f$ spherical coordinate (spherical radius) of the new origin in meters.
    *   @param centerAzimuthInRadians \f$ \theta_o\ (rad)\f$ The \f$\theta_o\f$ spherical coordinate (azimuth angle) of the new origin in radians. Note that the azimuth angle is in the \f$x\ y\f$ plane.
    *   @param centerZenithInRadians \f$ \phi_o\ (rad)\f$ The \f$\phi_o\f$ spherical coordinate (zenith angle) of the new origin in radians. Note that the zenith angle is measured from the z-axis.
    *   @param pointR \f$ r_p\ (m)\f$ The \f$r_p\f$ spherical coordinate (spherical radius) of the point in meters.
    *   @param pointAzimuthInRadians \f$ \theta_p\ (rad)\f$ The \f$\theta_p\f$ spherical coordinate (azimuth angle) of the point in radians. Note that the azimuth angle is in the \f$x\ y\f$ plane.
    *   @param poinZenithInRadians \f$ \phi_p\ (rad)\f$ The \f$\phi_p\f$ spherical coordinate (zenith angle) of the point in radians. Note that the zenith angle is measured from the z-axis.
    *   @param shiftedR \f$ r_{shift}\ (m)\f$ The \f$r_{shift}\f$ spherical coordinate (spherical radius) of the point using the new origin in meters.
    *   @param shiftedAzimuthInRadians \f$ \theta_{shift}\ (rad)\f$ The \f$\theta_{shift}\f$ spherical coordinate (azimuth angle) of the point using the new origin in radians. Note that the azimuth angle is in the \f$x\ y\f$ plane.
    *   @param shiftedZenithInRadians \f$ \phi_{shift}\ (rad)\f$ The \f$\phi_{shift}\f$ spherical coordinate (zenith angle) of the point using the new origin in radians. Note that the zenith angle is measured from the z-axis.
    *	@see DegreeToRadian() for conversion from degrees to radians.
    */
    template<typename T>
    void SphericalCordinatesOfPointGivenCenter(const T centerR, const T centerAzimuthInRadians, const T centerZenithInRadians,
        const T pointR, const T pointAzimuthInRadians, const T poinZenithInRadians,
        T& shiftedR, T& shiftedAzimuthInRadians, T& shiftedZenithInRadians);
 

    /**
    *   @brief Converts a 3D point represented in the Cartesian coordinate system \f$(x,y,z)\f$ to a representation in the Spherical coordiante system \f$(r,\theta,\phi)\f$. Note that \f$\theta\f$ lays in the \f$x\ y\f$ plane.
    *		\f[ x = \sqrt{x^2+y^2+z^2} \f]
    *       \f[ y = \arctan(\frac{y}{x}) \f]
    *       \f[ z = \arccos(\frac{z}{r}) \f]
    *
    *	See http://mathworld.wolfram.com/SphericalCoordinates.html and https://en.wikipedia.org/wiki/Spherical_coordinate_system
    *   @param sphericalR \f$ r_S\ (m)\f$ The \f$r_S\f$ spherical coordinate (spherical radius) in meters.
    *   @param sphericalAzimuthInRadians \f$ \theta_S\ (rad)\f$ The \f$\theta_S\f$ spherical coordinate (azimuth angle) in radians. Note that the azimuth angle is in the \f$x\ y\f$ plane.
    *   @param sphericalZenithInRadians \f$ \phi_S\ (rad)\f$ The \f$\phi_S\f$ spherical coordinate (zenith angle) in radians. Note that the zenith angle is measured from the z-axis.
    *   @param x \f$ x\ (m)\f$ The \f$x\f$ cartesian coordinate in meters.
    *   @param y \f$ y\ (m)\f$ The \f$y\f$ cartesian coordinate in meters.
    *   @param z \f$ z\ (m)\f$ The \f$z\f$ cartesian coordinate in meters.
    *	@see SphericalCoordinateToCylindricalCoordinate() for reverse coordinate transform.
    *	@see DegreeToRadian() for conversion from degrees to radians.
    */
    template<typename T>
    void SphericalCoordinateToCartesianCoordinate(  const T sphericalR, const T sphericalAzimuthInRadians, const T sphericalZenithInRadians,
                                                    T& x, T& y, T& z);


    /**
    *   @brief Converts a 3D point represented in the Spherical coordiante system \f$(r_S,\theta_S,\phi_S)\f$ to a representation in the . Note that \f$\theta_S\f$ lays in the \f$x\ y\f$ plane.
    *		\f[ r_C = \sqrt{x^2+y^2+z^2} \f]
    *       \f[ \theta_C = \theta_S \f]
    *       \f[ z_C = \arccos(\frac{z}{r}) \f]
    *
    *	See http://mathworld.wolfram.com/SphericalCoordinates.html and https://en.wikipedia.org/wiki/Spherical_coordinate_system
    *   @param sphericalR \f$ r_S\ (m)\f$ The \f$r_S\f$ spherical coordinate (spherical radius) in meters.
    *   @param sphericalAzimuthInRadians \f$ \theta_S\ (rad)\f$ The \f$\theta_S\f$ spherical coordinate (azimuth angle) in radians. Note that the azimuth angle is in the \f$x\ y\f$ plane.
    *   @param sphericalZenithInRadians \f$ \phi_S\ (rad)\f$ The \f$\phi_S\f$ spherical coordinate (zenith angle) in radians. Note that the zenith angle is measured from the z-axis.
    *   @param cylindricalR \f$ r_C\ (m)\f$ The \f$r_C\f$ cylindrical coordinate (cylindrical radius) in meters.
    *   @param cylindricalAzimuthInRadians \f$ \theta_C\ (rad)\f$ The \f$\theta_C\f$ cylindrical coordinate (azimuth angle) in radians.
    *   @param cylindricalZ \f$ z_C\ (m)\f$ The \f$z_C\f$ cylindrical coordinate in meters.
    *	@see SphericalCoordinateToCylindricalCoordinate() for reverse coordinate transform.
    *	@see DegreeToRadian() for conversion from degrees to radians.
    */
    template<typename T>
    void SphericalCoordinateToCylindricalCoordinate(const T sphericalR, const T sphericalAzimuthInRadians, const T sphericalZenithInRadians,
                                                    T& cylindricalR, T& cylindricalAzimuthInRadians, T& cylindricalZ);
 
	/// @}
} //namespace EGXMath

#include "SphericalCoordinateConversion.inl"
