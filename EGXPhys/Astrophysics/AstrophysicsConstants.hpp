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
    EGXPHYS_CONSTANT zeroPointLuminosity = 3.0128e28;                           /**< \f$L_{0} \ (W)\f$ Zero point luminosity. It is a defined number used in bolometric magnitude stellar calculations. See the International Astronomical Union, https://www.iau.org/news/announcements/detail/ann15023/ resolution B2.*/
    
            //Bolometic Luminosity
    EGXPHYS_CONSTANT sunBolometricLuminosity = 3.0128e28;                       /**< \f$L_{Bol,\odot} \ (W)\f$ Sun bolometric luminosity. It is a defined number used in bolometric magnitude stellar calculations. See the International Astronomical Union, https://www.iau.org/news/announcements/detail/ann15023/ resolution B2.*/

        //Magnitude
            //Apparent
            //Absolute

            //Apparent Bolometric
    EGXPHYS_CONSTANT sunApparentBolometricMagnitude = -26.832;                  /**< \f$m_{Bol,\odot} \ (mag)\f$ Sun apparent bolometric magnitude. It is a "defined" number. See the International Astronomical Union, https://www.iau.org/news/announcements/detail/ann15023/ resolution B2.*/

            //Absolute Bolometric
    EGXPHYS_CONSTANT sunAbsoluteBolometricMagnitude = 4.74;                     /**< \f$M_{Bol,\odot} \ (mag)\f$ Sun absolute bolometric magnitude. It is a "defined" number. L_{0} was set to make the absolute bolometric magnitude was 4.74. See the International Astronomical Union, https://www.iau.org/news/announcements/detail/ann15023/ resolution B2.*/




    // See https://ssd.jpl.nasa.gov/horizons.cgi data
    //Physical Data

    //Sun

    /**************************
    *       Planets           *
    ***************************/

    
    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-ZXZ-Bulk
    /// @{
    EGXPHYS_CONSTANT zZzXzZzMass = ;                                  /**< \f$M_{ZSZ} \ (kg)\f$ Mass of ZXZ in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzMassUncertainty = ;                          /**< \f$M_{ZSZ} \ (kg)\f$ Uncertainty in mass of ZXZ in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */

    EGXPHYS_CONSTANT zZzXzZzDensity = ;                                    /**< \f$\rho_{ZSZ} \ (\dfrafc{kg}{m^3})\f$ Density of ZXZ in kg per meter cubed. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */

    EGXPHYS_CONSTANT zZzXzZzRadiusEquatorial = ;                        /**< \f$R_{ZSZ,Equat/} \ (m)\f$ Equatorial radius of ZXZ in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzRadiusEquatorialUncertainty = ;                 /**< \f$R_{ZSZ,Equat.} \ (m)\f$ Uncertainty in equatorial radius of ZXZ in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */

    EGXPHYS_CONSTANT zZzXzZzRadiusPolar = ;                             /**< \f$R_{ZSZ,Polar} \ (m)\f$ Polar radius of ZXZ in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzRadiusPolarUncertainty = ;                     /**< \f$R_{ZSZ,Polar} \ (m)\f$ Uncertainty in polar radius of ZXZ in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */

    EGXPHYS_CONSTANT zZzXzZzVolumetricMeanRadius = ;                    /**< \f$M_{ZSZ} \ (kg)\f$ Volumetric mean radius of ZXZ in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzVolumetricMeanRadiusUncertainty = ;             /**< \f$M_{ZSZ} \ (kg)\f$ Uncertainty in volumetric mean radius of ZXZ in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */

    EGXPHYS_CONSTANT zZzXzZzFlattening = ;                               /**< \f$f_{ZSZ} \ (dimensionless)\f$ Flattening of ZXZ. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */

    EGXPHYS_CONSTANT zZzXzZzGravitationalMass = ;                  /**< \f$ GM_{ZSZ} \ (\dfrac{m^3}{s^2})\f$ Gravitational constant times the mass of ZXZ in meter cubed per second squared. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzSurfaceGravityEquator = ;                      /**< \f$ G_{ZSZ,Equat.} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of ZXZ in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzSurfaceGravityPolar = ;                        /**< \f$ G_{ZSZ,Polar} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of ZXZ in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */

    EGXPHYS_CONSTANT zZzXzZzGeometricAlbedo = ;                            /**< \f$ p_{ZSZ} \ (dimensionless)\f$ Geometric albedo of ZXZ. The ratio of the body's brightness at a phase angle of zero to the brightness of a perfectly diffusing disk with the same position and apparent size. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzBondAlbedo = ;                                 /**< \f$ A_{ZSZ} \ (dimensionless)\f$ Bond albedo of ZXZ. The fraction of incident solar radiation reflected back into space without absorption. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzVBandMagnitude = ;                             /**< \f$ V(1,0)_{ZSZ} \ (dimensionless)\f$ Visual magnitude of ZXZ if it were one AU from the Earth at a phase angle of zero . See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    
    EGXPHYS_CONSTANT zZzXzZzSolarIrradiance = ;                            /**< \f$ Q_{ZSZ} \ (\dfrac{W}{m^2})\f$ Solar irradiance of ZXZ in watts per meter squared. The solar energy landing on zZzXzZz per unit area. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    
    EGXPHYS_CONSTANT zZzXzZzMomentOfInertia = ;                            /**< \f$ I_{ZSZ} \ (dimensionless)\f$ The moment of inertia of ZXZ. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzJ2 = ;                                    /**< \f$ J_2_{ZSZ} \ (dimensionless)\f$ J_2 perterbation of ZXZ. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-ZXZ-Orbit
    /// @{
    EGXPHYS_CONSTANT zZzXzZzSemimajorAxis = ;                           /**< \f$ a_{ZSZ} \ (m)\f$ Semi-major axis of ZXZ in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzSiderealOrbitPeriod =  * secondsInDay;      /**< \f$ T_{ZSZ,sidereal} \ (s)\f$ Sidereal orbit period of ZXZ in seconds. The time it takes the body to make one revolution about the Sun relative to the fixed stars. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzTropicalOrbitPeriod =  * secondsInDay;      /**< \f$ T_{ZSZ,trop} \ (s)\f$ Tropical orbit period of ZXZ in seconds. The average time for the body to make one revolution about the Sun from one point in its seasonal orbit to the equivalent point. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzSynodicOrbitPeriod =  * secondsInDay;         /**< \f$ T_{ZSZ,syn} \ (s)\f$ Synodic period of ZXZ in seconds. The time between similar configurations in the orbit of the planet and Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzPerihelion = ;                              /**< \f$ r_{ZSZ,peri} \ (m)\f$ Perihelion of ZXZ in meters. Distance when it is closets to the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzAphelion = ;                                /**< \f$ r_{ZSZ,aphe} \ (m)\f$ Aphelion of ZXZ in meters. Distance when it is furthest from the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzOrbitInclination = ;                           /**< \f$ \theta_{ZSZ,orbit} \ (deg)\f$ Orbit inclination of ZXZ in degrees. The inclination of the orbit to the ecliptic. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzOrbitEccentricity = ;                         /**< \f$ e_{ZSZ} \ (dimensionless)\f$ Orbit eccentricity of ZXZ. A measure of the circularity of the orbit. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */

    EGXPHYS_CONSTANT zZzXzZzSiderealRotationPeriod = ;                 /**< \f$ P_{ZSZ} \ (s)\f$ Sidereal rotation period of ZXZ in seconds. Total time is 9h 55m 29.685s. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzRotationRate = ;                          /**< \f$ \omega_{ZSZ} \ (\dfrac{rad}{s})\f$ Rotation rate of ZXZ in radians per second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzDayLength =  * secondsInHour;                 /**< \f$ Day_{ZSZ} \ (s)\f$ Length of a day in ZXZ in second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzObliquityToOrbit = ;                            /**< \f$ \theta_{ZSZ,obliq} \ (deg)\f$ Obliquity to orbit of ZXZ in degrees. The angle between ZXZ's equator and the it's orbital plane, with north defined by the right-hand rule. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    EGXPHYS_CONSTANT zZzXzZzInclinationOfEquator = ;                        /**< \f$ \theta_{ZSZ,incli} \ (deg)\f$ Inclination of equator of ZXZ in degrees. The angle between ZXZ's equator and orbital plane with north defined as pole axis above (north of) the plane of the solar system. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/zZzXzZzfact.html */
    /// @}



    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Jupiter-Bulk
    /// @{
    EGXPHYS_CONSTANT jupiterMass = 1898.13e24;                                  /**< \f$M_{J} \ (kg)\f$ Mass of Jupiter in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterMassUncertainty = 0.19e24;                          /**< \f$M_{J} \ (kg)\f$ Uncertainty in mass of Jupiter in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    EGXPHYS_CONSTANT jupiterDensity = 1326.0;                                    /**< \f$\rho_{J} \ (\dfrafc{kg}{m^3})\f$ Density of Jupiter in kg per meter cubed. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    EGXPHYS_CONSTANT jupiterRadiusEquatorial = 71492000;                        /**< \f$R_{J,Equat/} \ (m)\f$ Equatorial radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterRadiusEquatorialUncertainty = 4000;                 /**< \f$R_{J,Equat.} \ (m)\f$ Uncertainty in equatorial radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    EGXPHYS_CONSTANT jupiterRadiusPolar = 66854000;                             /**< \f$R_{J,Polar} \ (m)\f$ Polar radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterRadiusPolarUncertainty = 10000;                     /**< \f$R_{J,Polar} \ (m)\f$ Uncertainty in polar radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    EGXPHYS_CONSTANT jupiterVolumetricMeanRadius = 69911000;                    /**< \f$M_{J} \ (kg)\f$ Volumetric mean radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterVolumetricMeanRadiusUncertainty = 6000;             /**< \f$M_{J} \ (kg)\f$ Uncertainty in volumetric mean radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    EGXPHYS_CONSTANT jupiterFlattening = 0.06487;                               /**< \f$f_{J} \ (dimensionless)\f$ Flattening of Jupiter. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    EGXPHYS_CONSTANT jupiterGravitationalMass = 1.26686511e17;                  /**< \f$ GM_{J} \ (\dfrac{m^3}{s^2})\f$ Gravitational constant times the mass of Jupiter in meter cubed per second squared. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterSurfaceGravityEquator = 24.79;                      /**< \f$ G_{J,Equat.} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Jupiter in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterSurfaceGravityPolar = 28.34;                        /**< \f$ G_{J,Polar} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Jupiter in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    EGXPHYS_CONSTANT jupiterGeometricAlbedo = 0.538;                            /**< \f$ p_{J} \ (dimensionless)\f$ Geometric albedo of Jupiter. The ratio of the body's brightness at a phase angle of zero to the brightness of a perfectly diffusing disk with the same position and apparent size. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterBondAlbedo = 0.343;                                 /**< \f$ A_{J} \ (dimensionless)\f$ Bond albedo of Jupiter. The fraction of incident solar radiation reflected back into space without absorption. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterVBandMagnitude = -9.40;                             /**< \f$ V(1,0)_{J} \ (dimensionless)\f$ Visual magnitude of Jupiter if it were one AU from the Earth at a phase angle of zero . See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    
    EGXPHYS_CONSTANT jupiterSolarIrradiance = 50.26;                            /**< \f$ Q_{J} \ (\dfrac{W}{m^2})\f$ Solar irradiance of Jupiter in watts per meter squared. The solar energy landing on jupiter per unit area. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    
    EGXPHYS_CONSTANT jupiterMomentOfInertia = 0.254;                            /**< \f$ I_{J} \ (dimensionless)\f$ The moment of inertia of Jupiter. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterJ2 = 3343.43e-6;                                    /**< \f$ J_2_{J} \ (dimensionless)\f$ J_2 perterbation of Jupiter. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-ZXZ-Orbit
    /// @{
    EGXPHYS_CONSTANT jupiterSemimajorAxis = 778.57e9;                           /**< \f$ a_{J} \ (m)\f$ Semi-major axis of ZXZ in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterSiderealOrbitPeriod = 4332.589 * secondsInDay;      /**< \f$ T_{J,sidereal} \ (s)\f$ Sidereal orbit period of ZXZ in seconds. The time it takes the body to make one revolution about the Sun relative to the fixed stars. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterTropicalOrbitPeriod = 4330.595 * secondsInDay;      /**< \f$ T_{J,trop} \ (s)\f$ Tropical orbit period of ZXZ in seconds. The average time for the body to make one revolution about the Sun from one point in its seasonal orbit to the equivalent point. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterSynodicOrbitPeriod = 398.88 * secondsInDay;         /**< \f$ T_{J,syn} \ (s)\f$ Synodic period of ZXZ in seconds. The time between similar configurations in the orbit of the planet and Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterPerihelion = 740.52e6;                              /**< \f$ r_{J,peri} \ (m)\f$ Perihelion of ZXZ in meters. Distance when it is closets to the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterAphelion = 816.62e6;                                /**< \f$ r_{J,aphe} \ (m)\f$ Aphelion of ZXZ in meters. Distance when it is furthest from the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterOrbitInclination = 1.304;                           /**< \f$ \theta_{J,orbit} \ (deg)\f$ Orbit inclination of ZXZ in degrees. The inclination of the orbit to the ecliptic. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterOrbitEccentricity = 0.0489;                         /**< \f$ e_{J} \ (dimensionless)\f$ Orbit eccentricity of ZXZ. A measure of the circularity of the orbit. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    EGXPHYS_CONSTANT jupiterSiderealRotationPeriod = 35729.685;                 /**< \f$ P_{J} \ (s)\f$ Sidereal rotation period of ZXZ in seconds. Total time is 9h 55m 29.685s. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterRotationRate = 1.63785e-4;                          /**< \f$ \omega_{J} \ (\dfrac{rad}{s})\f$ Rotation rate of ZXZ in radians per second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterDayLength = 9.9259 * secondsInHour;                 /**< \f$ Day_{J} \ (s)\f$ Length of a day in ZXZ in second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterObliquityToOrbit = 3.13;                            /**< \f$ \theta_{J,obliq} \ (deg)\f$ Obliquity to orbit of ZXZ in degrees. The angle between ZXZ's equator and the it's orbital plane, with north defined by the right-hand rule. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterInclinationOfEquator = 3.13;                        /**< \f$ \theta_{J,incli} \ (deg)\f$ Inclination of equator of ZXZ in degrees. The angle between ZXZ's equator and orbital plane with north defined as pole axis above (north of) the plane of the solar system. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
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


