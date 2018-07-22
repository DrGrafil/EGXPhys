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

///         @defgroup EGXPhys-Constants-Astrophysics-SolarSystem-Sun-Magnitude Magnitude
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
    EGXPHYS_CONSTANT zeroPointLuminosity = 3.0128e28;                           /**< \f$L_{0} \ (W)\f$ Zero point luminosity. It is a defined number used in bolometric magnitude stellar calculations. See the International Astronomical Union, https://www.iau.org/news/announcements/detail/ann15023/ resolution B2.*/
    
            //Bolometic Luminosity
    EGXPHYS_CONSTANT sunBolometricLuminosity = 3.0128e28;                       /**< \f$L_{Bol,\odot} \ (W)\f$ Sun bolometric luminosity. It is a defined number used in bolometric magnitude stellar calculations. See the International Astronomical Union, https://www.iau.org/news/announcements/detail/ann15023/ resolution B2.*/

   

    // See https://ssd.jpl.nasa.gov/horizons.cgi data
    //Physical Data

    //Sun

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Sun-Bulk
    /// @{
    EGXPHYS_CONSTANT sunPhotosphericRadius = 695700e3;                           /**< \f$ R_{\odot} \ (m)\f$ Photospheric of Sun in meters. Defined by IAU. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    EGXPHYS_CONSTANT sunNominalSolarRadius = sunPhotosphericRadius;              /**< \f$ R_{\odot} \ (m)\f$ Nominal solar radius of Sun in meters. Defined by IAU. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */


    EGXPHYS_CONSTANT sunStandardGravitationalParameter = ;                           /**< \f$ \mu_{\odot} \ ()\f$ of Sun in. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */

    EGXPHYS_CONSTANT sun = ;                           /**< \f$ _{\odot} \ ()\f$ of Sun in. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Sun-Magnitude
    /// @{
    EGXPHYS_CONSTANT sunApparentVMagnitude = -26.71;                            /**< \f$ m_{V,\odot} \ (mag)\f$ Apparent visual (V) magnitude of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    EGXPHYS_CONSTANT sunAbsoluteVMagnitude = 4.862;                             /**< \f$ M_{V,\odot} \ (mag)\f$ Absolute visual (V) magnitude of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    
    EGXPHYS_CONSTANT sunAbsoluteBMagnitude = 5.515;                             /**< \f$ M_{B,\odot} \ (mag)\f$  Absolute blue (B) magnitude of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    
    EGXPHYS_CONSTANT sunVBandBolometricCorrection = -0.107;                     /**< \f$ BC_{V,\odot} \ (mag)\f$ V-band bolometric correction of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    
    EGXPHYS_CONSTANT sunApparentBolometricMagnitude = -26.832;                  /**< \f$ m_{bol\odot} \ (mag)\f$ Apparent bolometric (all wavelengths) magnitude of Sun. Defined by IAU. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    EGXPHYS_CONSTANT sunAbsoluteBolometricMagnitude = 4.74;                     /**< \f$ M_{bol,\odot} \ (mag)\f$ Absolute bolometric (all wavelengths) magnitude of Sun. Defined by IAU. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
  
    EGXPHYS_CONSTANT sunBVColor = 0.653;                                        /**< \f$ (B-V)_{\odot} \ (mag)\f$ B-V color (Johnson) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    EGXPHYS_CONSTANT sunUBColor = 0.158;                                        /**< \f$ (U-B)_{\odot} \ (mag)\f$ U-B color (Johnson) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    
    EGXPHYS_CONSTANT sunVRcColor = 0.356;                                       /**< \f$ (V-R_C)_{\odot} \ (mag)\f$ V-Rc color (Johnson,Cousins) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    EGXPHYS_CONSTANT sunVIcColor = 0.701;                                       /**< \f$ (V-I_C)_{\odot} \ (mag)\f$ V-Ic color (Johnson,Cousins) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    
    EGXPHYS_CONSTANT sunVJColor = 1.198;                                        /**< \f$ (V-J)_{\odot} \ (mag)\f$ V-J color (Johnson,2MASS) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    EGXPHYS_CONSTANT sunVHColor = 1.484;                                        /**< \f$ (V-H)_{\odot} \ (mag)\f$ V-H color (Johnson,2MASS) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    EGXPHYS_CONSTANT sunVKsColor = 1.560;                                       /**< \f$ (V-K_S)_{\odot} \ (mag)\f$ V-Ks color (Johnson,2MASS) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    
    EGXPHYS_CONSTANT sunJHColor = 0.286;                                        /**< \f$ (J-H)_{\odot} \ (mag)\f$ J-H color (2MASS) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    EGXPHYS_CONSTANT sunJKsColor = 0.362;                                       /**< \f$ (J-K_S)_{\odot} \ (mag)\f$ J-Ks color (2MASS) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    EGXPHYS_CONSTANT sunHKsColor = 0.076;                                       /**< \f$ (H-K_S)_{\odot} \ (mag)\f$ H-Ks color (2MASS) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    
    EGXPHYS_CONSTANT sunVW1Color = 1.608;                                       /**< \f$ (V-W1)_{\odot} \ (mag)\f$ V-W1 color (Johnson,WISE) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    EGXPHYS_CONSTANT sunVW2Color = 1.563;                                       /**< \f$ (V-W2)_{\odot} \ (mag)\f$ V-W2 color (Johnson,WISE) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    EGXPHYS_CONSTANT sunVW3Color = 1.552;                                       /**< \f$ (V-W3)_{\odot} \ (mag)\f$ V-W3 color (Johnson,WISE) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    EGXPHYS_CONSTANT sunVW4Color = 1.604;                                       /**< \f$ (V-W4)_{\odot} \ (mag)\f$ V-W4 color (Johnson,WISE) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    
    EGXPHYS_CONSTANT sunbyColor = 0.4105;                                       /**< \f$ (b-y)_{\odot} \ (mag)\f$ b-y color (Stromgren) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    EGXPHYS_CONSTANT sunm1Color = 0.2122;                                       /**< \f$ m1_{\odot} \ (mag)\f$ m1 color (Stromgren) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    EGXPHYS_CONSTANT sunc1Color = 0.3319;                                       /**< \f$ c1_{\odot} \ (mag)\f$ c1 color (Stromgren) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    EGXPHYS_CONSTANT sunBetaColor = 2.5915;                                     /**< \f$ Beta_{\odot} \ (mag)\f$ Beta color (Stromgren) of Sun. See https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun */
    /// @}



    /**************************
    *       Planets           *
    ***************************/

    
    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Mercury-Bulk
    /// @{
    EGXPHYS_CONSTANT mercuryMass = 0.33011e24;                                  /**< \f$M_{Me} \ (kg)\f$ Mass of Mercury in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryDensity = 5427;                                     /**< \f$\rho_{Me} \ (\dfrac{kg}{m^3})\f$ Density of Mercury in kg per meter cubed. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    
    EGXPHYS_CONSTANT mercuryRadiusEquatorial = 2439.7e3;                        /**< \f$R_{Me,Equat} \ (m)\f$ Equatorial radius of Mercury in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryRadiusPolar = 2439.7e3;                             /**< \f$R_{Me,Polar} \ (m)\f$ Polar radius of Mercury in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryVolumetricMeanRadius = 2439.7e3;                    /**< \f$M_{Me} \ (kg)\f$ Volumetric mean radius of Mercury in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */

    EGXPHYS_CONSTANT mercuryFlattening = 0.0;                                   /**< \f$f_{Me} \ (dimensionless)\f$ Flattening of Mercury. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */

    EGXPHYS_CONSTANT mercuryStandardGravitationalParameter = 0.022032e15;       /**< \f$ \mu_{Me} \ (\dfrac{m^3}{s^2})\f$ Standard gravitational parameter of Mercury in meter cubed per second squared. It is the Gravitational constant times the mass of the planet. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercurySurfaceGravityEquator = 3.701;                      /**< \f$ G_{Me,Equat.} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Mercury in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercurySurfaceGravityPolar = 3.701;                        /**< \f$ G_{Me,Polar} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Mercury in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */

    EGXPHYS_CONSTANT mercuryGeometricAlbedo = 0.142;                            /**< \f$ p_{Me} \ (dimensionless)\f$ Geometric albedo of Mercury. The ratio of the body's brightness at a phase angle of zero to the brightness of a perfectly diffusing disk with the same position and apparent size. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryBondAlbedo = 0.068;                                 /**< \f$ A_{Me} \ (dimensionless)\f$ Bond albedo of Mercury. The fraction of incident solar radiation reflected back into space without absorption. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryVBandMagnitude = -0.69;                             /**< \f$ V(1,0)_{Me} \ (dimensionless)\f$ Visual magnitude of Mercury if it were one AU from the Earth at a phase angle of zero . See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */ 
    EGXPHYS_CONSTANT mercurySolarIrradiance = 9082.7;                           /**< \f$ Q_{Me} \ (\dfrac{W}{m^2})\f$ Solar irradiance of Mercury in watts per meter squared. The solar energy landing on mercury per unit area. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    
    EGXPHYS_CONSTANT mercuryMomentOfInertia = 0.35;                             /**< \f$ I_{Me} \ (dimensionless)\f$ The moment of inertia of Mercury. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryJ2 = 50.3;                                          /**< \f$ J_{2,Me} \ (dimensionless)\f$ J_2 perterbation of Mercury. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Mercury-Orbit
    /// @{
    EGXPHYS_CONSTANT mercurySemimajorAxis = 57.91e9;                            /**< \f$ a_{Me} \ (m)\f$ Semi-major axis of Mercury in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercurySiderealOrbitPeriod = 87.969 * secondsInDay;        /**< \f$ T_{Me,sidereal} \ (s)\f$ Sidereal orbit period of Mercury in seconds. The time it takes the body to make one revolution about the Sun relative to the fixed stars. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryTropicalOrbitPeriod = 87.968 * secondsInDay;        /**< \f$ T_{Me,trop} \ (s)\f$ Tropical orbit period of Mercury in seconds. The average time for the body to make one revolution about the Sun from one point in its seasonal orbit to the equivalent point. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercurySynodicOrbitPeriod = 115.88 * secondsInDay;         /**< \f$ T_{Me,syn} \ (s)\f$ Synodic period of Mercury in seconds. The time between similar configurations in the orbit of the planet and Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryPerihelion = 46.00e9;                               /**< \f$ r_{Me,peri} \ (m)\f$ Perihelion of Mercury in meters. Distance when it is closets to the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryAphelion = 69.82e9;                                 /**< \f$ r_{Me,aphe} \ (m)\f$ Aphelion of Mercury in meters. Distance when it is furthest from the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryOrbitInclination = 7.00;                            /**< \f$ \theta_{Me,orbit} \ (deg)\f$ Orbit inclination of Mercury in degrees. The inclination of the orbit to the ecliptic. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryOrbitEccentricity = 0.2056;                         /**< \f$ e_{Me} \ (dimensionless)\f$ Orbit eccentricity of Mercury. A measure of the circularity of the orbit. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */

    EGXPHYS_CONSTANT mercurySiderealRotationPeriod = 1407.6 * secondsInHour;    /**< \f$ P_{Me} \ (s)\f$ Sidereal rotation period of Mercury in seconds. Total time is 9h 55m 29.685s. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    // Weirdness with the rates reported EGXPHYS_CONSTANT mercuryRotationRate = 0.124001e5;                          /**< \f$ \omega_{Me} \ (\dfrac{rad}{s})\f$ Rotation rate of Mercury in radians per second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryDayLength = 4222.6 * secondsInHour;                 /**< \f$ Day_{Me} \ (s)\f$ Length of a day in Mercury in second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryObliquityToOrbit = 0.034;                           /**< \f$ \theta_{Me,obliq} \ (deg)\f$ Obliquity to orbit of Mercury in degrees. The angle between Mercury's equator and the it's orbital plane, with north defined by the right-hand rule. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryInclinationOfEquator = 0.034;                       /**< \f$ \theta_{Me,incli} \ (deg)\f$ Inclination of equator of Mercury in degrees. The angle between Mercury's equator and orbital plane with north defined as pole axis above (north of) the plane of the solar system. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Venus-Bulk
    /// @{
    EGXPHYS_CONSTANT venusMass = 4.8675e24;                                     /**< \f$M_{V} \ (kg)\f$ Mass of Venus in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusDensity = 5243.0;                                     /**< \f$\rho_{V} \ (\dfrac{kg}{m^3})\f$ Density of Venus in kg per meter cubed. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */

    EGXPHYS_CONSTANT venusRadiusEquatorial = 6051.8e3;                          /**< \f$R_{V,Equat} \ (m)\f$ Equatorial radius of Venus in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusRadiusPolar = 6051.8e3;                               /**< \f$R_{V,Polar} \ (m)\f$ Polar radius of Venus in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusVolumetricMeanRadius = 6051.8e3;                      /**< \f$M_{V} \ (kg)\f$ Volumetric mean radius of Venus in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */

    EGXPHYS_CONSTANT venusFlattening = 0.0;                                     /**< \f$f_{V} \ (dimensionless)\f$ Flattening of Venus. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */

    EGXPHYS_CONSTANT venusStandardGravitationalParameter = 0.32486e15;          /**< \f$ \mu_{V} \ (\dfrac{m^3}{s^2})\f$ Standard gravitational parameter of Venus in meter cubed per second squared. It is the Gravitational constant times the mass of the planet. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusSurfaceGravityEquator = 8.870;                        /**< \f$ G_{V,Equat.} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Venus in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusSurfaceGravityPolar = 8.870;                          /**< \f$ G_{V,Polar} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Venus in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */

    EGXPHYS_CONSTANT venusGeometricAlbedo = 0.689;                              /**< \f$ p_{V} \ (dimensionless)\f$ Geometric albedo of Venus. The ratio of the body's brightness at a phase angle of zero to the brightness of a perfectly diffusing disk with the same position and apparent size. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusBondAlbedo = 0.77;                                    /**< \f$ A_{V} \ (dimensionless)\f$ Bond albedo of Venus. The fraction of incident solar radiation reflected back into space without absorption. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusVBandMagnitude = -4.38;                               /**< \f$ V(1,0)_{V} \ (dimensionless)\f$ Visual magnitude of Venus if it were one AU from the Earth at a phase angle of zero . See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusSolarIrradiance = 2601.3;                             /**< \f$ Q_{V} \ (\dfrac{W}{m^2})\f$ Solar irradiance of Venus in watts per meter squared. The solar energy landing on venus per unit area. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    
    EGXPHYS_CONSTANT venusMomentOfInertia = 0.33;                               /**< \f$ I_{V} \ (dimensionless)\f$ The moment of inertia of Venus. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusJ2 = 4.458e-6;                                        /**< \f$ J_{2,V} \ (dimensionless)\f$ J_2 perterbation of Venus. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Venus-Orbit
    /// @{
    EGXPHYS_CONSTANT venusSemimajorAxis = 108.21e9;                             /**< \f$ a_{V} \ (m)\f$ Semi-major axis of Venus in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusSiderealOrbitPeriod = 224.701 * secondsInDay;         /**< \f$ T_{V,sidereal} \ (s)\f$ Sidereal orbit period of Venus in seconds. The time it takes the body to make one revolution about the Sun relative to the fixed stars. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusTropicalOrbitPeriod = 224.695 * secondsInDay;         /**< \f$ T_{V,trop} \ (s)\f$ Tropical orbit period of Venus in seconds. The average time for the body to make one revolution about the Sun from one point in its seasonal orbit to the equivalent point. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusSynodicOrbitPeriod = 583.92 * secondsInDay;           /**< \f$ T_{V,syn} \ (s)\f$ Synodic period of Venus in seconds. The time between similar configurations in the orbit of the planet and Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusPerihelion = 107.48e9;                                /**< \f$ r_{V,peri} \ (m)\f$ Perihelion of Venus in meters. Distance when it is closets to the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusAphelion = 108.94e9;                                  /**< \f$ r_{V,aphe} \ (m)\f$ Aphelion of Venus in meters. Distance when it is furthest from the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusOrbitInclination = 3.39;                              /**< \f$ \theta_{V,orbit} \ (deg)\f$ Orbit inclination of Venus in degrees. The inclination of the orbit to the ecliptic. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusOrbitEccentricity = 0.0067;                           /**< \f$ e_{V} \ (dimensionless)\f$ Orbit eccentricity of Venus. A measure of the circularity of the orbit. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */

    EGXPHYS_CONSTANT venusSiderealRotationPeriod = -5832.6 * secondsInHour;     /**< \f$ P_{V} \ (s)\f$ Sidereal rotation period of Venus in seconds. Total time is 9h 55m 29.685s. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    // Weirdness with the rates reported EGXPHYS_CONSTANT venusRotationRate = ;                          /**< \f$ \omega_{V} \ (\dfrac{rad}{s})\f$ Rotation rate of Venus in radians per second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusDayLength = 2802.0 * secondsInHour;                   /**< \f$ Day_{V} \ (s)\f$ Length of a day in Venus in second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusObliquityToOrbit = 177.36;                            /**< \f$ \theta_{V,obliq} \ (deg)\f$ Obliquity to orbit of Venus in degrees. The angle between Venus's equator and the it's orbital plane, with north defined by the right-hand rule. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusInclinationOfEquator = 2.64;                          /**< \f$ \theta_{V,incli} \ (deg)\f$ Inclination of equator of Venus in degrees. The angle between Venus's equator and orbital plane with north defined as pole axis above (north of) the plane of the solar system. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Earth-Bulk
    /// @{
    EGXPHYS_CONSTANT earthMass = 5.9723e24;                                     /**< \f$M_{\oplus} \ (kg)\f$ Mass of Earth in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthDensity = 5514.0;                                     /**< \f$\rho_{\oplus} \ (\dfrac{kg}{m^3})\f$ Density of Earth in kg per meter cubed. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */

    EGXPHYS_CONSTANT earthRadiusEquatorial = 6378.137e3;                        /**< \f$R_{\oplus,Equat} \ (m)\f$ Equatorial radius of Earth in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthRadiusPolar = 6356.752e3;                             /**< \f$R_{\oplus,Polar} \ (m)\f$ Polar radius of Earth in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthVolumetricMeanRadius = 6371.000e3;                    /**< \f$M_{\oplus} \ (kg)\f$ Volumetric mean radius of Earth in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
   
    EGXPHYS_CONSTANT earthFlattening = 0.003353;                                /**< \f$f_{\oplus} \ (dimensionless)\f$ Flattening of Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */

    EGXPHYS_CONSTANT earthStandardGravitationalParameter = 0.39860e15;          /**< \f$ \mu_{\oplus} \ (\dfrac{m^3}{s^2})\f$ Standard gravitational parameter of Earth in meter cubed per second squared. It is the Gravitational constant times the mass of the planet. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthSurfaceGravityEquator = 9.7803267715;                 /**< \f$ G_{\oplus,Equat.} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Earth in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthSurfaceGravityPolar = 9.8321863685;                   /**< \f$ G_{\oplus,Polar} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Earth in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */

    EGXPHYS_CONSTANT earthGeometricAlbedo = 0.434;                              /**< \f$ p_{\oplus} \ (dimensionless)\f$ Geometric albedo of Earth. The ratio of the body's brightness at a phase angle of zero to the brightness of a perfectly diffusing disk with the same position and apparent size. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthBondAlbedo = 0.306;                                   /**< \f$ A_{\oplus} \ (dimensionless)\f$ Bond albedo of Earth. The fraction of incident solar radiation reflected back into space without absorption. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthVBandMagnitude = -3.99;                               /**< \f$ V(1,0)_{\oplus} \ (dimensionless)\f$ Visual magnitude of Earth if it were one AU from the Earth at a phase angle of zero . See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthSolarIrradiance = 1361.0;                             /**< \f$ Q_{\oplus} \ (\dfrac{W}{m^2})\f$ Solar irradiance of Earth in watts per meter squared. The solar energy landing on earth per unit area. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */

    EGXPHYS_CONSTANT earthMomentOfInertia = 0.3308;                             /**< \f$ I_{\oplus} \ (dimensionless)\f$ The moment of inertia of Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthJ2 = 1082.63e-6;                                      /**< \f$ J_{2,\oplus} \ (dimensionless)\f$ J_2 perterbation of Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Earth-Orbit
    /// @{
    EGXPHYS_CONSTANT earthSemimajorAxis = 149.60e9;                             /**< \f$ a_{\oplus} \ (m)\f$ Semi-major axis of Earth in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthSiderealOrbitPeriod = 365.256 * secondsInDay;         /**< \f$ T_{\oplus,sidereal} \ (s)\f$ Sidereal orbit period of Earth in seconds. The time it takes the body to make one revolution about the Sun relative to the fixed stars. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthTropicalOrbitPeriod = 365.242 * secondsInDay;         /**< \f$ T_{\oplus,trop} \ (s)\f$ Tropical orbit period of Earth in seconds. The average time for the body to make one revolution about the Sun from one point in its seasonal orbit to the equivalent point. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    // none for earth EGXPHYS_CONSTANT earthSynodicOrbitPeriod = * secondsInDay;         /**< \f$ T_{\oplus,syn} \ (s)\f$ Synodic period of Earth in seconds. The time between similar configurations in the orbit of the planet and Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthPerihelion = 147.09e9;                                /**< \f$ r_{\oplus,peri} \ (m)\f$ Perihelion of Earth in meters. Distance when it is closets to the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthAphelion = 152.10e9;                                  /**< \f$ r_{\oplus,aphe} \ (m)\f$ Aphelion of Earth in meters. Distance when it is furthest from the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthOrbitInclination = 0.0;                               /**< \f$ \theta_{\oplus,orbit} \ (deg)\f$ Orbit inclination of Earth in degrees. The inclination of the orbit to the ecliptic. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthOrbitEccentricity = 0.0167;                           /**< \f$ e_{\oplus} \ (dimensionless)\f$ Orbit eccentricity of Earth. A measure of the circularity of the orbit. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */

    EGXPHYS_CONSTANT earthSiderealRotationPeriod = 23.9345 * secondsInHour;     /**< \f$ P_{\oplus} \ (s)\f$ Sidereal rotation period of Earth in seconds. Total time is 9h 55m 29.685s. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    // Weirdness with the rates reported EGXPHYS_CONSTANT earthRotationRate = ;                          /**< \f$ \omega_{\oplus} \ (\dfrac{rad}{s})\f$ Rotation rate of Earth in radians per second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthDayLength = 24.0000 * secondsInHour;                  /**< \f$ Day_{\oplus} \ (s)\f$ Length of a day in Earth in second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthObliquityToOrbit = 23.44;                             /**< \f$ \theta_{\oplus,obliq} \ (deg)\f$ Obliquity to orbit of Earth in degrees. The angle between Earth's equator and the it's orbital plane, with north defined by the right-hand rule. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthInclinationOfEquator = 23.44;                         /**< \f$ \theta_{\oplus,incli} \ (deg)\f$ Inclination of equator of Earth in degrees. The angle between Earth's equator and orbital plane with north defined as pole axis above (north of) the plane of the solar system. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    /// @}


    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Moon-Bulk
    /// @{
    EGXPHYS_CONSTANT moonMass = 0.07346e24;                                     /**< \f$M_{\circ} \ (kg)\f$ Mass of Moon in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    EGXPHYS_CONSTANT moonDensity = 3344.0;                                      /**< \f$\rho_{\circ} \ (\dfrac{kg}{m^3})\f$ Density of Moon in kg per meter cubed. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */

    EGXPHYS_CONSTANT moonRadiusEquatorial = 1738.1e3;                           /**< \f$R_{\circ,Equat} \ (m)\f$ Equatorial radius of Moon in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    EGXPHYS_CONSTANT moonRadiusPolar = 1736.0e3;                                /**< \f$R_{\circ,Polar} \ (m)\f$ Polar radius of Moon in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    EGXPHYS_CONSTANT moonVolumetricMeanRadius = 1737.4e3;                       /**< \f$M_{\circ} \ (kg)\f$ Volumetric mean radius of Moon in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */

    EGXPHYS_CONSTANT moonFlattening = 0.0012;                                   /**< \f$f_{\circ} \ (dimensionless)\f$ Flattening of Moon. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */

    EGXPHYS_CONSTANT moonStandardGravitationalParameter = 0.00490e15;           /**< \f$ \mu_{\circ} \ (\dfrac{m^3}{s^2})\f$ Standard gravitational parameter of Moon in meter cubed per second squared. It is the Gravitational constant times the mass of the planet. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    EGXPHYS_CONSTANT moonSurfaceGravityEquator = 1.62;                          /**< \f$ G_{\circ,Equat.} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Moon in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    EGXPHYS_CONSTANT moonSurfaceGravityPolar = 1.62;                            /**< \f$ G_{\circ,Polar} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Moon in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */

    EGXPHYS_CONSTANT moonGeometricAlbedo = 0.12;                                /**< \f$ p_{\circ} \ (dimensionless)\f$ Geometric albedo of Moon. The ratio of the body's brightness at a phase angle of zero to the brightness of a perfectly diffusing disk with the same position and apparent size. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    EGXPHYS_CONSTANT moonBondAlbedo = 0.11;                                     /**< \f$ A_{\circ} \ (dimensionless)\f$ Bond albedo of Moon. The fraction of incident solar radiation reflected back into space without absorption. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    EGXPHYS_CONSTANT moonVBandMagnitude = -0.08;                                /**< \f$ V(1,0)_{\circ} \ (dimensionless)\f$ Visual magnitude of Moon if it were one AU from the Earth at a phase angle of zero . See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    EGXPHYS_CONSTANT moonSolarIrradiance = 1361.0;                              /**< \f$ Q_{\circ} \ (\dfrac{W}{m^2})\f$ Solar irradiance of Moon in watts per meter squared. The solar energy landing on moon per unit area. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */

    EGXPHYS_CONSTANT moonMomentOfInertia = 0.394;                               /**< \f$ I_{\circ} \ (dimensionless)\f$ The moment of inertia of Moon. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    EGXPHYS_CONSTANT moonJ2 = 202.7e-6;                                         /**< \f$ J_{2,\circ} \ (dimensionless)\f$ J_2 perterbation of Moon. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Moon-Orbit
    /// @{
    EGXPHYS_CONSTANT moonSemimajorAxis = 0.3844e6;                              /**< \f$ a_{\circ} \ (m)\f$ Semi-major axis of Moon in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    EGXPHYS_CONSTANT moonSynodicOrbitPeriod = 29.53 * secondsInDay;             /**< \f$ T_{\circ,syn} \ (s)\f$ Synodic period of Moon in seconds. The time between similar configurations in the orbit of the planet and Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    EGXPHYS_CONSTANT moonPerigee = 0.3633e6;                                    /**< \f$ r_{\circ,peri} \ (m)\f$ Perigee of Moon in meters. Distance when it is closets to the Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    EGXPHYS_CONSTANT moonApogee = 0.4055e6;                                     /**< \f$ r_{\circ,apog} \ (m)\f$ Apogee of Moon in meters. Distance when it is furthest from the Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    EGXPHYS_CONSTANT moonOrbitInclination = 5.145;                              /**< \f$ \theta_{\circ,orbit} \ (deg)\f$ Orbit inclination of Moon in degrees. The inclination of the orbit to the ecliptic. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    EGXPHYS_CONSTANT moonOrbitEccentricity = 0.0549;                            /**< \f$ e_{\circ} \ (dimensionless)\f$ Orbit eccentricity of Moon. A measure of the circularity of the orbit. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */

    EGXPHYS_CONSTANT moonSiderealRotationPeriod = 655.728 * secondsInHour;      /**< \f$ P_{\circ} \ (s)\f$ Sidereal rotation period of Moon in seconds. Total time is 9h 55m 29.685s. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    // Weirdness with the rates reported EGXPHYS_CONSTANT moonRotationRate = ;                          /**< \f$ \omega_{\circ} \ (\dfrac{rad}{s})\f$ Rotation rate of Moon in radians per second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    EGXPHYS_CONSTANT moonObliquityToOrbit = 6.68;                               /**< \f$ \theta_{\circ,obliq} \ (deg)\f$ Obliquity to orbit of Moon in degrees. The angle between Moon's equator and the it's orbital plane, with north defined by the right-hand rule. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/moonfact.html */
    /// @}


    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Mars-Bulk
    /// @{
    EGXPHYS_CONSTANT marsMass = 0.64171e24;                                     /**< \f$M_{Ma} \ (kg)\f$ Mass of Mars in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsDensity = 3933.0;                                      /**< \f$\rho_{Ma} \ (\dfrac{kg}{m^3})\f$ Density of Mars in kg per meter cubed. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */

    EGXPHYS_CONSTANT marsRadiusEquatorial = 3396.2e3;                           /**< \f$R_{Ma,Equat} \ (m)\f$ Equatorial radius of Mars in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsRadiusPolar = 3376.2e3;                                /**< \f$R_{Ma,Polar} \ (m)\f$ Polar radius of Mars in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsVolumetricMeanRadius = 3389.5e3;                       /**< \f$M_{Ma} \ (kg)\f$ Volumetric mean radius of Mars in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
   
    EGXPHYS_CONSTANT marsFlattening = 0.00589;                                  /**< \f$f_{Ma} \ (dimensionless)\f$ Flattening of Mars. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */

    EGXPHYS_CONSTANT marsStandardGravitationalParameter = 0.042828e15;          /**< \f$ \mu_{Ma} \ (\dfrac{m^3}{s^2})\f$ Standard gravitational parameter of Mars in meter cubed per second squared. It is the Gravitational constant times the mass of the planet. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsSurfaceGravityEquator = 3.71;                          /**< \f$ G_{Ma,Equat.} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Mars in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsSurfaceGravityPolar = 3.758;                           /**< \f$ G_{Ma,Polar} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Mars in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */

    EGXPHYS_CONSTANT marsGeometricAlbedo = 0.170;                               /**< \f$ p_{Ma} \ (dimensionless)\f$ Geometric albedo of Mars. The ratio of the body's brightness at a phase angle of zero to the brightness of a perfectly diffusing disk with the same position and apparent size. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsBondAlbedo = 0.250;                                    /**< \f$ A_{Ma} \ (dimensionless)\f$ Bond albedo of Mars. The fraction of incident solar radiation reflected back into space without absorption. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsVBandMagnitude = -1.60;                                /**< \f$ V(1,0)_{Ma} \ (dimensionless)\f$ Visual magnitude of Mars if it were one AU from the Earth at a phase angle of zero. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsSolarIrradiance = 586.2;                               /**< \f$ Q_{Ma} \ (\dfrac{W}{m^2})\f$ Solar irradiance of Mars in watts per meter squared. The solar energy landing on mars per unit area. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */

    EGXPHYS_CONSTANT marsMomentOfInertia = 0.366;                               /**< \f$ I_{Ma} \ (dimensionless)\f$ The moment of inertia of Mars. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsJ2 = 1960.45e-6;                                       /**< \f$ J_{2,Ma} \ (dimensionless)\f$ J_2 perterbation of Mars. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Mars-Orbit
    /// @{
    EGXPHYS_CONSTANT marsSemimajorAxis = 227.92e9;                              /**< \f$ a_{Ma} \ (m)\f$ Semi-major axis of Mars in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsSiderealOrbitPeriod = 686.980*secondsInDay;            /**< \f$ T_{Ma,sidereal} \ (s)\f$ Sidereal orbit period of Mars in seconds. The time it takes the body to make one revolution about the Sun relative to the fixed stars. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsTropicalOrbitPeriod = 686.973*secondsInDay;            /**< \f$ T_{Ma,trop} \ (s)\f$ Tropical orbit period of Mars in seconds. The average time for the body to make one revolution about the Sun from one point in its seasonal orbit to the equivalent point. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsSynodicOrbitPeriod = 779.94*secondsInDay;              /**< \f$ T_{Ma,syn} \ (s)\f$ Synodic period of Mars in seconds. The time between similar configurations in the orbit of the planet and Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsPerihelion = 206.62e9;                                 /**< \f$ r_{Ma,peri} \ (m)\f$ Perihelion of Mars in meters. Distance when it is closets to the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsAphelion = 249.23e9;                                   /**< \f$ r_{Ma,aphe} \ (m)\f$ Aphelion of Mars in meters. Distance when it is furthest from the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsOrbitInclination = 1.850;                              /**< \f$ \theta_{Ma,orbit} \ (deg)\f$ Orbit inclination of Mars in degrees. The inclination of the orbit to the ecliptic. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsOrbitEccentricity = 0.0935;                            /**< \f$ e_{Ma} \ (dimensionless)\f$ Orbit eccentricity of Mars. A measure of the circularity of the orbit. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */

    EGXPHYS_CONSTANT marsSiderealRotationPeriod = 24.6229*secondsInHour;        /**< \f$ P_{Ma} \ (s)\f$ Sidereal rotation period of Mars in seconds. Total time is 9h 55m 29.685s. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    // Weirdness with the rates reported EGXPHYS_CONSTANT marsRotationRate = ;                          /**< \f$ \omega_{Ma} \ (\dfrac{rad}{s})\f$ Rotation rate of Mars in radians per second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsDayLength = 24.6597*secondsInHour;                     /**< \f$ Day_{Ma} \ (s)\f$ Length of a day in Mars in second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsObliquityToOrbit = 25.19;                              /**< \f$ \theta_{Ma,obliq} \ (deg)\f$ Obliquity to orbit of Mars in degrees. The angle between Mars's equator and the it's orbital plane, with north defined by the right-hand rule. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    EGXPHYS_CONSTANT marsInclinationOfEquator = 25.19;                          /**< \f$ \theta_{Ma,incli} \ (deg)\f$ Inclination of equator of Mars in degrees. The angle between Mars's equator and orbital plane with north defined as pole axis above (north of) the plane of the solar system. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/marsfact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Jupiter-Bulk
    /// @{
    EGXPHYS_CONSTANT jupiterMass = 1898.13e24;                                  /**< \f$M_{J} \ (kg)\f$ Mass of Jupiter in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterDensity = 1326.0;                                   /**< \f$\rho_{J} \ (\dfrac{kg}{m^3})\f$ Density of Jupiter in kg per meter cubed. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    EGXPHYS_CONSTANT jupiterRadiusEquatorial = 71492000;                        /**< \f$R_{J,Equat} \ (m)\f$ Equatorial radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterRadiusPolar = 66854000;                             /**< \f$R_{J,Polar} \ (m)\f$ Polar radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterVolumetricMeanRadius = 69911000;                    /**< \f$M_{J} \ (kg)\f$ Volumetric mean radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    EGXPHYS_CONSTANT jupiterFlattening = 0.06487;                               /**< \f$f_{J} \ (dimensionless)\f$ Flattening of Jupiter. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    EGXPHYS_CONSTANT jupiterStandardGravitationalParameter = 1.26686511e17;     /**< \f$ \mu_{J} \ (\dfrac{m^3}{s^2})\f$ Standard gravitational parameter of Jupiter in meter cubed per second squared. It is the Gravitational constant times the mass of the planet. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterSurfaceGravityEquator = 24.79;                      /**< \f$ G_{J,Equat.} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Jupiter in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterSurfaceGravityPolar = 28.34;                        /**< \f$ G_{J,Polar} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Jupiter in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    EGXPHYS_CONSTANT jupiterGeometricAlbedo = 0.538;                            /**< \f$ p_{J} \ (dimensionless)\f$ Geometric albedo of Jupiter. The ratio of the body's brightness at a phase angle of zero to the brightness of a perfectly diffusing disk with the same position and apparent size. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterBondAlbedo = 0.343;                                 /**< \f$ A_{J} \ (dimensionless)\f$ Bond albedo of Jupiter. The fraction of incident solar radiation reflected back into space without absorption. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterVBandMagnitude = -9.40;                             /**< \f$ V(1,0)_{J} \ (dimensionless)\f$ Visual magnitude of Jupiter if it were one AU from the Earth at a phase angle of zero . See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterSolarIrradiance = 50.26;                            /**< \f$ Q_{J} \ (\dfrac{W}{m^2})\f$ Solar irradiance of Jupiter in watts per meter squared. The solar energy landing on jupiter per unit area. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    
    EGXPHYS_CONSTANT jupiterMomentOfInertia = 0.254;                            /**< \f$ I_{J} \ (dimensionless)\f$ The moment of inertia of Jupiter. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterJ2 = 3343.43e-6;                                    /**< \f$ J_{2,J} \ (dimensionless)\f$ J_2 perterbation of Jupiter. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Jupiter-Orbit
    /// @{
    EGXPHYS_CONSTANT jupiterSemimajorAxis = 778.57e9;                           /**< \f$ a_{J} \ (m)\f$ Semi-major axis of Mercury in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterSiderealOrbitPeriod = 4332.589 * secondsInDay;      /**< \f$ T_{J,sidereal} \ (s)\f$ Sidereal orbit period of Mercury in seconds. The time it takes the body to make one revolution about the Sun relative to the fixed stars. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterTropicalOrbitPeriod = 4330.595 * secondsInDay;      /**< \f$ T_{J,trop} \ (s)\f$ Tropical orbit period of Mercury in seconds. The average time for the body to make one revolution about the Sun from one point in its seasonal orbit to the equivalent point. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterSynodicOrbitPeriod = 398.88 * secondsInDay;         /**< \f$ T_{J,syn} \ (s)\f$ Synodic period of Mercury in seconds. The time between similar configurations in the orbit of the planet and Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterPerihelion = 740.52e9;                              /**< \f$ r_{J,peri} \ (m)\f$ Perihelion of Mercury in meters. Distance when it is closets to the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterAphelion = 816.62e9;                                /**< \f$ r_{J,aphe} \ (m)\f$ Aphelion of Mercury in meters. Distance when it is furthest from the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterOrbitInclination = 1.304;                           /**< \f$ \theta_{J,orbit} \ (deg)\f$ Orbit inclination of Mercury in degrees. The inclination of the orbit to the ecliptic. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterOrbitEccentricity = 0.0489;                         /**< \f$ e_{J} \ (dimensionless)\f$ Orbit eccentricity of Mercury. A measure of the circularity of the orbit. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    EGXPHYS_CONSTANT jupiterSiderealRotationPeriod = 35729.685;                 /**< \f$ P_{J} \ (s)\f$ Sidereal rotation period of Mercury in seconds. Total time is 9h 55m 29.685s. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    // Weirdness with the rates reported EGXPHYS_CONSTANT jupiterRotationRate = 1.63785e-4;                          /**< \f$ \omega_{J} \ (\dfrac{rad}{s})\f$ Rotation rate of Mercury in radians per second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterDayLength = 9.9259 * secondsInHour;                 /**< \f$ Day_{J} \ (s)\f$ Length of a day in Mercury in second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterObliquityToOrbit = 3.13;                            /**< \f$ \theta_{J,obliq} \ (deg)\f$ Obliquity to orbit of Mercury in degrees. The angle between Mercury's equator and the it's orbital plane, with north defined by the right-hand rule. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterInclinationOfEquator = 3.13;                        /**< \f$ \theta_{J,incli} \ (deg)\f$ Inclination of equator of Mercury in degrees. The angle between Mercury's equator and orbital plane with north defined as pole axis above (north of) the plane of the solar system. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Saturn-Bulk
    /// @{
    EGXPHYS_CONSTANT saturnMass = 568.34e24;                                    /**< \f$M_{S} \ (kg)\f$ Mass of Saturn in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnDensity = 687.0;                                     /**< \f$\rho_{S} \ (\dfrac{kg}{m^3})\f$ Density of Saturn in kg per meter cubed. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */

    EGXPHYS_CONSTANT saturnRadiusEquatorial = 60268e3;                          /**< \f$R_{S,Equat} \ (m)\f$ Equatorial radius of Saturn in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnRadiusPolar = 54364e3;                               /**< \f$R_{S,Polar} \ (m)\f$ Polar radius of Saturn in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnVolumetricMeanRadius = 58232e3;                      /**< \f$M_{S} \ (kg)\f$ Volumetric mean radius of Saturn in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
   
    EGXPHYS_CONSTANT saturnFlattening = 0.09796;                                /**< \f$f_{S} \ (dimensionless)\f$ Flattening of Saturn. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */

    EGXPHYS_CONSTANT saturnStandardGravitationalParameter = 37.931e15;          /**< \f$ \mu_{S} \ (\dfrac{m^3}{s^2})\f$ Standard gravitational parameter of Saturn in meter cubed per second squared. It is the Gravitational constant times the mass of the planet. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnSurfaceGravityEquator = 10.44;                       /**< \f$ G_{S,Equat.} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Saturn in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnSurfaceGravityPolar = 12.14;                         /**< \f$ G_{S,Polar} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Saturn in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */

    EGXPHYS_CONSTANT saturnGeometricAlbedo = 0.499;                             /**< \f$ p_{S} \ (dimensionless)\f$ Geometric albedo of Saturn. The ratio of the body's brightness at a phase angle of zero to the brightness of a perfectly diffusing disk with the same position and apparent size. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnBondAlbedo = 0.342;                                  /**< \f$ A_{S} \ (dimensionless)\f$ Bond albedo of Saturn. The fraction of incident solar radiation reflected back into space without absorption. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnVBandMagnitude = -8.91;                              /**< \f$ V(1,0)_{S} \ (dimensionless)\f$ Visual magnitude of Saturn if it were one AU from the Earth at a phase angle of zero . See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnSolarIrradiance = 14.82;                             /**< \f$ Q_{S} \ (\dfrac{W}{m^2})\f$ Solar irradiance of Saturn in watts per meter squared. The solar energy landing on saturn per unit area. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */

    EGXPHYS_CONSTANT saturnMomentOfInertia = 0.210;                             /**< \f$ I_{S} \ (dimensionless)\f$ The moment of inertia of Saturn. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnJ2 = 16298e-6;                                       /**< \f$ J_{2,S } \ (dimensionless)\f$ J_2 perterbation of Saturn. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Saturn-Orbit
    /// @{
    EGXPHYS_CONSTANT saturnSemimajorAxis = 1433.53e6;                           /**< \f$ a_{S} \ (m)\f$ Semi-major axis of Saturn in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnSiderealOrbitPeriod = 10759.22*secondsInDay;         /**< \f$ T_{S,sidereal} \ (s)\f$ Sidereal orbit period of Saturn in seconds. The time it takes the body to make one revolution about the Sun relative to the fixed stars. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnTropicalOrbitPeriod = 10746.94*secondsInDay;         /**< \f$ T_{S,trop} \ (s)\f$ Tropical orbit period of Saturn in seconds. The average time for the body to make one revolution about the Sun from one point in its seasonal orbit to the equivalent point. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnSynodicOrbitPeriod = 378.09*secondsInDay;            /**< \f$ T_{S,syn} \ (s)\f$ Synodic period of Saturn in seconds. The time between similar configurations in the orbit of the planet and Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnPerihelion = 1352.55e9;                              /**< \f$ r_{S,peri} \ (m)\f$ Perihelion of Saturn in meters. Distance when it is closets to the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnAphelion = 1514.50e9;                                /**< \f$ r_{S,aphe} \ (m)\f$ Aphelion of Saturn in meters. Distance when it is furthest from the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnOrbitInclination = 2.485;                            /**< \f$ \theta_{S,orbit} \ (deg)\f$ Orbit inclination of Saturn in degrees. The inclination of the orbit to the ecliptic. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnOrbitEccentricity = 0.0565;                          /**< \f$ e_{S} \ (dimensionless)\f$ Orbit eccentricity of Saturn. A measure of the circularity of the orbit. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */

    EGXPHYS_CONSTANT saturnSiderealRotationPeriod = 10.656*secondsInHour;       /**< \f$ P_{S} \ (s)\f$ Sidereal rotation period of Saturn in seconds. Total time is 9h 55m 29.685s. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    // Weirdness with the rates reported EGXPHYS_CONSTANT saturnRotationRate = ;                          /**< \f$ \omega_{S} \ (\dfrac{rad}{s})\f$ Rotation rate of Saturn in radians per second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnDayLength = 10.656*secondsInHour;                    /**< \f$ Day_{S} \ (s)\f$ Length of a day in Saturn in second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnObliquityToOrbit = 26.73;                            /**< \f$ \theta_{S,obliq} \ (deg)\f$ Obliquity to orbit of Saturn in degrees. The angle between Saturn's equator and the it's orbital plane, with north defined by the right-hand rule. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    EGXPHYS_CONSTANT saturnInclinationOfEquator = 26.73;                        /**< \f$ \theta_{S,incli} \ (deg)\f$ Inclination of equator of Saturn in degrees. The angle between Saturn's equator and orbital plane with north defined as pole axis above (north of) the plane of the solar system. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/saturnfact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Uranus-Bulk
    /// @{
    EGXPHYS_CONSTANT uranusMass = 86.813e24;                                    /**< \f$M_{U} \ (kg)\f$ Mass of Uranus in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusDensity = 1271.0;                                    /**< \f$\rho_{U} \ (\dfrac{kg}{m^3})\f$ Density of Uranus in kg per meter cubed. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */

    EGXPHYS_CONSTANT uranusRadiusEquatorial = 25559e3;                          /**< \f$R_{U,Equat} \ (m)\f$ Equatorial radius of Uranus in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusRadiusPolar = 24973e3;                               /**< \f$R_{U,Polar} \ (m)\f$ Polar radius of Uranus in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusVolumetricMeanRadius = 25362e3;                      /**< \f$M_{U} \ (kg)\f$ Volumetric mean radius of Uranus in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
   
    EGXPHYS_CONSTANT uranusFlattening = 0.02293;                                /**< \f$f_{U} \ (dimensionless)\f$ Flattening of Uranus. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */

    EGXPHYS_CONSTANT uranusStandardGravitationalParameter = 5.7940e15;          /**< \f$ \mu_{U} \ (\dfrac{m^3}{s^2})\f$ Standard gravitational parameter of Uranus in meter cubed per second squared. It is the Gravitational constant times the mass of the planet. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusSurfaceGravityEquator = 8.87;                        /**< \f$ G_{U,Equat.} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Uranus in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusSurfaceGravityPolar = 9.19;                          /**< \f$ G_{U,Polar} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Uranus in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */

    EGXPHYS_CONSTANT uranusGeometricAlbedo = 0.488;                             /**< \f$ p_{U} \ (dimensionless)\f$ Geometric albedo of Uranus. The ratio of the body's brightness at a phase angle of zero to the brightness of a perfectly diffusing disk with the same position and apparent size. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusBondAlbedo = 0.300;                                  /**< \f$ A_{U} \ (dimensionless)\f$ Bond albedo of Uranus. The fraction of incident solar radiation reflected back into space without absorption. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusVBandMagnitude = -7.11;                              /**< \f$ V(1,0)_{U} \ (dimensionless)\f$ Visual magnitude of Uranus if it were one AU from the Earth at a phase angle of zero . See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusSolarIrradiance = 3.69;                              /**< \f$ Q_{U} \ (\dfrac{W}{m^2})\f$ Solar irradiance of Uranus in watts per meter squared. The solar energy landing on uranus per unit area. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */

    EGXPHYS_CONSTANT uranusMomentOfInertia = 0.225;                             /**< \f$ I_{U} \ (dimensionless)\f$ The moment of inertia of Uranus. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusJ2 = 3343.43e-6;                                     /**< \f$ J_{2,U} \ (dimensionless)\f$ J_2 perterbation of Uranus. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Uranus-Orbit
    /// @{
    EGXPHYS_CONSTANT uranusSemimajorAxis = 2872.46e9;                           /**< \f$ a_{U} \ (m)\f$ Semi-major axis of Uranus in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusSiderealOrbitPeriod = 30685.4*secondsInDay;          /**< \f$ T_{U,sidereal} \ (s)\f$ Sidereal orbit period of Uranus in seconds. The time it takes the body to make one revolution about the Sun relative to the fixed stars. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusTropicalOrbitPeriod = 30588.740*secondsInDay;        /**< \f$ T_{U,trop} \ (s)\f$ Tropical orbit period of Uranus in seconds. The average time for the body to make one revolution about the Sun from one point in its seasonal orbit to the equivalent point. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusSynodicOrbitPeriod = 369.66*secondsInDay;            /**< \f$ T_{U,syn} \ (s)\f$ Synodic period of Uranus in seconds. The time between similar configurations in the orbit of the planet and Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusPerihelion = 2741.30e9;                              /**< \f$ r_{U,peri} \ (m)\f$ Perihelion of Uranus in meters. Distance when it is closets to the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusAphelion = 3003.62e9;                                /**< \f$ r_{U,aphe} \ (m)\f$ Aphelion of Uranus in meters. Distance when it is furthest from the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusOrbitInclination = 0.772;                            /**< \f$ \theta_{U,orbit} \ (deg)\f$ Orbit inclination of Uranus in degrees. The inclination of the orbit to the ecliptic. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusOrbitEccentricity = 0.0457;                          /**< \f$ e_{U} \ (dimensionless)\f$ Orbit eccentricity of Uranus. A measure of the circularity of the orbit. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */

    EGXPHYS_CONSTANT uranusSiderealRotationPeriod = -17.24*secondsInHour;       /**< \f$ P_{U} \ (s)\f$ Sidereal rotation period of Uranus in seconds. Total time is 9h 55m 29.685s. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    // Weirdness with the rates reported EGXPHYS_CONSTANT uranusRotationRate = ;                          /**< \f$ \omega_{U} \ (\dfrac{rad}{s})\f$ Rotation rate of Uranus in radians per second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusDayLength = 17.24*secondsInHour;                     /**< \f$ Day_{U} \ (s)\f$ Length of a day in Uranus in second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusObliquityToOrbit = 97.77;                            /**< \f$ \theta_{U,obliq} \ (deg)\f$ Obliquity to orbit of Uranus in degrees. The angle between Uranus's equator and the it's orbital plane, with north defined by the right-hand rule. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    EGXPHYS_CONSTANT uranusInclinationOfEquator = 82.23;                        /**< \f$ \theta_{U,incli} \ (deg)\f$ Inclination of equator of Uranus in degrees. The angle between Uranus's equator and orbital plane with north defined as pole axis above (north of) the plane of the solar system. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/uranusfact.html */
    /// @}


    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Neptune-Bulk
    /// @{
    EGXPHYS_CONSTANT neptuneMass = 102.413e24;                                  /**< \f$M_{N} \ (kg)\f$ Mass of Neptune in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneDensity = 1638.0;                                   /**< \f$\rho_{N} \ (\dfrac{kg}{m^3})\f$ Density of Neptune in kg per meter cubed. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */

    EGXPHYS_CONSTANT neptuneRadiusEquatorial = 24764e3;                         /**< \f$R_{N,Equat} \ (m)\f$ Equatorial radius of Neptune in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneRadiusPolar = 24341e3;                              /**< \f$R_{N,Polar} \ (m)\f$ Polar radius of Neptune in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneVolumetricMeanRadius = 24622e3;                     /**< \f$M_{N} \ (kg)\f$ Volumetric mean radius of Neptune in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
   
    EGXPHYS_CONSTANT neptuneFlattening = 0.01708;                               /**< \f$f_{N} \ (dimensionless)\f$ Flattening of Neptune. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */

    EGXPHYS_CONSTANT neptuneStandardGravitationalParameter = 6.8351e15;         /**< \f$ \mu_{N} \ (\dfrac{m^3}{s^2})\f$ Standard gravitational parameter of Neptune in meter cubed per second squared. It is the Gravitational constant times the mass of the planet. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneSurfaceGravityEquator = 11.15;                      /**< \f$ G_{N,Equat.} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Neptune in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneSurfaceGravityPolar = 11.41;                        /**< \f$ G_{N,Polar} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Neptune in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */

    EGXPHYS_CONSTANT neptuneGeometricAlbedo = 0.442;                            /**< \f$ p_{N} \ (dimensionless)\f$ Geometric albedo of Neptune. The ratio of the body's brightness at a phase angle of zero to the brightness of a perfectly diffusing disk with the same position and apparent size. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneBondAlbedo = 0.290;                                 /**< \f$ A_{N} \ (dimensionless)\f$ Bond albedo of Neptune. The fraction of incident solar radiation reflected back into space without absorption. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneVBandMagnitude = -6.94;                             /**< \f$ V(1,0)_{N} \ (dimensionless)\f$ Visual magnitude of Neptune if it were one AU from the Earth at a phase angle of zero . See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneSolarIrradiance = 1.508;                            /**< \f$ Q_{N} \ (\dfrac{W}{m^2})\f$ Solar irradiance of Neptune in watts per meter squared. The solar energy landing on neptune per unit area. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */

    // NONE IN DATASET EGXPHYS_CONSTANT neptuneMomentOfInertia = ;                            /**< \f$ I_{N} \ (dimensionless)\f$ The moment of inertia of Neptune. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneJ2 = 3411e-6;                                       /**< \f$ J_{2,N} \ (dimensionless)\f$ J_2 perterbation of Neptune. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Neptune-Orbit
    /// @{
    EGXPHYS_CONSTANT neptuneSemimajorAxis = 4495.06e9;                          /**< \f$ a_{N} \ (m)\f$ Semi-major axis of Neptune in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneSiderealOrbitPeriod = 60189.0 *secondsInDay;        /**< \f$ T_{N,sidereal} \ (s)\f$ Sidereal orbit period of Neptune in seconds. The time it takes the body to make one revolution about the Sun relative to the fixed stars. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneTropicalOrbitPeriod = 59799.9 *secondsInDay;        /**< \f$ T_{N,trop} \ (s)\f$ Tropical orbit period of Neptune in seconds. The average time for the body to make one revolution about the Sun from one point in its seasonal orbit to the equivalent point. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneSynodicOrbitPeriod = 367.49 *secondsInDay;          /**< \f$ T_{N,syn} \ (s)\f$ Synodic period of Neptune in seconds. The time between similar configurations in the orbit of the planet and Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptunePerihelion = 4444.45e9;                             /**< \f$ r_{N,peri} \ (m)\f$ Perihelion of Neptune in meters. Distance when it is closets to the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneAphelion = 4545.67e9;                               /**< \f$ r_{N,aphe} \ (m)\f$ Aphelion of Neptune in meters. Distance when it is furthest from the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneOrbitInclination = 1.769;                           /**< \f$ \theta_{N,orbit} \ (deg)\f$ Orbit inclination of Neptune in degrees. The inclination of the orbit to the ecliptic. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneOrbitEccentricity = 0.0113;                         /**< \f$ e_{N} \ (dimensionless)\f$ Orbit eccentricity of Neptune. A measure of the circularity of the orbit. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */

    EGXPHYS_CONSTANT neptuneSiderealRotationPeriod = 16.11*secondsInHour;       /**< \f$ P_{N} \ (s)\f$ Sidereal rotation period of Neptune in seconds. Total time is 9h 55m 29.685s. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    // Weirdness with the rates reported EGXPHYS_CONSTANT neptuneRotationRate = ;                          /**< \f$ \omega_{N} \ (\dfrac{rad}{s})\f$ Rotation rate of Neptune in radians per second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneDayLength = 16.11*secondsInHour;                    /**< \f$ Day_{N} \ (s)\f$ Length of a day in Neptune in second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneObliquityToOrbit = 28.32;                           /**< \f$ \theta_{N,obliq} \ (deg)\f$ Obliquity to orbit of Neptune in degrees. The angle between Neptune's equator and the it's orbital plane, with north defined by the right-hand rule. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    EGXPHYS_CONSTANT neptuneInclinationOfEquator = 28.32;                       /**< \f$ \theta_{N,incli} \ (deg)\f$ Inclination of equator of Neptune in degrees. The angle between Neptune's equator and orbital plane with north defined as pole axis above (north of) the plane of the solar system. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/neptunefact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Pluto-Bulk
    /// @{
    EGXPHYS_CONSTANT plutoMass = 0.01303e24;                                    /**< \f$M_{Pl} \ (kg)\f$ Mass of Pluto in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    EGXPHYS_CONSTANT plutoDensity = 1860.0;                                     /**< \f$\rho_{Pl} \ (\dfrac{kg}{m^3})\f$ Density of Pluto in kg per meter cubed. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */

    EGXPHYS_CONSTANT plutoRadiusEquatorial = 1187e3;                            /**< \f$R_{Pl,Equat} \ (m)\f$ Equatorial radius of Pluto in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    EGXPHYS_CONSTANT plutoRadiusPolar = 1187e3;                                 /**< \f$R_{Pl,Polar} \ (m)\f$ Polar radius of Pluto in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    EGXPHYS_CONSTANT plutoVolumetricMeanRadius = 1187e3;                        /**< \f$M_{Pl} \ (kg)\f$ Volumetric mean radius of Pluto in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */

    EGXPHYS_CONSTANT plutoFlattening = 0.0;                                     /**< \f$f_{Pl} \ (dimensionless)\f$ Flattening of Pluto. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */

    EGXPHYS_CONSTANT plutoStandardGravitationalParameter = 0.000870e15;         /**< \f$ \mu_{Pl} \ (\dfrac{m^3}{s^2})\f$ Standard gravitational parameter of Pluto in meter cubed per second squared. It is the Gravitational constant times the mass of the planet. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    EGXPHYS_CONSTANT plutoSurfaceGravityEquator = 0.611;                        /**< \f$ G_{Pl,Equat.} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Pluto in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    EGXPHYS_CONSTANT plutoSurfaceGravityPolar = 0.611;                          /**< \f$ G_{Pl,Polar} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Pluto in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */

    EGXPHYS_CONSTANT plutoGeometricAlbedo = 0.52;                               /**< \f$ p_{Pl} \ (dimensionless)\f$ Geometric albedo of Pluto. The ratio of the body's brightness at a phase angle of zero to the brightness of a perfectly diffusing disk with the same position and apparent size. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    EGXPHYS_CONSTANT plutoBondAlbedo = 0.72;                                    /**< \f$ A_{Pl} \ (dimensionless)\f$ Bond albedo of Pluto. The fraction of incident solar radiation reflected back into space without absorption. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    EGXPHYS_CONSTANT plutoVBandMagnitude = -1.0;                                /**< \f$ V(1,0)_{Pl} \ (dimensionless)\f$ Visual magnitude of Pluto if it were one AU from the Earth at a phase angle of zero . See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    EGXPHYS_CONSTANT plutoSolarIrradiance = 0.873;                              /**< \f$ Q_{Pl} \ (\dfrac{W}{m^2})\f$ Solar irradiance of Pluto in watts per meter squared. The solar energy landing on pluto per unit area. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */

    //None in data set EGXPHYS_CONSTANT plutoMomentOfInertia = ;                            /**< \f$ I_{Pl} \ (dimensionless)\f$ The moment of inertia of Pluto. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    //None in data set EGXPHYS_CONSTANT plutoJ2 = ;                                    /**< \f$ J_{2,Pl} \ (dimensionless)\f$ J_2 perterbation of Pluto. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Pluto-Orbit
    /// @{
    EGXPHYS_CONSTANT plutoSemimajorAxis = 5906.38e9;                           /**< \f$ a_{Pl} \ (m)\f$ Semi-major axis of Pluto in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    EGXPHYS_CONSTANT plutoSiderealOrbitPeriod = 90560*secondsInDay;      /**< \f$ T_{Pl,sidereal} \ (s)\f$ Sidereal orbit period of Pluto in seconds. The time it takes the body to make one revolution about the Sun relative to the fixed stars. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    // Unknown EGXPHYS_CONSTANT plutoTropicalOrbitPeriod = *secondsInDay;      /**< \f$ T_{Pl,trop} \ (s)\f$ Tropical orbit period of Pluto in seconds. The average time for the body to make one revolution about the Sun from one point in its seasonal orbit to the equivalent point. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    EGXPHYS_CONSTANT plutoSynodicOrbitPeriod = 366.73*secondsInDay;         /**< \f$ T_{Pl,syn} \ (s)\f$ Synodic period of Pluto in seconds. The time between similar configurations in the orbit of the planet and Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    EGXPHYS_CONSTANT plutoPerihelion = 4436.82e9;                              /**< \f$ r_{Pl,peri} \ (m)\f$ Perihelion of Pluto in meters. Distance when it is closets to the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    EGXPHYS_CONSTANT plutoAphelion = 7375.93e9;                                /**< \f$ r_{Pl,aphe} \ (m)\f$ Aphelion of Pluto in meters. Distance when it is furthest from the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    EGXPHYS_CONSTANT plutoOrbitInclination = 17.16;                           /**< \f$ \theta_{Pl,orbit} \ (deg)\f$ Orbit inclination of Pluto in degrees. The inclination of the orbit to the ecliptic. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    EGXPHYS_CONSTANT plutoOrbitEccentricity = 0.2488;                         /**< \f$ e_{Pl} \ (dimensionless)\f$ Orbit eccentricity of Pluto. A measure of the circularity of the orbit. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */

    EGXPHYS_CONSTANT plutoSiderealRotationPeriod = 153.2928*secondsInHour;                 /**< \f$ P_{Pl} \ (s)\f$ Sidereal rotation period of Pluto in seconds. Total time is 9h 55m 29.685s. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    // Weirdness with the rates reported EGXPHYS_CONSTANT plutoRotationRate = ;                          /**< \f$ \omega_{Pl} \ (\dfrac{rad}{s})\f$ Rotation rate of Pluto in radians per second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    EGXPHYS_CONSTANT plutoDayLength = 153.2820*secondsInHour;                 /**< \f$ Day_{Pl} \ (s)\f$ Length of a day in Pluto in second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    EGXPHYS_CONSTANT plutoObliquityToOrbit = 122.53;                            /**< \f$ \theta_{Pl,obliq} \ (deg)\f$ Obliquity to orbit of Pluto in degrees. The angle between Pluto's equator and the it's orbital plane, with north defined by the right-hand rule. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    EGXPHYS_CONSTANT plutoInclinationOfEquator = 57.47;                        /**< \f$ \theta_{Pl,incli} \ (deg)\f$ Inclination of equator of Pluto in degrees. The angle between Pluto's equator and orbital plane with north defined as pole axis above (north of) the plane of the solar system. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/plutofact.html */
    /// @}
















        












    


		//Sun
        //https://sites.google.com/site/mamajeksstarnotes/basic-astronomical-data-for-the-sun
	EGXPHYS_CONSTANT MassOfSun = 1.9891e30;										/**< \f$m_\odot\f$ (kg) Mass of Sun. */
	//EGXPHYS_CONSTANT SolarMass = MassOfSun;                                 	/**< \f$m_\odot\f$ (kg) Mass of Sun. */
	EGXPHYS_CONSTANT SunMass = MassOfSun;                                 		/**< \f$m_\odot\f$ (kg) Mass of Sun. */
	EGXPHYS_CONSTANT SunTempreture = 5772.0;									/**< \f$T_\odot\f$(K) Tempreture of Sun. 5778K was a value from 1955*/
	EGXPHYS_CONSTANT SunAbsVMagnitude = 4.862;									/**< Absolute V Magnitude (??) of Sun. */
	EGXPHYS_CONSTANT SunLuminocity = 3.8270e26;									/**< \f$L_\odot\f$(W) Luminocity of Sun. */
	EGXPHYS_CONSTANT SunAge = 4572.0;											/**< Age(Myr) of Sun. */
    EGXPHYS_CONSTANT SurfaceTempretureOfSun = 5772.0;							/**< \f$T_\odot\f$(K) Tempreture of Sun surface. */
		//Earth
    
	EGXPHYS_CONSTANT SemimajorAxisOfEarth = 149598261000;						/**< Semimajor Axis(m) Of Earth. */
	EGXPHYS_CONSTANT EccentricityOfEarth = 0.01671123;                     	 	/**< Eccentricity(dimensionless) of Earth. */
	EGXPHYS_CONSTANT BondAlbedoOfEarth = 0.306;									/**< Bond Albedo(dimensionless) of Earth. */
	EGXPHYS_CONSTANT GeometricAlbedoOfEarth = 0.367;							/**< Geometric Albedo(dimensionless) of Earth. */
	EGXPHYS_CONSTANT MassOfEarth = 5.97219e24;									/**< Mass(kg) Of Earth. \f$M_\oplus\f$ */
	EGXPHYS_CONSTANT RadiusOfEarth= 6371000;									/**< Radius(m) Of Earth. \f$R_\oplus\f$ */
	EGXPHYS_CONSTANT SiderealRotationPeriodOfEarth = 0.99726968* secondsInDay;	/**< Sidereal Rotation Period(s) Of Earth. */
	EGXPHYS_CONSTANT MassOfSunInEarthMass = MassOfSun/MassOfEarth;				/**< Mass(\f$M_\oplus\f$) Of Sun. */
	
								// m
	EGXPHYS_CONSTANT VolumeOfEarth = 4.0/3.0 * pi * RadiusOfEarth* RadiusOfEarth* RadiusOfEarth;	/**< \f$V_\oplus\ (m^3)\f$ Volume of Earth. */
	EGXPHYS_CONSTANT DensityOfEarth =  MassOfEarth/VolumeOfEarth;				/**< \f$\rho_\oplus\ (\frac{kg}{m^3})\f$ Density of Earth. */
	EGXPHYS_CONSTANT EscapeVelocityOfEarth = 11186.0; 							/**< \f$v_e\ (\frac{m}{s})\f$ Escape velocity of Earth. */
	EGXPHYS_CONSTANT SurfaceTempretureOfEarth = 287.0;							/**< \f$T_{\oplus,Surface}\ (K)\f$ Surface tempreture of Earth. */
	 
	 
	EGXPHYS_CONSTANT RadiusOfSun =  6.955e8;									/**< \f$R_\odot\ (m)\f$ Radius of Sun. */

		//Mars
	


	EGXPHYS_CONSTANT EarthMass = 5.97219e24;									/**< Mass(kg) Of Earth. \f$M_\oplus\f$ */
	EGXPHYS_CONSTANT JupiterMass = 1.89813e27;									/**< Mass(kg) Of Jupiter. \f$M_J\f$ */
	EGXPHYS_CONSTANT LunarMass = 7.342e22;										/**< Mass(kg) Of Moon. \f$M_L\f$ */ //Is this right for symbol?


	EGXPHYS_CONSTANT sunGravConstInAuCubedperSolarMassDay = NISTConst::gravitationalConstant * MassOfSun * secondsInDay * secondsInDay / (AU*AU*AU); /**< \f$G_{Sun}\ (\frac{AU^3}{SolarMass\ day)\f$  Gravitational constant around sun per day. */

	/*
	EGXPHYS_CONSTANT SemimajorAxisOf =;
	EGXPHYS_CONSTANT EccentricityOf =;
	EGXPHYS_CONSTANT AlbedoOf =;
	EGXPHYS_CONSTANT MassOf =;
	EGXPHYS_CONSTANT RadiusOf=;

	
	*/
} //namespace EGXPhys


