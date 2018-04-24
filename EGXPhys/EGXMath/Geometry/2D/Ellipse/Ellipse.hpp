/// @file EGXMath/Geometry/2D/Ellipse.hpp
///
/// @brief Defines functions relating to ellipse shape.
///
/// @author Elliot Grafil (Metex)
/// @date 4/23/18

/// @defgroup EGXMath-Geometry-2D-Ellipse Ellipse
/// @ingroup EGXMath-Geometry-2D


//=================================
// Header guard
#pragma once
//=================================
// Included dependencies
#include <vector>
#include <algorithm>
//=================================
// Forward declared dependencies
#ifdef EGXMATH_GLM
#include <glm/fwd.hpp>
#endif // EGXPHYS_GLM
//=================================
//


namespace EGXMath
{
	/// @addtogroup EGXMath-Geometry-2D-Ellipse
	/// @{

	/**
	*   @brief Finds the surface area, \f$A_{ellipse}\f$, in meter squared of an ellipse with semi-major axis \f$a\f$, and semi-minor axis \f$b\f$.
	*		\f[ A_{ellipse}=\pi a b \f]
	*
	*	See http://mathworld.wolfram.com/Ellipse.html
	*
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*   @return \f$ A_{ellipse}\ (m^2)\f$ Surface area of circle in meter squared.
	*	@see EllipseSurfaceArea() for area of a ellipse.
	*	@see EllipseCircumference() for circumference of a ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of a ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of a ellipse.
	*	@see EllipseFocalLength() for focal length (linear eccentricity) of a ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity (focal length) of a ellipse.
	*	@see EllipseEccentricity() for eccentricity of a ellipse.
	*	@see EllipseInertia() for inertial tensor of a ellipse.
	*/
	template <typename T>
	T EllipseSurfaceArea(const T semiMajorAxisInm, const T semiMinorAxisInm);

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
	*   @return \f$ C_{ellipse}\ (m)\f$ Circumference of circle in meters.
	*	@see EllipsePerimeter() for alias.
	*	@see EllipseCircumferencePade33approximation() for Pade 3/3 approximation of circumference.
	*	@see EllipseCircumferenceRamanujanIIapproximation() for Ramanujan II of circumference.
	*	@see EllipseSurfaceArea() for area of a ellipse.
	*	@see EllipseCircumference() for circumference of a ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of a ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of a ellipse.
	*	@see EllipseFocalLength() for focal length (linear eccentricity) of a ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity (focal length) of a ellipse.
	*	@see EllipseEccentricity() for eccentricity of a ellipse.
	*	@see EllipseInertia() for inertial tensor of a ellipse.
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
	*   @return \f$ C_{ellipse}\ (m)\f$ Circumference of circle in meters.
	*	@see EllipseCircumference() for alias.
	*	@see EllipseCircumferencePade33approximation() for Pade 3/3 approximation of circumference.
	*	@see EllipseCircumferenceRamanujanIIapproximation() for Ramanujan II of circumference.
	*	@see EllipseSurfaceArea() for area of a ellipse.
	*	@see EllipseCircumference() for circumference of a ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of a ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of a ellipse.
	*	@see EllipseFocalLength() for focal length (linear eccentricity) of a ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity (focal length) of a ellipse.
	*	@see EllipseEccentricity() for eccentricity of a ellipse.
	*	@see EllipseInertia() for inertial tensor of a ellipse.
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
	*   @return \f$ C_{ellipse}\ (m)\f$ Circumference of circle in meters.
	*	@see EllipseCircumferenceRamanujanIIapproximation() for Ramanujan II of circumference.
	*	@see EllipseSurfaceArea() for area of a ellipse.
	*	@see EllipseCircumference() for circumference of a ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of a ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of a ellipse.
	*	@see EllipseFocalLength() for focal length (linear eccentricity) of a ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity (focal length) of a ellipse.
	*	@see EllipseEccentricity() for eccentricity of a ellipse.
	*	@see EllipseInertia() for inertial tensor of a ellipse.
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
	*   @return \f$ C_{ellipse}\ (m)\f$ Circumference of circle in meters.
	*	@see EllipseCircumferencePade33approximation() for Pade 3/3 approximation of circumference.
	*	@see EllipseSurfaceArea() for area of a ellipse.
	*	@see EllipseCircumference() for circumference of a ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of a ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of a ellipse.
	*	@see EllipseFocalLength() for focal length (linear eccentricity) of a ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity (focal length) of a ellipse.
	*	@see EllipseEccentricity() for eccentricity of a ellipse.
	*	@see EllipseInertia() for inertial tensor of a ellipse.
	*/
	template <typename T>
	T EllipseCircumferenceRamanujanIIapproximation(const T semiMajorAxisInm, const T semiMinorAxisInm);

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{ellipse}\f$ of an ellipse with semi-major axis \f$a\f$, and semi-minor axis \f$b\f$ that is infinitly thin. It is assumed that the semi-major axis lays on the x axis while semi-minor axis is on the y axis. 
	*		\f[ I_{ellipse}=\begin{bmatrix}
	??? & 0 & 0\\
	0 & ??? & 0\\
	0 & 0 & ???
	\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaHoop.html
	*	@param massInkg \f$ m\ (kg)\f$ Mass of the ellipse in kilograms.
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*	@param matrix \f$ I_{ellipse}\ (kg\ m^2)\f$ Moment of inertia tensor matrix.
	*	@see EllipseSurfaceArea() for area of a ellipse.
	*	@see EllipseCircumference() for circumference of a ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of a ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of a ellipse.
	*	@see EllipseFocalLength() for focal length (linear eccentricity) of a ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity (focal length) of a ellipse.
	*	@see EllipseEccentricity() for eccentricity of a ellipse.
	*/
	template <typename T, typename T2>
	void EllipseInertia(const T massInkg, const T semiMajorAxisInm, const T semiMinorAxisInm, T2(&matrix)[9]);

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{ellipse}\f$ of an ellipse with semi-major axis \f$a\f$, and semi-minor axis \f$b\f$ that is infinitly thin. It is assumed that the semi-major axis lays on the x axis while semi-minor axis is on the y axis. 
	*		\f[ I_{ellipse}=\begin{bmatrix}
	??? & 0 & 0\\
	0 & ??? & 0\\
	0 & 0 & ???
	\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaHoop.html
	*	@param massInkg \f$ m\ (kg)\f$ Mass of the ellipse in kilograms.
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*	@param matrix \f$ I_{ellipse}\ (kg\ m^2)\f$ Moment of inertia tensor matrix.
	*	@see EllipseSurfaceArea() for area of a ellipse.
	*	@see EllipseCircumference() for circumference of a ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of a ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of a ellipse.
	*	@see EllipseFocalLength() for focal length (linear eccentricity) of a ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity (focal length) of a ellipse.
	*	@see EllipseEccentricity() for eccentricity of a ellipse.
	*/
	template <typename T, typename T2>
	void EllipseInertia(const T massInkg, const T semiMajorAxisInm, const T semiMinorAxisInm, std::vector<T2>& matrix);

#ifdef EGXMATH_GLM

	/**
	*   @brief Finds the moment of inertia tensor, \f$I_{ellipse}\f$ of an ellipse with semi-major axis \f$a\f$, and semi-minor axis \f$b\f$ that is infinitly thin. It is assumed that the semi-major axis lays on the x axis while semi-minor axis is on the y axis. 
	*		\f[ I_{ellipse}=\begin{bmatrix}
	??? & 0 & 0\\
	0 & ??? & 0\\
	0 & 0 & ???
	\end{bmatrix} \f]
	*	See https://en.wikipedia.org/wiki/List_of_moments_of_inertia and http://scienceworld.wolfram.com/physics/MomentofInertiaHoop.html
	*	@param massInkg \f$ m\ (kg)\f$ Mass of the ellipse in kilograms.
	*	@param semiMajorAxisInm \f$ a\ (m)\f$ Semi-major axis of the ellipse in meters.
	*	@param semiMinorAxisInm \f$ b\ (m)\f$ Semi-minor axis of the ellipse in meters.
	*	@param matrix \f$ I_{ellipse}\ (kg\ m^2)\f$ Moment of inertia tensor matrix.
	*	@see EllipseSurfaceArea() for area of a ellipse.
	*	@see EllipseCircumference() for circumference of a ellipse.
	*	@see EllipseSemiMajorAxis() for semi-major axis of a ellipse.
	*	@see EllipseSemiMinorAxis() for semi-minor axis of a ellipse.
	*	@see EllipseFocalLength() for focal length (linear eccentricity) of a ellipse.
	*	@see EllipseLinearEccentricity() for linear eccentricity (focal length) of a ellipse.
	*	@see EllipseEccentricity() for eccentricity of a ellipse.
	*/
	template <typename T>
	void EllipseInertia(const T massInkg, const T semiMajorAxisInm, const T semiMinorAxisInm, glm::mat3& matrix);

#endif // EGXMATH_GLM
    /// @}
} //namespace EGXMath

#include "Ellipse.inl"
