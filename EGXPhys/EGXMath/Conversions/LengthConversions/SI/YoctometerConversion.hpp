/// @file EGXMath/Conversions/LengthConversions/SI/YoctometerConversion.hpp
///
/// @brief Converts length measurements in yoctometers into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Yoctometer Yoctometer
/// @ingroup EGXMath-Conversions-LengthConversions

/// @defgroup EGXMath-Conversions-LengthConversions-Yoctometer-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Yoctometer

/// @defgroup EGXMath-Conversions-LengthConversions-Yoctometer-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Yoctometer

/// @defgroup EGXMath-Conversions-LengthConversions-Yoctometer-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Yoctometer

/// @defgroup EGXMath-Conversions-LengthConversions-Yoctometer-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Yoctometer

/// @defgroup EGXMath-Conversions-LengthConversions-Yoctometer-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Yoctometer

/// @defgroup EGXMath-Conversions-LengthConversions-Yoctometer-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Yoctometer

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Yoctometer-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in yoctometers to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{ym} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T YoctometerToAstronomicalUnit(const T lengthInYoctometer);

    /**
    *   @brief Converts a length yoctometers in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{ym} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T YoctometerToLightYear(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{ym} * 10^{-24}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T YoctometerToParsec(const T lengthInYoctometer);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Yoctometer-SI
    /// @{
    /**
    *   @brief Converts a length in yoctometers to meters.
    *		\f[ l_{m}=l_{ym} * 10^{-24} \f]
    *
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T YoctometerToMeter(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to yottameters.
    *		\f[ l_{Ym}=l_{ym} * 10^{-48} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T YoctometerToYottameter(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to zettameters.
    *		\f[ l_{Zm}=l_{ym} * 10^{-45} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T YoctometerToZettameter(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to exameters.
    *		\f[ l_{Em}=l_{ym} * 10^{-42} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T YoctometerToExameter(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to petameters.
    *		\f[ l_{Pm}=l_{ym} * 10^{-39} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T YoctometerToPetameter(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to terameters.
    *		\f[ l_{Tm}=l_{ym} * 10^{-36} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T YoctometerToTerameter(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to gigameters.
    *		\f[ l_{Gm}=l_{ym} * 10^{-33} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T YoctometerToGigameter(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to megameters.
    *		\f[ l_{Mm}=l_{ym} * 10^{-30} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T YoctometerToMegameter(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to kilometers.
    *		\f[ l_{km}=l_{ym} * 10^{-27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T YoctometerToKilometer(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to hectometers.
    *		\f[ l_{hm}=l_{ym} * 10^{-26} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T YoctometerToHectometer(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to decameters.
    *		\f[ l_{dam}=l_{ym} * 10^{-25} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T YoctometerToDecameter(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to decimeters.
    *		\f[ l_{dm}=l_{ym} * 10^{-23} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T YoctometerToDecimeter(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to centimeters.
    *		\f[ l_{cm}=l_{ym} * 10^{-22} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T YoctometerToCentimeter(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to millimeters.
    *		\f[ l_{mm}=l_{ym} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T YoctometerToMillimeter(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to micrometers.
    *		\f[ l_{\mu m}=l_{ym} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see YoctometerToMicron() for alias.
    */
    template<typename T>
    T YoctometerToMicrometer(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to nanometers.
    *		\f[ l_{nm}=l_{ym} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see YoctometerToMicron() for alias.
    */
    template<typename T>
    T YoctometerToNanometer(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to picometers.
    *		\f[ l_{pm}=l_{ym} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see YoctometerToAngstrom() for angstrom conversion.
    *   @see YoctometerToCuXUnit() for copper x unit conversion.
    *   @see YoctometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T YoctometerToPicometer(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to femtometers.
    *		\f[ l_{fm}=l_{ym} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see YoctometerToFermi() for alias.
    */
    template<typename T>
    T YoctometerToFemtometer(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to attometers.
    *		\f[ l_{am}=l_{ym} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T YoctometerToAttometer(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to zeptometers.
    *		\f[ l_{zm}=l_{ym} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T YoctometerToZeptometer(const T lengthInYoctometer);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Yoctometer-Non-SI
    /// @{

    /**
    *   @brief Converts a length in yoctometers to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{ym} * 10^{-14} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see YoctometerToPicometer() for picometer conversion.
    *   @see YoctometerToCuXUnit() for copper x unit conversion.
    *   @see YoctometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T YoctometerToAngstrom(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to fermis.
    *		\f[ l_{fm}=l_{ym} * 10^{-9} \f]
    *
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T YoctometerToFermi(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to microns.
    *		\f[ l_{\mu m}=l_{ym} * 10^{-18} \f]
    *
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see YoctometerToMicrometer() for alias.
    */
    template<typename T>
    T YoctometerToMicron(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{ym} * 10^{-24}\f]
    *
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see YoctometerToAngstrom() for angstrom conversion.
    *   @see YoctometerToPicometer() for picometer conversion.
    *   @see YoctometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T YoctometerToCuXUnit(const T lengthInYoctometer);
   
    /**
    *   @brief Converts a length in yoctometers to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{ym} * 10^{-24}\f]
    *
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see YoctometerToAngstrom() for angstrom conversion.
    *   @see YoctometerToPicometer() for picometer conversion.
    *   @see YoctometerToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T YoctometerToMoXUnit(const T lengthInYoctometer);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Yoctometer-Imperial
    /// @{

    /**
    *   @brief Converts a length in yoctometers to miles.
    *		\f[ l_{mi}=\frac{10^{-24}}{0.0254 * 63360} l_{ym} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T YoctometerToMile(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to yards.
    *		\f[ l_{yd}=  \frac{10^{-24}}{0.0254 * 36} \frac{1}{36} l_{ym}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T YoctometerToYard(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to feet.
    *		\f[ l_{ft}= \frac{10^{-24}}{0.0254 * 12} l_{ym} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T YoctometerToFoot(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to inches.
    *		\f[ l_{in}=  \frac{10^{-24}}{0.0254} l_{ym} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T YoctometerToInch(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-24}}{0.0254} l_{ym} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see YoctometerToThou() for alias.
    */
    template<typename T>
    T YoctometerToMil(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-24}}{0.0254} l_{ym} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see YoctometerToMil() for alias.
    */
    template<typename T>
    T YoctometerToThou(const T lengthInYoctometer);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Yoctometer-Nautical
    /// @{

    /**
    *   @brief Converts a length in yoctometers to nautical mile.
    *		\f[ l_{NM}= \frac{10^{-24}}{0.0254 * 1852} l_{ym}  \f]
    *
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T YoctometerToNauticalMile(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to fathoms.
    *		\f[ l_{fathom}= \frac{10^{-24}}{0.0254 * 72} l_{ym}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T YoctometerToFathom(const T lengthInYoctometer);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Yoctometer-Surveyors
    /// @{

    /**
    *   @brief Converts a length in yoctometers to rods.
    *		\f[ l_{rod}= \frac{10^{-24}}{0.0254 * 198} l_{ym} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T YoctometerToRod(const T lengthInYoctometer);

    /**
    *   @brief Converts a length in yoctometers to chains.
    *		\f[ l_{ch}= \frac{10^{-24}}{0.0254 * 792}  l_{ym} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInYoctometer \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T YoctometerToChain(const T lengthInYoctometer);

	/// @}
} //namespace EGXMath

#include "YoctometerConversion.inl"
