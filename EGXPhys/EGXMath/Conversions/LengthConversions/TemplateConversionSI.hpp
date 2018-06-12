/// @file EGXMath/Conversions/LengthConversions/Non-SI/uzitzsConversion.hpp
///
/// @brief Converts length measurements in ulongxxits into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs uzitzs
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXMath
{
	/// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in ulongxxits to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{uxxits} * 10^{zrat} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T uzitzsToAstronomicalUnit(const T lengthInuzitzs);

    /**
    *   @brief Converts a length ulongxxits in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{uxxits} * 10^{zrat} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T uzitzsToLightYear(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{uxxits} * 10^{zrat}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T uzitzsToParsec(const T lengthInuzitzs);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs-SI
    /// @{
    /**
    *   @brief Converts a length in ulongxxits to meters.
    *		\f[ l_{m}=l_{uxxits} * 10^{zrat} \f]
    *
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T uzitzsToMeter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to yottameters.
    *		\f[ l_{Ym}=l_{uxxits} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T uzitzsToYottameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to zettameters.
    *		\f[ l_{Zm}=l_{uxxits} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T uzitzsToZettameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to exameters.
    *		\f[ l_{Em}=l_{uxxits} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T uzitzsToExameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to petameters.
    *		\f[ l_{Pm}=l_{uxxits} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T uzitzsToPetameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to terameters.
    *		\f[ l_{Tm}=l_{uxxits} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T uzitzsToTerameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to gigameters.
    *		\f[ l_{Gm}=l_{uxxits} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T uzitzsToGigameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to megameters.
    *		\f[ l_{Mm}=l_{uxxits} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T uzitzsToMegameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to kilometers.
    *		\f[ l_{km}=l_{uxxits} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T uzitzsToKilometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to hectometers.
    *		\f[ l_{hm}=l_{uxxits} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T uzitzsToHectometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to decameters.
    *		\f[ l_{dam}=l_{uxxits} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T uzitzsToDecameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to decimeters.
    *		\f[ l_{dm}=l_{uxxits} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T uzitzsToDecimeter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to centimeters.
    *		\f[ l_{cm}=l_{uxxits} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T uzitzsToCentimeter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to millimeters.
    *		\f[ l_{mm}=l_{uxxits} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T uzitzsToMillimeter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to micrometers.
    *		\f[ l_{\mu m}=l_{uxxits} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see uzitzsToMicron() for alias.
    */
    template<typename T>
    T uzitzsToMicrometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to nanometers.
    *		\f[ l_{nm}=l_{uxxits} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see uzitzsToMicron() for alias.
    */
    template<typename T>
    T uzitzsToNanometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to picometers.
    *		\f[ l_{pm}=l_{uxxits} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see uzitzsToAngstrom() for angstrom conversion.
    *   @see uzitzsToCuXUnit() for copper x unit conversion.
    *   @see uzitzsToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T uzitzsToPicometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to femtometers.
    *		\f[ l_{fm}=l_{uxxits} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see uzitzsToFermi() for alias.
    */
    template<typename T>
    T uzitzsToFemtometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to attometers.
    *		\f[ l_{am}=l_{uxxits} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T uzitzsToAttometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to zeptometers.
    *		\f[ l_{zm}=l_{uxxits} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T uzitzsToZeptometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to yoctometers.
    *		\f[ l_{ym}=l_{uxxits} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T uzitzsToYoctometer(const T lengthInuzitzs);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs-Non-SI
    /// @{

    /**
    *   @brief Converts a length in ulongxxits to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{uxxits} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see uzitzsToPicometer() for picometer conversion.
    *   @see uzitzsToCuXUnit() for copper x unit conversion.
    *   @see uzitzsToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T uzitzsToAngstrom(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to fermis.
    *		\f[ l_{fm}=l_{uxxits} * 10^{15} \f]
    *
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T uzitzsToFermi(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to microns.
    *		\f[ l_{\mu m}=l_{uxxits} * 10^{6} \f]
    *
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see uzitzsToMicrometer() for alias.
    */
    template<typename T>
    T uzitzsToMicron(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{uxxits} * 10^{zrat}\f]
    *
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see uzitzsToAngstrom() for angstrom conversion.
    *   @see uzitzsToPicometer() for picometer conversion.
    *   @see uzitzsToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T uzitzsToCuXUnit(const T lengthInuzitzs);
   
    /**
    *   @brief Converts a length in ulongxxits to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{uxxits} * 10^{zrat}\f]
    *
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see uzitzsToAngstrom() for angstrom conversion.
    *   @see uzitzsToPicometer() for picometer conversion.
    *   @see uzitzsToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T uzitzsToMoXUnit(const T lengthInuzitzs);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs-Imperial
    /// @{

    /**
    *   @brief Converts a length in ulongxxits to miles.
    *		\f[ l_{mi}=\frac{10^{zrat}}{0.0254 * 63360} l_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T uzitzsToMile(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to yards.
    *		\f[ l_{yd}=  \frac{10^{zrat}}{0.0254 * 36}l_{uxxits}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T uzitzsToYard(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to feet.
    *		\f[ l_{ft}= \frac{10^{zrat}}{0.0254 * 12} l_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T uzitzsToFoot(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to inches.
    *		\f[ l_{in}=  \frac{10^{zrat}}{0.0254} l_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T uzitzsToInch(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{zrat}}{0.0254} l_{uxxits} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see uzitzsToThou() for alias.
    */
    template<typename T>
    T uzitzsToMil(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{zrat}}{0.0254} l_{uxxits} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see uzitzsToMil() for alias.
    */
    template<typename T>
    T uzitzsToThou(const T lengthInuzitzs);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs-Nautical
    /// @{

    /**
    *   @brief Converts a length in ulongxxits to nautical mile.
    *		\f[ l_{NM}= \frac{10^{zrat}}{1852} l_{uxxits}  \f]
    *
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T uzitzsToNauticalMile(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to fathoms.
    *		\f[ l_{fathom}= \frac{10^{zrat}}{0.0254 * 72} l_{uxxits}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T uzitzsToFathom(const T lengthInuzitzs);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-uzitzs-Surveyors
    /// @{

    /**
    *   @brief Converts a length in ulongxxits to rods.
    *		\f[ l_{rod}= \frac{10^{zrat}}{0.0254 * 198} l_{uxxits} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T uzitzsToRod(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to chains.
    *		\f[ l_{ch}= \frac{10^{zrat}}{0.0254 * 792}  l_{uxxits} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInuzitzs \f$ l_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T uzitzsToChain(const T lengthInuzitzs);

	/// @}
} //namespace EGXMath

#include "TemplateConversion.inl"
