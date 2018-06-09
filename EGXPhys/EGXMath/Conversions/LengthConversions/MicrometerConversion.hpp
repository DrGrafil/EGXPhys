/// @file EGXMath/Conversions/LengthConversions/MicrometerConversion.hpp
///
/// @brief Converts length measurements in micrometers into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Micrometer Micrometer
/// @ingroup EGXMath-Conversions-LengthConversions

/// @defgroup EGXMath-Conversions-LengthConversions-Micrometer-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Micrometer

/// @defgroup EGXMath-Conversions-LengthConversions-Micrometer-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Micrometer

/// @defgroup EGXMath-Conversions-LengthConversions-Micrometer-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Micrometer

/// @defgroup EGXMath-Conversions-LengthConversions-Micrometer-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Micrometer

/// @defgroup EGXMath-Conversions-LengthConversions-Micrometer-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Micrometer

/// @defgroup EGXMath-Conversions-LengthConversions-Micrometer-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Micrometer

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Micrometer-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in micrometers to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{\mu m} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T MicrometerToAstronomicalUnit(const T lengthInMicrometer);

    /**
    *   @brief Converts a length micrometers in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{\mu m} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T MicrometerToLightYear(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{\mu m} * 10^{-6}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T MicrometerToParsec(const T lengthInMicrometer);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Micrometer-SI
    /// @{
    /**
    *   @brief Converts a length in micrometers to meters.
    *		\f[ l_{m}=l_{\mu m} * 10^{-6}\f]
    *
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T MicrometerToMeter(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to yottameters.
    *		\f[ l_{Ym}=l_{\mu m} * 10^{-30} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T MicrometerToYottameter(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to zettameters.
    *		\f[ l_{Zm}=l_{\mu m} * 10^{-27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T MicrometerToZettameter(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to exameters.
    *		\f[ l_{Em}=l_{\mu m} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T MicrometerToExameter(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to petameters.
    *		\f[ l_{Pm}=l_{\mu m} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T MicrometerToPetameter(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to terameters.
    *		\f[ l_{Tm}=l_{\mu m} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T MicrometerToTerameter(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to gigameters.
    *		\f[ l_{Gm}=l_{\mu m} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T MicrometerToGigameter(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to megameters.
    *		\f[ l_{Mm}=l_{\mu m} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T MicrometerToMegameter(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to kilometers.
    *		\f[ l_{km}=l_{\mu m} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T MicrometerToKilometer(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to hectometers.
    *		\f[ l_{hm}=l_{\mu m} * 10^{-8} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T MicrometerToHectometer(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to decameters.
    *		\f[ l_{dam}=l_{\mu m} * 10^{-7} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T MicrometerToDecameter(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to decimeters.
    *		\f[ l_{dm}=l_{\mu m} * 10^{-5} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T MicrometerToDecimeter(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to centimeters.
    *		\f[ l_{cm}=l_{\mu m} * 10^{-4} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T MicrometerToCentimeter(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to millimeters.
    *		\f[ l_{mm}=l_{\mu m} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T MicrometerToMillimeter(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to nanometers.
    *		\f[ l_{nm}=l_{\mu m} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see MicrometerToMicron() for alias.
    */
    template<typename T>
    T MicrometerToNanometer(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to picometers.
    *		\f[ l_{pm}=l_{\mu m} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see MicrometerToAngstrom() for angstrom conversion.
    *   @see MicrometerToCuXUnit() for copper x unit conversion.
    *   @see MicrometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MicrometerToPicometer(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to femtometers.
    *		\f[ l_{fm}=l_{\mu m} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see MicrometerToFermi() for alias.
    */
    template<typename T>
    T MicrometerToFemtometer(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to attometers.
    *		\f[ l_{am}=l_{\mu m} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T MicrometerToAttometer(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to zeptometers.
    *		\f[ l_{zm}=l_{\mu m} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T MicrometerToZeptometer(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to Yoctometers.
    *		\f[ l_{ym}=l_{\mu m} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T MicrometerToYoctometer(const T lengthInMicrometer);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Micrometer-Non-SI
    /// @{

    /**
    *   @brief Converts a length in micrometers to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{\mu m} * 10^{4} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see MicrometerToPicometer() for picometer conversion.
    *   @see MicrometerToCuXUnit() for copper x unit conversion.
    *   @see MicrometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MicrometerToAngstrom(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to fermis.
    *		\f[ l_{fm}=l_{\mu m} * 10^{9} \f]
    *
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T MicrometerToFermi(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to microns.
    *		\f[ l_{\mu m}=l_{\mu m} \f]
    *
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see MicrometerToMicrometer() for alias.
    */
    template<typename T>
    T MicrometerToMicron(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{\mu m} * 10^{-6}\f]
    *
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see MicrometerToAngstrom() for angstrom conversion.
    *   @see MicrometerToPicometer() for picometer conversion.
    *   @see MicrometerToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MicrometerToCuXUnit(const T lengthInMicrometer);
   
    /**
    *   @brief Converts a length in micrometers to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{\mu m} * 10^{-6}\f]
    *
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see MicrometerToAngstrom() for angstrom conversion.
    *   @see MicrometerToPicometer() for picometer conversion.
    *   @see MicrometerToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T MicrometerToMoXUnit(const T lengthInMicrometer);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Micrometer-Imperial
    /// @{

    /**
    *   @brief Converts a length in micrometers to miles.
    *		\f[ l_{mi}=\frac{10^{-6}}{0.0254 * 63360} l_{\mu m} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T MicrometerToMile(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to yards.
    *		\f[ l_{yd}=  \frac{10^{-6}}{0.0254 * 36} \frac{1}{36} l_{\mu m}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T MicrometerToYard(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to feet.
    *		\f[ l_{ft}= \frac{10^{-6}}{0.0254 * 12} l_{\mu m} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T MicrometerToFoot(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to inches.
    *		\f[ l_{in}=  \frac{10^{-6}}{0.0254} l_{\mu m} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T MicrometerToInch(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-6}}{0.0254} l_{\mu m} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see MicrometerToThou() for alias.
    */
    template<typename T>
    T MicrometerToMil(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-6}}{0.0254} l_{\mu m} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see MicrometerToMil() for alias.
    */
    template<typename T>
    T MicrometerToThou(const T lengthInMicrometer);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Micrometer-Nautical
    /// @{

    /**
    *   @brief Converts a length in micrometers to nautical mile.
    *		\f[ l_{NM}= \frac{10^{-6}}{0.0254 * 1852} l_{\mu m}  \f]
    *
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T MicrometerToNauticalMile(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to fathoms.
    *		\f[ l_{fathom}= \frac{10^{-6}}{0.0254 * 72} l_{\mu m}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T MicrometerToFathom(const T lengthInMicrometer);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Micrometer-Surveyors
    /// @{

    /**
    *   @brief Converts a length in micrometers to rods.
    *		\f[ l_{rod}= \frac{10^{-6}}{0.0254 * 198} l_{\mu m} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T MicrometerToRod(const T lengthInMicrometer);

    /**
    *   @brief Converts a length in micrometers to chains.
    *		\f[ l_{ch}= \frac{10^{-6}}{0.0254 * 792}  l_{\mu m} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInMicrometer \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T MicrometerToChain(const T lengthInMicrometer);

	/// @}
} //namespace EGXMath

#include "MicrometerConversion.inl"
