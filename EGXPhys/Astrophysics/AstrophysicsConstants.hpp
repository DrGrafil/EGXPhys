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


namespace EGXPhys
{
   	 
	//Stellar Constants
		//Sun
	const double MassOfSun = 1.9891e30;									/**< Mass(kg) Of Sun */
	const double SolarMass = MassOfSun;                                 /**< Mass(kg) Of Sun */
	const double SunTempreture = 5778.0;								/**< Tempreture(K) of Sun */
	const double SunAbsVMagnitude = 4.862;								//Mv abs
	const double SunLuminocity = 3.8270e26;								/**< Luminocity(W) of Sun */
	const double SunAge = 4572.0;										/**< Age(Myr) of Sun */
		//Earth
	const double SemimajorAxisOfEarth = 149598261000;
	const double EccentricityOfEarth = 0.01671123;                      /**< Eccentricity(dimensionless) of Earth */
	const double BondAlbedoOfEarth = 0.306;
	const double GeometricAlbedoOfEarth = 0.367;
	const double MassOfEarth = 5.97219e24;
	const double RadiusOfEarth= 6371000;	
	const double SiderealRotationPeriodOfEarth = 0.99726968* secondsInDay;			//s
	const double MassOfSunInEarthMass = MassOfSun/MassOfEarth;
	
								// m
	const double VolumeOfEarth = 4.0/3.0 * 3.14 * pow(RadiusOfEarth, 3);
	const double DensityOfEarth =  MassOfEarth/VolumeOfEarth;
	const double EscapeVelocityOfEarth = 11186; 						// m/s
	const double SurfaceTempretureOfEarth = 287;						// K
	 
	 
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


