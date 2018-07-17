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


///     @defgroup EGXPhys-Constants-Astrophysics Astrophysics Constants
///     @ingroup EGXPhys-Constants

///     @defgroup EGXPhys-Constants-Astrophysics-SolarSystem Solar System
///     @ingroup EGXPhys-Constants-Astrophysics


///     Planets and stars

///     @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Sun Sun
///     @ingroup EGXPhys-Constants-Astrophysics-SolarSystem

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Sun-Bulk Bulk
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Sun

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Sun-Orbit Orbit
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Sun


///     @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Mercury Mercury
///     @ingroup EGXPhys-Constants-Astrophysics-SolarSystem

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Mercury-Bulk Bulk
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Mercury

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Mercury-Orbit Orbit
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Mercury


///     @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Venus Venus
///     @ingroup EGXPhys-Constants-Astrophysics-SolarSystem

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Venus-Bulk Bulk
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Venus

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Venus-Orbit Orbit
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Venus


///     @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Earth Earth
///     @ingroup EGXPhys-Constants-Astrophysics-SolarSystem

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Earth-Bulk Bulk
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Earth

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Earth-Orbit Orbit
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Earth


///     @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Moon Moon
///     @ingroup EGXPhys-Constants-Astrophysics-SolarSystem

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Moon-Bulk Bulk
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Moon

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Moon-Orbit Orbit
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Moon


///     @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Mars Mars
///     @ingroup EGXPhys-Constants-Astrophysics-SolarSystem

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Mars-Bulk Bulk
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Mars

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Mars-Orbit Orbit
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Mars


///     @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Jupiter Jupiter
///     @ingroup EGXPhys-Constants-Astrophysics-SolarSystem

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Jupiter-Bulk Bulk
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Jupiter

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Jupiter-Orbit Orbit
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Jupiter


///     @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Saturn Saturn
///     @ingroup EGXPhys-Constants-Astrophysics-SolarSystem

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Saturn-Bulk Bulk
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Saturn

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Saturn-Orbit Orbit
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Saturn


///     @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Uruanus Uruanus
///     @ingroup EGXPhys-Constants-Astrophysics-SolarSystem

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Uruanus-Bulk Bulk
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Uruanus

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Uruanus-Orbit Orbit
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Uruanus


///     @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Neptune Neptune
///     @ingroup EGXPhys-Constants-Astrophysics-SolarSystem

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Neptune-Bulk Bulk
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Neptune

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Neptune-Orbit Orbit
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Neptune


///     @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Pluto Pluto
///     @ingroup EGXPhys-Constants-Astrophysics-SolarSystem

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Pluto-Bulk Bulk
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Pluto

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Pluto-Orbit Orbit
///         @ingroup EGXPhys-Constants-Astrophysics-SolarSystem-Pluto


namespace EGXPhys
{
    //Stellar Constants
    
        //Luminosity
            //Visual Luminosity
    const double zeroPointLuminosity = 3.0128e28;                           /**< \f$L_{0} \ (W)\f$ Zero point luminosity. It is a defined number used in bolometric magnitude stellar calculations. See the International Astronomical Union, https://www.iau.org/news/announcements/detail/ann15023/ resolution B2.*/
    
            //Bolometic Luminosity
    const double sunBolometricLuminosity = 3.0128e28;                       /**< \f$L_{Bol,\odot} \ (W)\f$ Sun bolometric luminosity. It is a defined number used in bolometric magnitude stellar calculations. See the International Astronomical Union, https://www.iau.org/news/announcements/detail/ann15023/ resolution B2.*/

        //Magnitude
            //Apparent
            //Absolute

            //Apparent Bolometric
    const double sunApparentBolometricMagnitude = -26.832;                  /**< \f$m_{Bol,\odot} \ (mag)\f$ Sun apparent bolometric magnitude. It is a "defined" number. See the International Astronomical Union, https://www.iau.org/news/announcements/detail/ann15023/ resolution B2.*/

            //Absolute Bolometric
    const double sunAbsoluteBolometricMagnitude = 4.74;                     /**< \f$M_{Bol,\odot} \ (mag)\f$ Sun absolute bolometric magnitude. It is a "defined" number. L_{0} was set to make the absolute bolometric magnitude was 4.74. See the International Astronomical Union, https://www.iau.org/news/announcements/detail/ann15023/ resolution B2.*/




    // See https://ssd.jpl.nasa.gov/horizons.cgi data
    //Physical Data

    //Sun

    //Jupiter

    const double jupiterMass = 1898.13e24;                                  /**< \f$M_{J} \ (kg)\f$ Mass of Jupiter in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiterMassUncertainty = 0.19e24;                          /**< \f$M_{J} \ (kg)\f$ Uncertainty in mass of Jupiter in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    const double jupiterDensity = 1326.0;                                    /**< \f$\rho_{J} \ (\dfrafc{kg}{m^3})\f$ Density of Jupiter in kg per meter cubed. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    const double jupiterRadiusEquatorial = 71492000;                        /**< \f$R_{J,Equat} \ (m)\f$ Equatorial radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiterRadiusEquatorialUncertainty = 4000;                 /**< \f$R_{J,Equat} \ (m)\f$ Uncertainty in equatorial radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    const double jupiterRadiusPolar = 66854000;                             /**< \f$R_{J,Polar} \ (m)\f$ Polar radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiterRadiusPolarUncertainty = 10000;                     /**< \f$R_{J,Polar} \ (m)\f$ Uncertainty in polar radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    const double jupiterVolumetricMeanRadius = 69911000;                    /**< \f$M_{J} \ (kg)\f$ Volumetric mean radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiterVolumetricMeanRadiusUncertainty = 6000;             /**< \f$M_{J} \ (kg)\f$ Uncertainty in volumetric mean radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    const double jupiterFlattening = 0.06487;                               /**< \f$f_{J} \ (dimensionless)\f$ Flattening of Jupiter. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */



