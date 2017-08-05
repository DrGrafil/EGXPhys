/// @file EGXPhys/Astrophysics/AstrophysicsConstants.hpp
///
/// @brief Constants pertaining to astrophysics.
/// @author Elliot Grafil (Metex)
/// @date 7/28/17
/// @bug No known bugs.

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies

//=================================
// Forward declared dependencies

//=================================
//

// Note about astronomy symbols https://space.meta.stackexchange.com/questions/700/feature-request-add-marvosym-package-to-our-mathjax-set-for-celestial-body-sym

namespace EGXPhys
{
   	 
	//Stellar Constants
		//Sun
	const double MassOfSun = 1.9891e30;										/**< \f$m_\odot\f$ (kg) Mass of Sun. */
	const double SolarMass = MassOfSun;                                 	/**< \f$m_\odot\f$ (kg) Mass of Sun. */
	const double SunTempreture = 5778.0;									/**< \f$T_\odot\f$(K) Tempreture of Sun. */
	const double SunAbsVMagnitude = 4.862;									/**< Absolute V Magnitude (??) of Sun. */
	const double SunLuminocity = 3.8270e26;									/**< \f$L_\odot\f$(W) Luminocity of Sun. */
	const double SunAge = 4572.0;											/**< Age(Myr) of Sun. */
		//Earth
	const double SemimajorAxisOfEarth = 149598261000;						/**< Semimajor Axis(m) Of Earth. */
	const double EccentricityOfEarth = 0.01671123;                     	 	/**< Eccentricity(dimensionless) of Earth. */
	const double BondAlbedoOfEarth = 0.306;									/**< Bond Albedo(dimensionless) of Earth. */
	const double GeometricAlbedoOfEarth = 0.367;							/**< Geometric Albedo(dimensionless) of Earth. */
	const double MassOfEarth = 5.97219e24;									/**< Mass(kg) Of Earth. \f$M_\oplus\f$ */
	const double RadiusOfEarth= 6371000;									/**< Radius(m) Of Earth. \f$R_\oplus\f$ */
	const double SiderealRotationPeriodOfEarth = 0.99726968* secondsInDay;	/**< Sidereal Rotation Period(s) Of Earth. */
	const double MassOfSunInEarthMass = MassOfSun/MassOfEarth;				/**< Mass(M_\oplus) Of Sun. */
	
								// m
	const double VolumeOfEarth = 4.0/3.0 * 3.14 * pow(RadiusOfEarth, 3);	/**< \f$V_\oplus\f$(\f$m^3\f$) Volume of Earth. */
	const double DensityOfEarth =  MassOfEarth/VolumeOfEarth;				/**< \f$\rho_\oplus\f$(\f$\frac{kg}{m^3}\f$) Density of Earth. */
	const double EscapeVelocityOfEarth = 11186; 							/**< \f$v_e\f$(\f$\frac{m}{s}\f$) Escape velocity of Earth. */
	const double SurfaceTempretureOfEarth = 287;							/**< \f$T_{\oplus,Surface}\f$(\f$K\f$) Surface tempreture of Earth. */
	 
	 
	const double RadiusOfSun =  6.955e8;								// m

		//Mars
	
	/*
	const double SemimajorAxisOf =;
	const double EccentricityOf =;
	const double AlbedoOf =;
	const double MassOf =;
	const double RadiusOf=;
*/
	const double gravConstAuDay = gravConst*SolarMass*day*day/(AU*AU*AU); 		// AU^3 /(SolarMass day^2)
} //namespace EGXPhys


