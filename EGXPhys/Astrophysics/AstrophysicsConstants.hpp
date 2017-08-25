/// @file EGXPhys/Astrophysics/AstrophysicsConstants.hpp
///
/// @brief Constants pertaining to astrophysics.
/// @author Elliot Grafil (Metex)
/// @date 7/28/17


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
	const double MassOfSun = 1.9891e30;										/**< \f$m_\odot\ (kg)\f$ Mass of Sun. */
	const double SolarMass = MassOfSun;                                 	/**< \f$m_\odot\ (kg)\f$ Mass of Sun. */
	const double SunTempreture = 5778.0;									/**< \f$T_\odot\ (K)\f$ Tempreture of Sun. */
	const double SunAbsVMagnitude = 4.862;									/**< \f$M_V\ (1)\f$ Absolute V magnitude of Sun. */
	const double SunLuminocity = 3.8270e26;									/**< \f$L_\odot\ (W)\f$ Luminocity of Sun. */
	const double SunAge = 4572.0;											/**< \f$\text{Age_\odot}(Myr)\f$ of Sun. */
	const double RadiusOfSun =  6.955e8;									/**< \f$R_\odot\ (m)\f$ Radius of sun. */
		//Earth
	const double SemimajorAxisOfEarth = 149598261000;						/**< \f$a\ (m)\f$ Semimajor Axis of Earth. */
	const double EccentricityOfEarth = 0.01671123;                     	 	/**< \f$e\ (1)\f$ Eccentricity of Earth. */
	const double BondAlbedoOfEarth = 0.306;									/**< \f$A\ (1)\f$ Bond Albedo of Earth. */
	const double GeometricAlbedoOfEarth = 0.367;							/**< \f$p\ (1)\f$ Geometric Albedo of Earth. */
	const double MassOfEarth = 5.97219e24;									/**< \f$M_\oplus\ (kg)\f$ Mass of Earth.*/
	const double RadiusOfEarth= 6371000;									/**< \f$R_\oplus\ (m)\f$ Radius Of Earth.*/
	const double SiderealRotationPeriodOfEarth = 0.99726968* secondsInDay;	/**< \f$T_S\ (s)\f$ Sidereal Rotation Period of Earth. */
	const double MassOfSunInEarthMass = MassOfSun/MassOfEarth;				/**< \f$m_\odot\ (M_\oplus)\f$ Mass Of Sun. */
	
								// m
	const double VolumeOfEarth = 4.0/3.0 * 3.14 * pow(RadiusOfEarth, 3);	/**< \f$V_\oplus\ (m^3)\f$ Volume of Earth. */
	const double DensityOfEarth =  MassOfEarth/VolumeOfEarth;				/**< \f$\rho_\oplus\ (\frac{kg}{m^3})\f$ Density of Earth. */
	const double EscapeVelocityOfEarth = 11186; 							/**< \f$v_e\ (\frac{m}{s})\f$ Escape velocity of Earth. */
	const double SurfaceTempretureOfEarth = 287;							/**< \f$T_{\oplus ,Surface}\ (K)\f$ Surface tempreture of Earth. */
	 
	 
								// m

		//Mars
	
	/*
	const double gravConstAuDay = gravConst*SolarMass*day*day/(AU*AU*AU); 		// AU^3 /(SolarMass day^2)
	*/
} //namespace EGXPhys


