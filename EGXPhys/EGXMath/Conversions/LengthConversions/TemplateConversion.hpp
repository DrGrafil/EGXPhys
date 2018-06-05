/// @file EGXMath/Conversions/LengthConversions/uzitzsConversion.hpp
///
/// @brief Converts length measurements in uzitzs into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/1/18

/// @defgroup EGXMath-Conversions-LengthConversions-uzitzs uzitzs
/// @ingroup EGXMath-Conversions-LengthConversions

/// @defgroup EGXMath-Conversions-LengthConversions-uzitzs-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-uzitzs

/// @defgroup EGXMath-Conversions-LengthConversions-uzitzs-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-uzitzs

/// @defgroup EGXMath-Conversions-LengthConversions-uzitzs-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-uzitzs

/// @defgroup EGXMath-Conversions-LengthConversions-uzitzs-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-uzitzs

/// @defgroup EGXMath-Conversions-LengthConversions-uzitzs-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-uzitzs

/// @defgroup EGXMath-Conversions-LengthConversions-uzitzs-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-uzitzs

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-uzitzs-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in ulongxxits to astronomical units.
    *		\f[ d_{au}=  \frac{1}{149597870700} d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T uzitzsToAstronomicalUnit(const T lengthInuzitzs);

    /**
    *   @brief Converts a length ulongxxits in to light-years.
    *		\f[ d_{ly}= \frac{1}{9460730472580800} d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T uzitzsToLightYear(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to parsecs.
    *		\f[ d_{pc}=\frac{\pi}{149597870700 * 648000} d_{uxxits}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T uzitzsToParsec(const T lengthInuzitzs);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-uzitzs-SI
    /// @{
    /**
    *   @brief Converts a length in ulongxxits to meters.
    *		\f[ d_{m}=d_{uxxits} \f]
    *
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T uzitzsToMeter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to yottameters.
    *		\f[ d_{Ym}=d_{uxxits} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T uzitzsToYottameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to zettameters.
    *		\f[ d_{Zm}=d_{uxxits} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T uzitzsToZettameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to exameters.
    *		\f[ d_{Em}=d_{uxxits} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T uzitzsToExameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to petameters.
    *		\f[ d_{Pm}=d_{uxxits} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T uzitzsToPetameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to terameters.
    *		\f[ d_{Tm}=d_{uxxits} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T uzitzsToTerameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to gigameters.
    *		\f[ d_{Gm}=d_{uxxits} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T uzitzsToGigameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to megameters.
    *		\f[ d_{Mm}=d_{uxxits} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T uzitzsToMegameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to kilometers.
    *		\f[ d_{km}=d_{uxxits} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T uzitzsToKilometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to hectometers.
    *		\f[ d_{hm}=d_{uxxits} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T uzitzsToHectometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to decameters.
    *		\f[ d_{dam}=d_{uxxits} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T uzitzsToDecameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to decimeters.
    *		\f[ d_{dm}=d_{uxxits} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T uzitzsToDecimeter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to centimeters.
    *		\f[ d_{cm}=d_{uxxits} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T uzitzsToCentimeter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to millimeters.
    *		\f[ d_{m}=d_{uxxits} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T uzitzsToMillimeter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to micrometers.
    *		\f[ d_{\mu m}=d_{uxxits} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see uzitzsToMicron() for alias.
    */
    template<typename T>
    T uzitzsToMicrometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to nanometers.
    *		\f[ d_{nm}=d_{uxxits} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{nm}\ (nm)\f$ Length in nanometers.
    *   @see uzitzsToMicron() for alias.
    */
    template<typename T>
    T uzitzsToNanometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to picometers.
    *		\f[ d_{pm}=d_{uxxits} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{pm}\ (pm)\f$ Length in picometers.
    *   @see uzitzsToAngstrom() for angstrom conversion.
    *   @see uzitzsToCuXUnit() for copper x unit conversion.
    *   @see uzitzsToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T uzitzsToPicometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to femtometers.
    *		\f[ d_{fm}=d_{uxxits} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{fm}\ (fm)\f$ Length in femtometers.
    *   @see uzitzsToFermi() for alias.
    */
    template<typename T>
    T uzitzsToFemtometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to attometers.
    *		\f[ d_{am}=d_{uxxits} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T uzitzsToAttometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to zeptometers.
    *		\f[ d_{zm}=d_{uxxits} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T uzitzsToZeptometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to Yoctometers.
    *		\f[ d_{ym}=d_{uxxits} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T uzitzsToYoctometer(const T lengthInuzitzs);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-uzitzs-Non-SI
    /// @{

    /**
    *   @brief Converts a length in ulongxxits to angstroms.
    *		\f[ d_{\unicode{x212B}}=d_{uxxits} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see uzitzsToPicometer() for picometer conversion.
    *   @see uzitzsToCuXUnit() for copper x unit conversion.
    *   @see uzitzsToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T uzitzsToAngstrom(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to fermis.
    *		\f[ d_{fm}=d_{uxxits} * 10^{15} \f]
    *
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T uzitzsToFermi(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to microns.
    *		\f[ d_{\mu m}=d_{uxxits} * 10^{6} \f]
    *
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see uzitzsToMicrometer() for alias.
    */
    template<typename T>
    T uzitzsToMicron(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to copper x units.
    *		\f[ d_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} d_{uxxits} \f]
    *
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see uzitzsToAngstrom() for angstrom conversion.
    *   @see uzitzsToPicometer() for picometer conversion.
    *   @see uzitzsToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T uzitzsToCuXUnit(const T lengthInuzitzs);
   
    /**
    *   @brief Converts a length in ulongxxits to molybdenum x units.
    *		\f[ d_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} d_{uxxits} /  \f]
    *
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see uzitzsToAngstrom() for angstrom conversion.
    *   @see uzitzsToPicometer() for picometer conversion.
    *   @see uzitzsToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T uzitzsToMoXUnit(const T lengthInuzitzs);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-uzitzs-Imperial
    /// @{

    /**
    *   @brief Converts a length in ulongxxits to miles.
    *		\f[ d_{mi}=\frac{1}{63360} d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T uzitzsToMile(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to yards.
    *		\f[ d_{yd}= \frac{1}{36} d_{uxxits}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T uzitzsToYard(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to feet.
    *		\f[ d_{ft}= \frac{1}{12} d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T uzitzsToFoot(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to inches.
    *		\f[ d_{in}=d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T uzitzsToInch(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to mils (thousandth of an inch).
    *		\f[ d_{mil}=d_{uxxits} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see uzitzsToThou() for alias.
    */
    template<typename T>
    T uzitzsToMil(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to thous (thousandth of an inch).
    *		\f[ d_{mil}=d_{uxxits} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see uzitzsToMil() for alias.
    */
    template<typename T>
    T uzitzsToThou(const T lengthInuzitzs);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-uzitzs-Nautical
    /// @{

    /**
    *   @brief Converts a length in ulongxxits to nautical mile.
    *		\f[ d_{NM}= \frac{1}{1852} d_{uxxits}  \f]
    *
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T uzitzsToNauticalMile(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to fathoms.
    *		\f[ d_{fathom}= \frac{1}{72} d_{uxxits}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T uzitzsToFathom(const T lengthInuzitzs);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-uzitzs-Surveyors
    /// @{

    /**
    *   @brief Converts a length in ulongxxits to rods.
    *		\f[ d_{rod}= \frac{1}{198} d_{uxxits} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T uzitzsToRod(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to chains.
    *		\f[ d_{ch}= \frac{1}{792} d_{uxxits} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInuzitzs \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T uzitzsToChain(const T lengthInuzitzs);

	/// @}
} //namespace EGXMath

#include "TemplateConversion.inl"
