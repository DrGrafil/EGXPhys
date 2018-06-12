/// @file EGXMath/Conversions/LengthConversions/SI/PicometerConversion.hpp
///
/// @brief Converts length measurements in picometers into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Picometer Picometer
/// @ingroup EGXMath-Conversions-LengthConversions-SI

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Picometer-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Picometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Picometer-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Picometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Picometer-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Picometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Picometer-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Picometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Picometer-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Picometer

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Picometer-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Picometer

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-SI-Picometer-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in picometers to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{pm} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T PicometerToAstronomicalUnit(const T lengthInPicometer);

    /**
    *   @brief Converts a length picometers in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{pm} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T PicometerToLightYear(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{pm} * 10^{-12}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T PicometerToParsec(const T lengthInPicometer);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Picometer-SI
    /// @{
    /**
    *   @brief Converts a length in picometers to meters.
    *		\f[ l_{m}=l_{pm} * 10^{-12} \f]
    *
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T PicometerToMeter(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to yottameters.
    *		\f[ l_{Ym}=l_{pm} * 10^{-36} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T PicometerToYottameter(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to zettameters.
    *		\f[ l_{Zm}=l_{pm} * 10^{-33} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T PicometerToZettameter(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to exameters.
    *		\f[ l_{Em}=l_{pm} * 10^{-30} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T PicometerToExameter(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to petameters.
    *		\f[ l_{Pm}=l_{pm} * 10^{-27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T PicometerToPetameter(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to terameters.
    *		\f[ l_{Tm}=l_{pm} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T PicometerToTerameter(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to gigameters.
    *		\f[ l_{Gm}=l_{pm} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T PicometerToGigameter(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to megameters.
    *		\f[ l_{Mm}=l_{pm} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T PicometerToMegameter(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to kilometers.
    *		\f[ l_{km}=l_{pm} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T PicometerToKilometer(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to hectometers.
    *		\f[ l_{hm}=l_{pm} * 10^{-14} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T PicometerToHectometer(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to decameters.
    *		\f[ l_{dam}=l_{pm} * 10^{-13} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T PicometerToDecameter(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to decimeters.
    *		\f[ l_{dm}=l_{pm} * 10^{-11} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T PicometerToDecimeter(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to centimeters.
    *		\f[ l_{cm}=l_{pm} * 10^{-10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T PicometerToCentimeter(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to millimeters.
    *		\f[ l_{mm}=l_{pm} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T PicometerToMillimeter(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to micrometers.
    *		\f[ l_{\mu m}=l_{pm} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see PicometerToMicron() for alias.
    */
    template<typename T>
    T PicometerToMicrometer(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to nanometers.
    *		\f[ l_{nm}=l_{pm} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see PicometerToMicron() for alias.
    */
    template<typename T>
    T PicometerToNanometer(const T lengthInPicometer);


    /**
    *   @brief Converts a length in picometers to femtometers.
    *		\f[ l_{fm}=l_{pm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see PicometerToFermi() for alias.
    */
    template<typename T>
    T PicometerToFemtometer(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to attometers.
    *		\f[ l_{am}=l_{pm} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T PicometerToAttometer(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to zeptometers.
    *		\f[ l_{zm}=l_{pm} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T PicometerToZeptometer(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to yoctometers.
    *		\f[ l_{ym}=l_{pm} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T PicometerToYoctometer(const T lengthInPicometer);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Picometer-Non-SI
    /// @{

    /**
    *   @brief Converts a length in picometers to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{pm} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see PicometerToCuXUnit() for copper x unit conversion.
    *   @see PicometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T PicometerToAngstrom(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to fermis.
    *		\f[ l_{fm}=l_{pm} * 10^{3} \f]
    *
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T PicometerToFermi(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to microns.
    *		\f[ l_{\mu m}=l_{pm} * 10^{-6} \f]
    *
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see PicometerToMicrometer() for alias.
    */
    template<typename T>
    T PicometerToMicron(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{pm} * 10^{-12}\f]
    *
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see PicometerToAngstrom() for angstrom conversion.
    *   @see PicometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T PicometerToCuXUnit(const T lengthInPicometer);
   
    /**
    *   @brief Converts a length in picometers to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{pm} * 10^{-12}\f]
    *
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see PicometerToAngstrom() for angstrom conversion.
    *   @see PicometerToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T PicometerToMoXUnit(const T lengthInPicometer);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Picometer-Imperial
    /// @{

    /**
    *   @brief Converts a length in picometers to miles.
    *		\f[ l_{mi}=\frac{10^{-12}}{0.0254 * 63360} l_{pm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T PicometerToMile(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to yards.
    *		\f[ l_{yd}=  \frac{10^{-12}}{0.0254 * 36} l_{pm}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T PicometerToYard(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to feet.
    *		\f[ l_{ft}= \frac{10^{-12}}{0.0254 * 12} l_{pm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T PicometerToFoot(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to inches.
    *		\f[ l_{in}=  \frac{10^{-12}}{0.0254} l_{pm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T PicometerToInch(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-12}}{0.0254} l_{pm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see PicometerToThou() for alias.
    */
    template<typename T>
    T PicometerToMil(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-12}}{0.0254} l_{pm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see PicometerToMil() for alias.
    */
    template<typename T>
    T PicometerToThou(const T lengthInPicometer);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Picometer-Nautical
    /// @{

    /**
    *   @brief Converts a length in picometers to nautical mile.
    *		\f[ l_{NM}= \frac{10^{-12}}{1852} l_{pm}  \f]
    *
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T PicometerToNauticalMile(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to fathoms.
    *		\f[ l_{fathom}= \frac{10^{-12}}{0.0254 * 72} l_{pm}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T PicometerToFathom(const T lengthInPicometer);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Picometer-Surveyors
    /// @{

    /**
    *   @brief Converts a length in picometers to rods.
    *		\f[ l_{rod}= \frac{10^{-12}}{0.0254 * 198} l_{pm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T PicometerToRod(const T lengthInPicometer);

    /**
    *   @brief Converts a length in picometers to chains.
    *		\f[ l_{ch}= \frac{10^{-12}}{0.0254 * 792}  l_{pm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInPicometer \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T PicometerToChain(const T lengthInPicometer);

	/// @}
} //namespace EGXMath

#include "PicometerConversion.inl"
