/// @file EGXMath/Conversions/LengthConversions/SI/MeterConversion.hpp
///
/// @brief Converts length measurements in meters into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/4/18

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Meter Meter
/// @ingroup EGXMath-Conversions-LengthConversions-SI

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Meter-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Meter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Meter-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Meter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Meter-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Meter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Meter-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Meter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Meter-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Meter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Meter-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Meter

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-SI-Meter-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in meters to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{m} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T MeterToAstronomicalUnit(const T lengthInMeter);

    /**
    *   @brief Converts a length meters in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{m} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T MeterToLightYear(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{m}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T MeterToParsec(const T lengthInMeter);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Meter-SI
    /// @{

    /**
    *   @brief Converts a length in meters to yottameters.
    *		\f[ l_{Ym}=l_{m} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T MeterToYottameter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to zettameters.
    *		\f[ l_{Zm}=l_{m} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T MeterToZettameter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to exameters.
    *		\f[ l_{Em}=l_{m} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T MeterToExameter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to petameters.
    *		\f[ l_{Pm}=l_{m} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T MeterToPetameter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to terameters.
    *		\f[ l_{Tm}=l_{m} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T MeterToTerameter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to gigameters.
    *		\f[ l_{Gm}=l_{m} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T MeterToGigameter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to megameters.
    *		\f[ l_{Mm}=l_{m} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T MeterToMegameter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to kilometers.
    *		\f[ l_{km}=l_{m} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T MeterToKilometer(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to hectometers.
    *		\f[ l_{hm}=l_{m} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T MeterToHectometer(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to decameters.
    *		\f[ l_{dam}=l_{m} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T MeterToDecameter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to decimeters.
    *		\f[ l_{dm}=l_{m} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T MeterToDecimeter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to centimeters.
    *		\f[ l_{cm}=l_{m} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T MeterToCentimeter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to millimeters.
    *		\f[ l_{mm}=l_{m} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T MeterToMillimeter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to micrometers.
    *		\f[ l_{\mu m}=l_{m} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see MeterToMicron() for alias.
    */
    template<typename T>
    T MeterToMicrometer(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to nanometers.
    *		\f[ l_{nm}=l_{m} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see MeterToMicron() for alias.
    */
    template<typename T>
    T MeterToNanometer(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to picometers.
    *		\f[ l_{pm}=l_{m} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see MeterToAngstrom() for angstrom conversion.
    *   @see MeterToCuXUnit() for copper x unit conversion.
    *   @see MeterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MeterToPicometer(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to femtometers.
    *		\f[ l_{fm}=l_{m} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see MeterToFermi() for alias.
    */
    template<typename T>
    T MeterToFemtometer(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to attometers.
    *		\f[ l_{am}=l_{m} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T MeterToAttometer(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to zeptometers.
    *		\f[ l_{zm}=l_{m} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T MeterToZeptometer(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to yoctometers.
    *		\f[ l_{ym}=l_{m} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T MeterToYoctometer(const T lengthInMeter);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Meter-Non-SI
    /// @{

    /**
    *   @brief Converts a length in meters to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{m} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see MeterToPicometer() for picometer conversion.
    *   @see MeterToCuXUnit() for copper x unit conversion.
    *   @see MeterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MeterToAngstrom(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to fermis.
    *		\f[ l_{fm}=l_{m} * 10^{15} \f]
    *
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T MeterToFermi(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to microns.
    *		\f[ l_{\mu m}=l_{m} * 10^{6} \f]
    *
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see MeterToMicrometer() for alias.
    */
    template<typename T>
    T MeterToMicron(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{m} \f]
    *
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ (xu)\f$ Length in copper x units.
    *   @see MeterToAngstrom() for angstrom conversion.
    *   @see MeterToPicometer() for picometer conversion.
    *   @see MeterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MeterToCuXUnit(const T lengthInMeter);
   
    /**
    *   @brief Converts a length in meters to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{m} \f]
    *
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see MeterToAngstrom() for angstrom conversion.
    *   @see MeterToPicometer() for picometer conversion.
    *   @see MeterToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T MeterToMoXUnit(const T lengthInMeter);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Meter-Imperial
    /// @{

    /**
    *   @brief Converts a length in meters to miles.
    *		\f[ l_{mi}=\frac{1}{0.0254 * 63360} l_{m} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T MeterToMile(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to yards.
    *		\f[ l_{yd}= \frac{1}{0.0254 * 36} l_{m}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T MeterToYard(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to feet.
    *		\f[ l_{ft}= \frac{1}{0.0254 * 12} l_{m} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T MeterToFoot(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to inches.
    *		\f[ l_{in}=\frac{1}{0.0254} l_{m} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T MeterToInch(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{1}{0.0254} l_{m} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see MeterToThou() for alias.
    */
    template<typename T>
    T MeterToMil(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{1}{0.0254} l_{m} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see MeterToMil() for alias.
    */
    template<typename T>
    T MeterToThou(const T lengthInMeter);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Meter-Nautical
    /// @{

    /**
    *   @brief Converts a length in meters to nautical mile.
    *		\f[ l_{NM}= \frac{1}{1852} l_{m}  \f]
    *
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T MeterToNauticalMile(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to fathoms.
    *		\f[ l_{fathom}= \frac{1}{0.0254 * 72} l_{m}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T MeterToFathom(const T lengthInMeter);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Meter-Surveyors
    /// @{

    /**
    *   @brief Converts a length in meters to rods.
    *		\f[ l_{rod}= \frac{1}{0.0254 * 198} l_{m} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T MeterToRod(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to chains.
    *		\f[ l_{ch}= \frac{1}{0.0254 * 792} l_{m} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInMeter \f$ l_{m}\ (m)\f$ Length in meters.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T MeterToChain(const T lengthInMeter);

	/// @}
} //namespace EGXMath

#include "MeterConversion.inl"
