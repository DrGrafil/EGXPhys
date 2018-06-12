/// @file EGXMath/Conversions/LengthConversions/Non-SI/MicronConversion.hpp
///
/// @brief Converts length measurements in microns into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Micron Micron
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Micron-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Micron

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Micron-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Micron

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Micron-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Micron

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Micron-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Micron

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Micron-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Micron

/// @defgroup EGXMath-Conversions-LengthConversions-Non-SI-Micron-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Non-SI-Micron

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Micron-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in microns to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{\mu m} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T MicronToAstronomicalUnit(const T lengthInMicron);

    /**
    *   @brief Converts a length microns in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{\mu m} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T MicronToLightYear(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{\mu m} * 10^{-6}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T MicronToParsec(const T lengthInMicron);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Micron-SI
    /// @{
    /**
    *   @brief Converts a length in microns to meters.
    *		\f[ l_{m}=l_{\mu m} * 10^{-6} \f]
    *
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T MicronToMeter(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to yottameters.
    *		\f[ l_{Ym}=l_{\mu m} * 10^{-30} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T MicronToYottameter(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to zettameters.
    *		\f[ l_{Zm}=l_{\mu m} * 10^{-27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T MicronToZettameter(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to exameters.
    *		\f[ l_{Em}=l_{\mu m} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T MicronToExameter(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to petameters.
    *		\f[ l_{Pm}=l_{\mu m} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T MicronToPetameter(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to terameters.
    *		\f[ l_{Tm}=l_{\mu m} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T MicronToTerameter(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to gigameters.
    *		\f[ l_{Gm}=l_{\mu m} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T MicronToGigameter(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to megameters.
    *		\f[ l_{Mm}=l_{\mu m} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T MicronToMegameter(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to kilometers.
    *		\f[ l_{km}=l_{\mu m} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T MicronToKilometer(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to hectometers.
    *		\f[ l_{hm}=l_{\mu m} * 10^{-8} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T MicronToHectometer(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to decameters.
    *		\f[ l_{dam}=l_{\mu m} * 10^{-7} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T MicronToDecameter(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to decimeters.
    *		\f[ l_{dm}=l_{\mu m} * 10^{-5} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T MicronToDecimeter(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to centimeters.
    *		\f[ l_{cm}=l_{\mu m} * 10^{-4} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T MicronToCentimeter(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to millimeters.
    *		\f[ l_{mm}=l_{\mu m} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T MicronToMillimeter(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to micrometers.
    *		\f[ l_{\mu m}=l_{\mu m} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    */
    template<typename T>
    T MicronToMicrometer(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to nanometers.
    *		\f[ l_{nm}=l_{\mu m} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see MicronToMicron() for alias.
    */
    template<typename T>
    T MicronToNanometer(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to picometers.
    *		\f[ l_{pm}=l_{\mu m} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see MicronToAngstrom() for angstrom conversion.
    *   @see MicronToCuXUnit() for copper x unit conversion.
    *   @see MicronToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MicronToPicometer(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to femtometers.
    *		\f[ l_{fm}=l_{\mu m} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see MicronToFermi() for alias.
    */
    template<typename T>
    T MicronToFemtometer(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to attometers.
    *		\f[ l_{am}=l_{\mu m} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T MicronToAttometer(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to zeptometers.
    *		\f[ l_{zm}=l_{\mu m} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T MicronToZeptometer(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to yoctometers.
    *		\f[ l_{ym}=l_{\mu m} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T MicronToYoctometer(const T lengthInMicron);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Micron-Non-SI
    /// @{

    /**
    *   @brief Converts a length in microns to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{\mu m} * 10^{4} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see MicronToPicometer() for picometer conversion.
    *   @see MicronToCuXUnit() for copper x unit conversion.
    *   @see MicronToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MicronToAngstrom(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to fermis.
    *		\f[ l_{fm}=l_{\mu m} * 10^{9} \f]
    *
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T MicronToFermi(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{\mu m} * 10^{-6}\f]
    *
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see MicronToAngstrom() for angstrom conversion.
    *   @see MicronToPicometer() for picometer conversion.
    *   @see MicronToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MicronToCuXUnit(const T lengthInMicron);
   
    /**
    *   @brief Converts a length in microns to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{\mu m} * 10^{-6}\f]
    *
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see MicronToAngstrom() for angstrom conversion.
    *   @see MicronToPicometer() for picometer conversion.
    *   @see MicronToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T MicronToMoXUnit(const T lengthInMicron);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Micron-Imperial
    /// @{

    /**
    *   @brief Converts a length in microns to miles.
    *		\f[ l_{mi}=\frac{10^{-6}}{0.0254 * 63360} l_{\mu m} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T MicronToMile(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to yards.
    *		\f[ l_{yd}=  \frac{10^{-6}}{0.0254 * 36} l_{\mu m}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T MicronToYard(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to feet.
    *		\f[ l_{ft}= \frac{10^{-6}}{0.0254 * 12} l_{\mu m} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T MicronToFoot(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to inches.
    *		\f[ l_{in}=  \frac{10^{-6}}{0.0254} l_{\mu m} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T MicronToInch(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-6}}{0.0254} l_{\mu m} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see MicronToThou() for alias.
    */
    template<typename T>
    T MicronToMil(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-6}}{0.0254} l_{\mu m} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see MicronToMil() for alias.
    */
    template<typename T>
    T MicronToThou(const T lengthInMicron);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Micron-Nautical
    /// @{

    /**
    *   @brief Converts a length in microns to nautical mile.
    *		\f[ l_{NM}= \frac{10^{-6}}{1852} l_{\mu m}  \f]
    *
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T MicronToNauticalMile(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to fathoms.
    *		\f[ l_{fathom}= \frac{10^{-6}}{0.0254 * 72} l_{\mu m}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T MicronToFathom(const T lengthInMicron);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Non-SI-Micron-Surveyors
    /// @{

    /**
    *   @brief Converts a length in microns to rods.
    *		\f[ l_{rod}= \frac{10^{-6}}{0.0254 * 198} l_{\mu m} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T MicronToRod(const T lengthInMicron);

    /**
    *   @brief Converts a length in microns to chains.
    *		\f[ l_{ch}= \frac{10^{-6}}{0.0254 * 792}  l_{\mu m} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInMicron \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T MicronToChain(const T lengthInMicron);

	/// @}
} //namespace EGXMath

#include "MicronConversion.inl"
