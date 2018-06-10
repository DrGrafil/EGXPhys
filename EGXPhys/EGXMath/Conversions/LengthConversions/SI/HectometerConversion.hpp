/// @file EGXMath/Conversions/LengthConversions/SI/HectometerConversion.hpp
///
/// @brief Converts length measurements in hectometers into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Hectometer Hectometer
/// @ingroup EGXMath-Conversions-LengthConversions

/// @defgroup EGXMath-Conversions-LengthConversions-Hectometer-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Hectometer

/// @defgroup EGXMath-Conversions-LengthConversions-Hectometer-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Hectometer

/// @defgroup EGXMath-Conversions-LengthConversions-Hectometer-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Hectometer

/// @defgroup EGXMath-Conversions-LengthConversions-Hectometer-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Hectometer

/// @defgroup EGXMath-Conversions-LengthConversions-Hectometer-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Hectometer

/// @defgroup EGXMath-Conversions-LengthConversions-Hectometer-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Hectometer

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Hectometer-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in hectometers to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{hm} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T HectometerToAstronomicalUnit(const T lengthInHectometer);

    /**
    *   @brief Converts a length hectometers in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{hm} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T HectometerToLightYear(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{hm} * 10^{2}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T HectometerToParsec(const T lengthInHectometer);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Hectometer-SI
    /// @{
    /**
    *   @brief Converts a length in hectometers to meters.
    *		\f[ l_{m}=l_{hm} * 10^{2} \f]
    *
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T HectometerToMeter(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to yottameters.
    *		\f[ l_{Ym}=l_{hm} * 10^{-22} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T HectometerToYottameter(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to zettameters.
    *		\f[ l_{Zm}=l_{hm} * 10^{-19} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T HectometerToZettameter(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to exameters.
    *		\f[ l_{Em}=l_{hm} * 10^{-16} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T HectometerToExameter(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to petameters.
    *		\f[ l_{Pm}=l_{hm} * 10^{-13} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T HectometerToPetameter(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to terameters.
    *		\f[ l_{Tm}=l_{hm} * 10^{-10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T HectometerToTerameter(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to gigameters.
    *		\f[ l_{Gm}=l_{hm} * 10^{-7} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T HectometerToGigameter(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to megameters.
    *		\f[ l_{Mm}=l_{hm} * 10^{-4} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T HectometerToMegameter(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to kilometers.
    *		\f[ l_{km}=l_{hm} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T HectometerToKilometer(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to decameters.
    *		\f[ l_{dam}=l_{hm} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T HectometerToDecameter(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to decimeters.
    *		\f[ l_{dm}=l_{hm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T HectometerToDecimeter(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to centimeters.
    *		\f[ l_{cm}=l_{hm} * 10^{4} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T HectometerToCentimeter(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to millimeters.
    *		\f[ l_{mm}=l_{hm} * 10^{5} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T HectometerToMillimeter(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to micrometers.
    *		\f[ l_{\mu m}=l_{hm} * 10^{8} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see HectometerToMicron() for alias.
    */
    template<typename T>
    T HectometerToMicrometer(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to nanometers.
    *		\f[ l_{nm}=l_{hm} * 10^{11} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see HectometerToMicron() for alias.
    */
    template<typename T>
    T HectometerToNanometer(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to picometers.
    *		\f[ l_{pm}=l_{hm} * 10^{14} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see HectometerToAngstrom() for angstrom conversion.
    *   @see HectometerToCuXUnit() for copper x unit conversion.
    *   @see HectometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T HectometerToPicometer(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to femtometers.
    *		\f[ l_{fm}=l_{hm} * 10^{17} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see HectometerToFermi() for alias.
    */
    template<typename T>
    T HectometerToFemtometer(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to attometers.
    *		\f[ l_{am}=l_{hm} * 10^{20} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T HectometerToAttometer(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to zeptometers.
    *		\f[ l_{zm}=l_{hm} * 10^{23} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T HectometerToZeptometer(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to yoctometers.
    *		\f[ l_{ym}=l_{hm} * 10^{26} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T HectometerToYoctometer(const T lengthInHectometer);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Hectometer-Non-SI
    /// @{

    /**
    *   @brief Converts a length in hectometers to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{hm} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see HectometerToPicometer() for picometer conversion.
    *   @see HectometerToCuXUnit() for copper x unit conversion.
    *   @see HectometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T HectometerToAngstrom(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to fermis.
    *		\f[ l_{fm}=l_{hm} * 10^{17} \f]
    *
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T HectometerToFermi(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to microns.
    *		\f[ l_{\mu m}=l_{hm} * 10^{8} \f]
    *
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see HectometerToMicrometer() for alias.
    */
    template<typename T>
    T HectometerToMicron(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{hm} * 10^{2}\f]
    *
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see HectometerToAngstrom() for angstrom conversion.
    *   @see HectometerToPicometer() for picometer conversion.
    *   @see HectometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T HectometerToCuXUnit(const T lengthInHectometer);
   
    /**
    *   @brief Converts a length in hectometers to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{hm} * 10^{2}\f]
    *
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see HectometerToAngstrom() for angstrom conversion.
    *   @see HectometerToPicometer() for picometer conversion.
    *   @see HectometerToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T HectometerToMoXUnit(const T lengthInHectometer);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Hectometer-Imperial
    /// @{

    /**
    *   @brief Converts a length in hectometers to miles.
    *		\f[ l_{mi}=\frac{10^{2}}{0.0254 * 63360} l_{hm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T HectometerToMile(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to yards.
    *		\f[ l_{yd}=  \frac{10^{2}}{0.0254 * 36} \frac{1}{36} l_{hm}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T HectometerToYard(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to feet.
    *		\f[ l_{ft}= \frac{10^{2}}{0.0254 * 12} l_{hm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T HectometerToFoot(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to inches.
    *		\f[ l_{in}=  \frac{10^{2}}{0.0254} l_{hm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T HectometerToInch(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{2}}{0.0254} l_{hm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see HectometerToThou() for alias.
    */
    template<typename T>
    T HectometerToMil(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{2}}{0.0254} l_{hm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see HectometerToMil() for alias.
    */
    template<typename T>
    T HectometerToThou(const T lengthInHectometer);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Hectometer-Nautical
    /// @{

    /**
    *   @brief Converts a length in hectometers to nautical mile.
    *		\f[ l_{NM}= \frac{10^{2}}{0.0254 * 1852} l_{hm}  \f]
    *
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T HectometerToNauticalMile(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to fathoms.
    *		\f[ l_{fathom}= \frac{10^{2}}{0.0254 * 72} l_{hm}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T HectometerToFathom(const T lengthInHectometer);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Hectometer-Surveyors
    /// @{

    /**
    *   @brief Converts a length in hectometers to rods.
    *		\f[ l_{rod}= \frac{10^{2}}{0.0254 * 198} l_{hm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T HectometerToRod(const T lengthInHectometer);

    /**
    *   @brief Converts a length in hectometers to chains.
    *		\f[ l_{ch}= \frac{10^{2}}{0.0254 * 792}  l_{hm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInHectometer \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T HectometerToChain(const T lengthInHectometer);

	/// @}
} //namespace EGXMath

#include "HectometerConversion.inl"
