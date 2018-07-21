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

    
    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Mercury-Bulk
    /// @{
    EGXPHYS_CONSTANT mercuryMass = 0.33011e24;                                  /**< \f$M_{Me} \ (kg)\f$ Mass of Mercury in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryDensity = 5427;                                     /**< \f$\rho_{Me} \ (\dfrafc{kg}{m^3})\f$ Density of Mercury in kg per meter cubed. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    
    EGXPHYS_CONSTANT mercuryRadiusEquatorial = 2439.7;                          /**< \f$R_{Me,Equat} \ (m)\f$ Equatorial radius of Mercury in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryRadiusPolar = 2439.7;                               /**< \f$R_{Me,Polar} \ (m)\f$ Polar radius of Mercury in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryVolumetricMeanRadius = 2439.7;                      /**< \f$M_{Me} \ (kg)\f$ Volumetric mean radius of Mercury in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */

    EGXPHYS_CONSTANT mercuryFlattening = 0.0;                                   /**< \f$f_{Me} \ (dimensionless)\f$ Flattening of Mercury. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */

    EGXPHYS_CONSTANT mercuryGravitationalMass = 0.022032e15;                       /**< \f$ GM_{Me} \ (\dfrac{m^3}{s^2})\f$ Gravitational constant times the mass of Mercury in meter cubed per second squared. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercurySurfaceGravityEquator = 3.701;                      /**< \f$ G_{Me,Equat.} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Mercury in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercurySurfaceGravityPolar = 3.701;                        /**< \f$ G_{Me,Polar} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Mercury in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */

    EGXPHYS_CONSTANT mercuryGeometricAlbedo = 0.142;                            /**< \f$ p_{Me} \ (dimensionless)\f$ Geometric albedo of Mercury. The ratio of the body's brightness at a phase angle of zero to the brightness of a perfectly diffusing disk with the same position and apparent size. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryBondAlbedo = 0.068;                                 /**< \f$ A_{Me} \ (dimensionless)\f$ Bond albedo of Mercury. The fraction of incident solar radiation reflected back into space without absorption. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryVBandMagnitude = -0.69;                             /**< \f$ V(1,0)_{Me} \ (dimensionless)\f$ Visual magnitude of Mercury if it were one AU from the Earth at a phase angle of zero . See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */ 
    EGXPHYS_CONSTANT mercurySolarIrradiance = 9082.7;                           /**< \f$ Q_{Me} \ (\dfrac{W}{m^2})\f$ Solar irradiance of Mercury in watts per meter squared. The solar energy landing on mercury per unit area. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    
    EGXPHYS_CONSTANT mercuryMomentOfInertia = 0.35;                             /**< \f$ I_{Me} \ (dimensionless)\f$ The moment of inertia of Mercury. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
    EGXPHYS_CONSTANT mercuryJ2 = 50.3;                                          /**< \f$ J_2_{Me} \ (dimensionless)\f$ J_2 perterbation of Mercury. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/mercuryfact.html */
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
    EGXPHYS_CONSTANT venusDensity = 5243.0;                                     /**< \f$\rho_{V} \ (\dfrafc{kg}{m^3})\f$ Density of Venus in kg per meter cubed. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */

    EGXPHYS_CONSTANT venusRadiusEquatorial = 6051.8e3;                          /**< \f$R_{V,Equat} \ (m)\f$ Equatorial radius of Venus in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusRadiusPolar = 6051.8e3;                               /**< \f$R_{V,Polar} \ (m)\f$ Polar radius of Venus in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusVolumetricMeanRadius = 6051.8e3;                      /**< \f$M_{V} \ (kg)\f$ Volumetric mean radius of Venus in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */

    EGXPHYS_CONSTANT venusFlattening = 0.0;                                     /**< \f$f_{V} \ (dimensionless)\f$ Flattening of Venus. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */

    EGXPHYS_CONSTANT venusGravitationalMass = 0.32486e15;                        /**< \f$ GM_{V} \ (\dfrac{m^3}{s^2})\f$ Gravitational constant times the mass of Venus in meter cubed per second squared. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusSurfaceGravityEquator = 8.870;                        /**< \f$ G_{V,Equat.} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Venus in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusSurfaceGravityPolar = 8.870;                          /**< \f$ G_{V,Polar} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Venus in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */

    EGXPHYS_CONSTANT venusGeometricAlbedo = 0.689;                              /**< \f$ p_{V} \ (dimensionless)\f$ Geometric albedo of Venus. The ratio of the body's brightness at a phase angle of zero to the brightness of a perfectly diffusing disk with the same position and apparent size. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusBondAlbedo = 0.77;                                    /**< \f$ A_{V} \ (dimensionless)\f$ Bond albedo of Venus. The fraction of incident solar radiation reflected back into space without absorption. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusVBandMagnitude = -4.38;                               /**< \f$ V(1,0)_{V} \ (dimensionless)\f$ Visual magnitude of Venus if it were one AU from the Earth at a phase angle of zero . See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusSolarIrradiance = 2601.3;                             /**< \f$ Q_{V} \ (\dfrac{W}{m^2})\f$ Solar irradiance of Venus in watts per meter squared. The solar energy landing on venus per unit area. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    
    EGXPHYS_CONSTANT venusMomentOfInertia = 0.33;                               /**< \f$ I_{V} \ (dimensionless)\f$ The moment of inertia of Venus. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
    EGXPHYS_CONSTANT venusJ2 = 4.458e-6;                                        /**< \f$ J_2_{V} \ (dimensionless)\f$ J_2 perterbation of Venus. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/venusfact.html */
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
    EGXPHYS_CONSTANT earthDensity = 5514.0;                                     /**< \f$\rho_{\oplus} \ (\dfrafc{kg}{m^3})\f$ Density of Earth in kg per meter cubed. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */

    EGXPHYS_CONSTANT earthRadiusEquatorial = 6378.137e3;                        /**< \f$R_{\oplus,Equat} \ (m)\f$ Equatorial radius of Earth in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthRadiusPolar = 6356.752e3;                             /**< \f$R_{\oplus,Polar} \ (m)\f$ Polar radius of Earth in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthVolumetricMeanRadius = 6371.000e3;                    /**< \f$M_{\oplus} \ (kg)\f$ Volumetric mean radius of Earth in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
   
    EGXPHYS_CONSTANT earthFlattening = 0.003353;                                /**< \f$f_{\oplus} \ (dimensionless)\f$ Flattening of Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */

    EGXPHYS_CONSTANT earthGravitationalMass = 0.39860e15;                       /**< \f$ GM_{\oplus} \ (\dfrac{m^3}{s^2})\f$ Gravitational constant times the mass of Earth in meter cubed per second squared. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthSurfaceGravityEquator = 9.7803267715;                 /**< \f$ G_{\oplus,Equat.} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Earth in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthSurfaceGravityPolar = 9.8321863685;                   /**< \f$ G_{\oplus,Polar} \ (\dfrac{m}{s^2})\f$ Equatorial gravitational acceleration at the surface of Earth in meters per second squared. Does not including the effects of rotation. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */

    EGXPHYS_CONSTANT earthGeometricAlbedo = 0.434;                              /**< \f$ p_{\oplus} \ (dimensionless)\f$ Geometric albedo of Earth. The ratio of the body's brightness at a phase angle of zero to the brightness of a perfectly diffusing disk with the same position and apparent size. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthBondAlbedo = 0.306;                                   /**< \f$ A_{\oplus} \ (dimensionless)\f$ Bond albedo of Earth. The fraction of incident solar radiation reflected back into space without absorption. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthVBandMagnitude = -3.99;                               /**< \f$ V(1,0)_{\oplus} \ (dimensionless)\f$ Visual magnitude of Earth if it were one AU from the Earth at a phase angle of zero . See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthSolarIrradiance = 1361.0;                             /**< \f$ Q_{\oplus} \ (\dfrac{W}{m^2})\f$ Solar irradiance of Earth in watts per meter squared. The solar energy landing on earth per unit area. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */

    EGXPHYS_CONSTANT earthMomentOfInertia = 0.3308;                             /**< \f$ I_{\oplus} \ (dimensionless)\f$ The moment of inertia of Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthJ2 = 1082.63e-6;                                      /**< \f$ J_2_{\oplus} \ (dimensionless)\f$ J_2 perterbation of Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    /// @}

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Earth-Orbit
    /// @{
    EGXPHYS_CONSTANT earthSemimajorAxis = 149.60e9;                           /**< \f$ a_{\oplus} \ (m)\f$ Semi-major axis of Earth in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthSiderealOrbitPeriod = 365.256 * secondsInDay;      /**< \f$ T_{\oplus,sidereal} \ (s)\f$ Sidereal orbit period of Earth in seconds. The time it takes the body to make one revolution about the Sun relative to the fixed stars. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthTropicalOrbitPeriod = 365.242 * secondsInDay;      /**< \f$ T_{\oplus,trop} \ (s)\f$ Tropical orbit period of Earth in seconds. The average time for the body to make one revolution about the Sun from one point in its seasonal orbit to the equivalent point. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    // none for earth EGXPHYS_CONSTANT earthSynodicOrbitPeriod = * secondsInDay;         /**< \f$ T_{\oplus,syn} \ (s)\f$ Synodic period of Earth in seconds. The time between similar configurations in the orbit of the planet and Earth. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthPerihelion = 147.09e9;                              /**< \f$ r_{\oplus,peri} \ (m)\f$ Perihelion of Earth in meters. Distance when it is closets to the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthAphelion = 152.10e9;                                /**< \f$ r_{\oplus,aphe} \ (m)\f$ Aphelion of Earth in meters. Distance when it is furthest from the Sun. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthOrbitInclination = 0.0;                           /**< \f$ \theta_{\oplus,orbit} \ (deg)\f$ Orbit inclination of Earth in degrees. The inclination of the orbit to the ecliptic. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthOrbitEccentricity = 0.0167;                         /**< \f$ e_{\oplus} \ (dimensionless)\f$ Orbit eccentricity of Earth. A measure of the circularity of the orbit. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */

    EGXPHYS_CONSTANT earthSiderealRotationPeriod = 23.9345 * secondsInHour;                 /**< \f$ P_{\oplus} \ (s)\f$ Sidereal rotation period of Earth in seconds. Total time is 9h 55m 29.685s. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    // Weirdness with the rates reported EGXPHYS_CONSTANT earthRotationRate = ;                          /**< \f$ \omega_{\oplus} \ (\dfrac{rad}{s})\f$ Rotation rate of Earth in radians per second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthDayLength = 24.0000 * secondsInHour;                 /**< \f$ Day_{\oplus} \ (s)\f$ Length of a day in Earth in second. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthObliquityToOrbit = 23.44;                            /**< \f$ \theta_{\oplus,obliq} \ (deg)\f$ Obliquity to orbit of Earth in degrees. The angle between Earth's equator and the it's orbital plane, with north defined by the right-hand rule. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    EGXPHYS_CONSTANT earthInclinationOfEquator = 23.44;                        /**< \f$ \theta_{\oplus,incli} \ (deg)\f$ Inclination of equator of Earth in degrees. The angle between Earth's equator and orbital plane with north defined as pole axis above (north of) the plane of the solar system. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/earthfact.html */
    /// @}





















    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Jupiter-Bulk
    /// @{
    EGXPHYS_CONSTANT jupiterMass = 1898.13e24;                                  /**< \f$M_{J} \ (kg)\f$ Mass of Jupiter in kilograms. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterDensity = 1326.0;                                    /**< \f$\rho_{J} \ (\dfrafc{kg}{m^3})\f$ Density of Jupiter in kg per meter cubed. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

    EGXPHYS_CONSTANT jupiterRadiusEquatorial = 71492000;                        /**< \f$R_{J,Equat} \ (m)\f$ Equatorial radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterRadiusPolar = 66854000;                             /**< \f$R_{J,Polar} \ (m)\f$ Polar radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */
    EGXPHYS_CONSTANT jupiterVolumetricMeanRadius = 69911000;                    /**< \f$M_{J} \ (kg)\f$ Volumetric mean radius of Jupiter in meters. See NASA, Jet Propulsion Laboratory, Horizon for data https://ssd.jpl.nasa.gov/horizons.cgi . Accessed 7/16/18. Also see https://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html */

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

    /// @addtogroup EGXPhys-Constants-Astrophysics-SolarSystem-Mercury-Orbit
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