    const double jupiterRotationPeriod = 35729.685;                         /**< \f$ P_{J} \ (s)\f$ Rotation Period of Jupiter in seconds. Total time is 9h 55m 29.685s. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiterRotationRate = 1.63785e-4;                          /**< \f$ \omega_{J} \ (\dfrac{rad}{s})\f$ Rotation rate of Jupiter in radians per second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    //const double jupiterm=w^2a^3/GM = 0.15481;                            /**< \f$ _{J} \ (dimensionless)\f$  of Jupiter. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
   
    const double jupiterHydrostaticFlattening = 0.06509;                    /**< \f$ fh_{J} \ (dimensionless)\f$ Hydrostatic flattening of Jupiter. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */


    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    const double jupiter = ;                               /**< \f$ _{J} \ ( )\f$  of Jupiter in. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */







		//Sun
        //https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun
	const double MassOfSun = 1.9891e30;										/**< \f$m_\odot\f$ (kg) Mass of Sun. */
	//const double SolarMass = MassOfSun;                                 	/**< \f$m_\odot\f$ (kg) Mass of Sun. */
	const double SunMass = MassOfSun;                                 		/**< \f$m_\odot\f$ (kg) Mass of Sun. */
	const double SunTempreture = 5772.0;									/**< \f$T_\odot\f$(K) Tempreture of Sun. 5778K was a value from 1955*/
	const double SunAbsVMagnitude = 4.862;									/**< Absolute V Magnitude (??) of Sun. */
	const double SunLuminocity = 3.8270e26;									/**< \f$L_\odot\f$(W) Luminocity of Sun. */
	const double SunAge = 4572.0;											/**< Age(Myr) of Sun. */
    const double SurfaceTempretureOfSun = 5772.0;							/**< \f$T_\odot\f$(K) Tempreture of Sun surface. */
		//Earth
	const double SemimajorAxisOfEarth = 149598261000;						/**< Semimajor Axis(m) Of Earth. */
	const double EccentricityOfEarth = 0.01671123;                     	 	/**< Eccentricity(dimensionless) of Earth. */
	const double BondAlbedoOfEarth = 0.306;									/**< Bond Albedo(dimensionless) of Earth. */
	const double GeometricAlbedoOfEarth = 0.367;							/**< Geometric Albedo(dimensionless) of Earth. */
	const double MassOfEarth = 5.97219e24;									/**< Mass(kg) Of Earth. \f$M_\oplus\f$ */
	const double RadiusOfEarth= 6371000;									/**< Radius(m) Of Earth. \f$R_\oplus\f$ */
	const double SiderealRotationPeriodOfEarth = 0.99726968* secondsInDay;	/**< Sidereal Rotation Period(s) Of Earth. */
	const double MassOfSunInEarthMass = MassOfSun/MassOfEarth;				/**< Mass(\f$M_\oplus\f$) Of Sun. */
	
								// m
	const double VolumeOfEarth = 4.0/3.0 * 3.14 * pow(RadiusOfEarth, 3);	/**< \f$V_\oplus\ (m^3)\f$ Volume of Earth. */
	const double DensityOfEarth =  MassOfEarth/VolumeOfEarth;				/**< \f$\rho_\oplus\ (\frac{kg}{m^3})\f$ Density of Earth. */
	const double EscapeVelocityOfEarth = 11186.0; 							/**< \f$v_e\ (\frac{m}{s})\f$ Escape velocity of Earth. */
	const double SurfaceTempretureOfEarth = 287.0;							/**< \f$T_{\oplus,Surface}\ (K)\f$ Surface tempreture of Earth. */
	 
	 
	const double RadiusOfSun =  6.955e8;									/**< \f$R_\odot\ (m)\f$ Radius of Sun. */

		//Mars
	


	const double EarthMass = 5.97219e24;									/**< Mass(kg) Of Earth. \f$M_\oplus\f$ */
	const double JupiterMass = 1.89813e27;									/**< Mass(kg) Of Jupiter. \f$M_J\f$ */
	const double LunarMass = 7.342e22;										/**< Mass(kg) Of Moon. \f$M_L\f$ */ //Is this right for symbol?


	const double sunGravConstInAuCubedperSolarMassDay = NISTConst::gravitationalConstant * MassOfSun * secondsInDay * secondsInDay / (AU*AU*AU); /**< \f$G_{Sun}\ (\frac{AU^3}{SolarMass\ day)\f$  Gravitational constant around sun per day. */

	/*
	const double SemimajorAxisOf =;
	const double EccentricityOf =;
	const double AlbedoOf =;
	const double MassOf =;
	const double RadiusOf=;

	
	*/
} //namespace EGXPhys


