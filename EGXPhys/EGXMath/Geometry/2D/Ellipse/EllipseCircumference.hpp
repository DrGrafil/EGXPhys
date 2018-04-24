/// @file EGXMath/Geometry/2D/Ellipse/EllipseCircumference.hpp
///
/// @brief Defines functions relating to ellipse circumference.
///
/// @author Elliot Grafil (Metex)
/// @date 4/23/18
/// @todo Add more Circumference approximations from http://dx.doi.org/10.3247/SL1Math05.004 

/// @defgroup EGXMath-Geometry-2D-Ellipse-Circumference Circumference
/// @ingroup EGXMath-Geometry-2D-Ellipse


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
	/// @addtogroup EGXMath-Geometry-2D-Ellipse-Circumference
	/// @{

	/**
	*   @brief Approximates the circumference (perimeter), \f$C_{ellipse}\f$ in meters of an ellipse with semi-major axis \f$a\f$, and semi-minor axis \f$b\f$. This approximation is done using the Pade 3/3 approximation.
	*		\f[ h=\left( \frac{a-b}{a+b} \right)^2 \f]
	*		\f[ C_{ellipse}=\pi (a + b) \left( \frac{135168-85760 h-5568 h^2+ 3867 h^3}{135168-119552 h+ 22208 h^2 - 345h^3} \right) \f]
	*
	*	See http://dx.doi.org/10.3247/SL1Math05.004 , http://mathworld.wolfram.com/Ellipse.html http://www.chrisrackauckas.com/assets/Papers/ChrisRackauckas-The_Circumference_of_an_Ellipse.pdf and https://www.mathsisfun.com/geometry/ellipse-perimeter.html 
	*
	*	Equations taken from http://dx.doi.org/10.3247/SL1Math05.004
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*   @return \f$ C_{ellipse}\ (m)\f$ Circumference of the ellipse in meters.
	*	@see EllipsePerimeter() for alias.
	*	@see EllipseCircumferencePade33approximation() for Pade 3/3 approximation of circumference.
	*	@see EllipseCircumferenceRamanujanIIapproximation() for Ramanujan II of circumference.
	*	@see EllipseSurfaceArea() for area of an ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of an ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of an ellipse.
	*	@see EllipseDirectrix() for directrix of an ellipse.
	*	@see EllipseFocalParameter() for focal parameter of an ellipse.
	*	@see EllipseFocalLength() for focal length of an ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity of an ellipse.
	*	@see EllipseEccentricity() for eccentricity of an ellipse.
	*	@see EllipseInertia() for inertial tensor of an ellipse.
	*/
	template <typename T>
	T EllipseCircumference(const T semiMajorAxisInm, const T semiMinorAxisInm);
	
	/**
	*   @brief Approximates the circumference (perimeter), \f$C_{ellipse}\f$ in meters of an ellipse with semi-major axis \f$a\f$, and semi-minor axis \f$b\f$. This approximation is done using the Pade 3/3 approximation.
	*		\f[ h=\left( \frac{a-b}{a+b} \right)^2 \f]
	*		\f[ C_{ellipse}=\pi (a + b) \left( \frac{135168-85760 h-5568 h^2+ 3867 h^3}{135168-119552 h+ 22208 h^2 - 345h^3} \right) \f]
	*
	*	See http://dx.doi.org/10.3247/SL1Math05.004 , http://mathworld.wolfram.com/Ellipse.html http://www.chrisrackauckas.com/assets/Papers/ChrisRackauckas-The_Circumference_of_an_Ellipse.pdf and https://www.mathsisfun.com/geometry/ellipse-perimeter.html
	*
	*	Equations taken from http://dx.doi.org/10.3247/SL1Math05.004
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*   @return \f$ C_{ellipse}\ (m)\f$ Circumference of the ellipse in meters.
	*	@see EllipseCircumference() for alias.
	*	@see EllipseCircumferencePade33approximation() for Pade 3/3 approximation of circumference.
	*	@see EllipseCircumferenceRamanujanIIapproximation() for Ramanujan II of circumference.
	*	@see EllipseSurfaceArea() for area of an ellipse.
	*	@see EllipseCircumference() for circumference of an ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of an ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of an ellipse.
	*	@see EllipseDirectrix() for directrix of an ellipse.
	*	@see EllipseFocalParameter() for focal parameter of an ellipse.
	*	@see EllipseFocalLength() for focal length of an ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity of an ellipse.
	*	@see EllipseEccentricity() for eccentricity of an ellipse.
	*	@see EllipseInertia() for inertial tensor of an ellipse.
	*/
	template <typename T>
	T EllipsePerimeter(const T semiMajorAxisInm, const T semiMinorAxisInm);
	
	/**
	*   @brief Approximates the circumference, \f$C_{ellipse}\f$ in meters of an ellipse with semi-major axis \f$a\f$, and semi-minor axis \f$b\f$. This approximation is done using the Ramanujan II approximation.
	*		\f[ h=\left( \frac{a-b}{a+b} \right)^2 \f]
	*		\f[ C_{ellipse}=\pi (a + b) \left( \frac{135168-85760 h-5568 h^2+ 3867 h^3}{135168-119552 h+ 22208 h^2 - 345h^3} \right) \f]
	*
	*	See http://dx.doi.org/10.3247/SL1Math05.004 , http://mathworld.wolfram.com/Ellipse.html http://www.chrisrackauckas.com/assets/Papers/ChrisRackauckas-The_Circumference_of_an_Ellipse.pdf and https://www.mathsisfun.com/geometry/ellipse-perimeter.html
	*
	*	Equations taken from http://dx.doi.org/10.3247/SL1Math05.004
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*   @return \f$ C_{ellipse}\ (m)\f$ Circumference of the ellipse in meters.
	*	@see EllipseCircumferenceRamanujanIIapproximation() for Ramanujan II of circumference.
	*	@see EllipseSurfaceArea() for area of an ellipse.
	*	@see EllipseCircumference() for circumference of an ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of an ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of an ellipse.
	*	@see EllipseDirectrix() for directrix of an ellipse.
	*	@see EllipseFocalParameter() for focal parameter of an ellipse.
	*	@see EllipseFocalLength() for focal length of an ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity of an ellipse.
	*	@see EllipseEccentricity() for eccentricity of an ellipse.
	*	@see EllipseInertia() for inertial tensor of an ellipse.
	*/
	template <typename T>
	T EllipseCircumferencePade33approximation(const T semiMajorAxisInm, const T semiMinorAxisInm);

	/**
	*   @brief Approximates the circumference, \f$C_{ellipse}\f$ in meters of an ellipse with semi-major axis \f$a\f$, and semi-minor axis \f$b\f$. This approximation is done using the Ramanujan II approximation.
	*		\f[ h=\left( \frac{a-b}{a+b} \right)^2 \f]
	*		\f[ C_{ellipse}=\pi (a + b) \left( 1+\frac{3h}{10+\sqrt{4-3h}} \right) \f]
	*
	*	See http://dx.doi.org/10.3247/SL1Math05.004 , http://mathworld.wolfram.com/Ellipse.html http://www.chrisrackauckas.com/assets/Papers/ChrisRackauckas-The_Circumference_of_an_Ellipse.pdf and https://www.mathsisfun.com/geometry/ellipse-perimeter.html
	*
	*	Equations taken from http://dx.doi.org/10.3247/SL1Math05.004
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*   @return \f$ C_{ellipse}\ (m)\f$ Circumference of the ellipse in meters.
	*	@see EllipseCircumferencePade33approximation() for Pade 3/3 approximation of circumference.
	*	@see EllipseSurfaceArea() for area of an ellipse.
	*	@see EllipseCircumference() for circumference of an ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of an ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of an ellipse.
	*	@see EllipseDirectrix() for directrix of an ellipse.
	*	@see EllipseFocalParameter() for focal parameter of an ellipse.
	*	@see EllipseFocalLength() for focal length of an ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity of an ellipse.
	*	@see EllipseEccentricity() for eccentricity of an ellipse.
	*	@see EllipseInertia() for inertial tensor of an ellipse.
	*/
	template <typename T>
	T EllipseCircumferenceRamanujanIIapproximation(const T semiMajorAxisInm, const T semiMinorAxisInm);

    /// @}
} //namespace EGXMath

#include "EllipseCircumference.inl"
