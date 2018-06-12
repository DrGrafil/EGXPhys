/// @file EGXMath/Conversions/LengthConversions/SI/ZeptometerConversion.hpp
///
/// @brief Converts length measurements in zeptometers into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Zeptometer Zeptometer
/// @ingroup EGXMath-Conversions-LengthConversions-SI

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Zeptometer-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Zeptometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Zeptometer-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Zeptometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Zeptometer-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Zeptometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Zeptometer-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Zeptometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Zeptometer-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Zeptometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Zeptometer-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Zeptometer

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-SI-Zeptometer-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in zeptometers to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{zm} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T ZeptometerToAstronomicalUnit(const T lengthInZeptometer);

    /**
    *   @brief Converts a length zeptometers in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{zm} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T ZeptometerToLightYear(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{zm} * 10^{-21}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T ZeptometerToParsec(const T lengthInZeptometer);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Zeptometer-SI
    /// @{
    /**
    *   @brief Converts a length in zeptometers to meters.
    *		\f[ l_{m}=l_{zm} * 10^{-21} \f]
    *
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T ZeptometerToMeter(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to yottameters.
    *		\f[ l_{Ym}=l_{zm} * 10^{-45} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T ZeptometerToYottameter(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to zettameters.
    *		\f[ l_{Zm}=l_{zm} * 10^{-42} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T ZeptometerToZettameter(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to exameters.
    *		\f[ l_{Em}=l_{zm} * 10^{-39} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T ZeptometerToExameter(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to petameters.
    *		\f[ l_{Pm}=l_{zm} * 10^{-36} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T ZeptometerToPetameter(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to terameters.
    *		\f[ l_{Tm}=l_{zm} * 10^{-33} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T ZeptometerToTerameter(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to gigameters.
    *		\f[ l_{Gm}=l_{zm} * 10^{-30} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T ZeptometerToGigameter(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to megameters.
    *		\f[ l_{Mm}=l_{zm} * 10^{-27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T ZeptometerToMegameter(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to kilometers.
    *		\f[ l_{km}=l_{zm} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T ZeptometerToKilometer(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to hectometers.
    *		\f[ l_{hm}=l_{zm} * 10^{-23} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T ZeptometerToHectometer(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to decameters.
    *		\f[ l_{dam}=l_{zm} * 10^{-22} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T ZeptometerToDecameter(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to decimeters.
    *		\f[ l_{dm}=l_{zm} * 10^{-20} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T ZeptometerToDecimeter(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to centimeters.
    *		\f[ l_{cm}=l_{zm} * 10^{-19} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T ZeptometerToCentimeter(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to millimeters.
    *		\f[ l_{mm}=l_{zm} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T ZeptometerToMillimeter(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to micrometers.
    *		\f[ l_{\mu m}=l_{zm} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see ZeptometerToMicron() for alias.
    */
    template<typename T>
    T ZeptometerToMicrometer(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to nanometers.
    *		\f[ l_{nm}=l_{zm} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see ZeptometerToMicron() for alias.
    */
    template<typename T>
    T ZeptometerToNanometer(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to picometers.
    *		\f[ l_{pm}=l_{zm} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see ZeptometerToAngstrom() for angstrom conversion.
    *   @see ZeptometerToCuXUnit() for copper x unit conversion.
    *   @see ZeptometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ZeptometerToPicometer(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to femtometers.
    *		\f[ l_{fm}=l_{zm} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see ZeptometerToFermi() for alias.
    */
    template<typename T>
    T ZeptometerToFemtometer(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to attometers.
    *		\f[ l_{am}=l_{zm} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T ZeptometerToAttometer(const T lengthInZeptometer);


    /**
    *   @brief Converts a length in zeptometers to yoctometers.
    *		\f[ l_{ym}=l_{zm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T ZeptometerToYoctometer(const T lengthInZeptometer);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Zeptometer-Non-SI
    /// @{

    /**
    *   @brief Converts a length in zeptometers to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{zm} * 10^{-11} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see ZeptometerToPicometer() for picometer conversion.
    *   @see ZeptometerToCuXUnit() for copper x unit conversion.
    *   @see ZeptometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ZeptometerToAngstrom(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to fermis.
    *		\f[ l_{fm}=l_{zm} * 10^{-6} \f]
    *
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T ZeptometerToFermi(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to microns.
    *		\f[ l_{\mu m}=l_{zm} * 10^{-15} \f]
    *
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see ZeptometerToMicrometer() for alias.
    */
    template<typename T>
    T ZeptometerToMicron(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{zm} * 10^{-21}\f]
    *
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see ZeptometerToAngstrom() for angstrom conversion.
    *   @see ZeptometerToPicometer() for picometer conversion.
    *   @see ZeptometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ZeptometerToCuXUnit(const T lengthInZeptometer);
   
    /**
    *   @brief Converts a length in zeptometers to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{zm} * 10^{-21}\f]
    *
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see ZeptometerToAngstrom() for angstrom conversion.
    *   @see ZeptometerToPicometer() for picometer conversion.
    *   @see ZeptometerToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T ZeptometerToMoXUnit(const T lengthInZeptometer);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Zeptometer-Imperial
    /// @{

    /**
    *   @brief Converts a length in zeptometers to miles.
    *		\f[ l_{mi}=\frac{10^{-21}}{0.0254 * 63360} l_{zm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T ZeptometerToMile(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to yards.
    *		\f[ l_{yd}=  \frac{10^{-21}}{0.0254 * 36} l_{zm}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T ZeptometerToYard(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to feet.
    *		\f[ l_{ft}= \frac{10^{-21}}{0.0254 * 12} l_{zm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T ZeptometerToFoot(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to inches.
    *		\f[ l_{in}=  \frac{10^{-21}}{0.0254} l_{zm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T ZeptometerToInch(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-21}}{0.0254} l_{zm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see ZeptometerToThou() for alias.
    */
    template<typename T>
    T ZeptometerToMil(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-21}}{0.0254} l_{zm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see ZeptometerToMil() for alias.
    */
    template<typename T>
    T ZeptometerToThou(const T lengthInZeptometer);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Zeptometer-Nautical
    /// @{

    /**
    *   @brief Converts a length in zeptometers to nautical mile.
    *		\f[ l_{NM}= \frac{10^{-21}}{1852} l_{zm}  \f]
    *
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T ZeptometerToNauticalMile(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to fathoms.
    *		\f[ l_{fathom}= \frac{10^{-21}}{0.0254 * 72} l_{zm}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T ZeptometerToFathom(const T lengthInZeptometer);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Zeptometer-Surveyors
    /// @{

    /**
    *   @brief Converts a length in zeptometers to rods.
    *		\f[ l_{rod}= \frac{10^{-21}}{0.0254 * 198} l_{zm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T ZeptometerToRod(const T lengthInZeptometer);

    /**
    *   @brief Converts a length in zeptometers to chains.
    *		\f[ l_{ch}= \frac{10^{-21}}{0.0254 * 792}  l_{zm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInZeptometer \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T ZeptometerToChain(const T lengthInZeptometer);

	/// @}
} //namespace EGXMath

#include "ZeptometerConversion.inl"
