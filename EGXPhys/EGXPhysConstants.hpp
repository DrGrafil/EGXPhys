/// @file EGXPhys/EGXPhysConstants.hpp
///
/// @brief Link to all header files that includes constants.
///
/// @author Elliot Grafil (Metex)
/// @date 7/25/17
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
// Time
	const double minute = 60;											// s
	const double secondsInMinute = minute;
	const double hour = 60*minute;										// s
	const double secondsInHour = hour;
	const double day = 24*hour;											// s
	const double secondsInDay = day;
	const double year = 365.25*day;	
	const double secondsInYear = year;									// s
    // Universal Constants
    const double speedLight = 299792458;                   				// m / s
	const double c = speedLight;										// m / s
	
	const double GravitationalConstant = 6.6738480e-11;    
	const double gravConst = 6.6738480e-11;                				// m^3 /(kg s^2)
	
	const double plankConst = 6.62606957e-34;          					// J s
	const double h = plankConst;          								// J s
	
	const double redPlankConst = 1.054571726;							// J s
	const double hbar = redPlankConst;       							// J s
	
	

	const double AU = 149597870700.0;									// m

	//const double gravConstParsec = 6.6738480e-11; 
	//electromagnetic constants
	
	//atomic and nuclear constants
	
	//physico-chemical constants
	const double boltzmannConst = 1.3806488e-23;		   				// J / K
	const double kb = boltzmannConst;	   								// J / K
	
	const double stefanBoltzmannConst = 5.67037321e-8; 					// W / (m^2 K^4)
	const double sigma = stefanBoltzmannConst; 							// W / (m^2 K^4)
	
	const double wienDisplacement = 2.897772126e-3; 					// m K
	const double b = wienDisplacement;									// m K
} //namespace EGXPhys

