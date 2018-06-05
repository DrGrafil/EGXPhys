/// @file EGXMath/Conversions/LengthConversions/MeterConversion.hpp
///
/// @brief Converts length measurements in meters into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/4/18

/// @defgroup EGXMath-Conversions-LengthConversions-Meter Meter
/// @ingroup EGXMath-Conversions-LengthConversions

/// @defgroup EGXMath-Conversions-LengthConversions-Meter-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Meter

/// @defgroup EGXMath-Conversions-LengthConversions-Meter-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Meter

/// @defgroup EGXMath-Conversions-LengthConversions-Meter-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Meter

/// @defgroup EGXMath-Conversions-LengthConversions-Meter-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Meter

/// @defgroup EGXMath-Conversions-LengthConversions-Meter-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Meter

/// @defgroup EGXMath-Conversions-LengthConversions-Meter-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Meter

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Meter-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in meters to astronomical units.
    *		\f[ d_{au}=  \frac{1}{149597870700} d_{m} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T MeterToAstronomicalUnit(const T lengthInMeter);

    /**
    *   @brief Converts a length meters in to light-years.
    *		\f[ d_{ly}= \frac{1}{9460730472580800} d_{m} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T MeterToLightYear(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to parsecs.
    *		\f[ d_{pc}=\frac{\pi}{149597870700 * 648000} d_{m}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T MeterToParsec(const T lengthInMeter);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Meter-SI
    /// @{

    /**
    *   @brief Converts a length in meters to yottameters.
    *		\f[ d_{Ym}=d_{m} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T MeterToYottameter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to zettameters.
    *		\f[ d_{Zm}=d_{m} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T MeterToZettameter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to exameters.
    *		\f[ d_{Em}=d_{m} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T MeterToExameter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to petameters.
    *		\f[ d_{Pm}=d_{m} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T MeterToPetameter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to terameters.
    *		\f[ d_{Tm}=d_{m} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T MeterToTerameter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to gigameters.
    *		\f[ d_{Gm}=d_{m} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T MeterToGigameter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to megameters.
    *		\f[ d_{Mm}=d_{m} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T MeterToMegameter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to kilometers.
    *		\f[ d_{km}=d_{m} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T MeterToKilometer(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to hectometers.
    *		\f[ d_{hm}=d_{m} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T MeterToHectometer(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to decameters.
    *		\f[ d_{dam}=d_{m} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T MeterToDecameter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to decimeters.
    *		\f[ d_{dm}=d_{m} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T MeterToDecimeter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to centimeters.
    *		\f[ d_{cm}=d_{m} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T MeterToCentimeter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to millimeters.
    *		\f[ d_{m}=d_{m} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T MeterToMillimeter(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to micrometers.
    *		\f[ d_{\mu m}=d_{m} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see MeterToMicron() for alias.
    */
    template<typename T>
    T MeterToMicrometer(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to nanometers.
    *		\f[ d_{nm}=d_{m} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{nm}\ (nm)\f$ Length in nanometers.
    *   @see MeterToMicron() for alias.
    */
    template<typename T>
    T MeterToNanometer(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to picometers.
    *		\f[ d_{pm}=d_{m} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{pm}\ (pm)\f$ Length in picometers.
    *   @see MeterToAngstrom() for angstrom conversion.
    *   @see MeterToCuXUnit() for copper x unit conversion.
    *   @see MeterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MeterToPicometer(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to femtometers.
    *		\f[ d_{fm}=d_{m} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{fm}\ (fm)\f$ Length in femtometers.
    *   @see MeterToFermi() for alias.
    */
    template<typename T>
    T MeterToFemtometer(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to attometers.
    *		\f[ d_{am}=d_{m} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T MeterToAttometer(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to zeptometers.
    *		\f[ d_{zm}=d_{m} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T MeterToZeptometer(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to Yoctometers.
    *		\f[ d_{ym}=d_{m} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T MeterToYoctometer(const T lengthInMeter);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Meter-Non-SI
    /// @{

    /**
    *   @brief Converts a length in meters to angstroms.
    *		\f[ d_{\unicode{x212B}}=d_{m} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see MeterToPicometer() for picometer conversion.
    *   @see MeterToCuXUnit() for copper x unit conversion.
    *   @see MeterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MeterToAngstrom(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to fermis.
    *		\f[ d_{fm}=d_{m} * 10^{15} \f]
    *
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T MeterToFermi(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to microns.
    *		\f[ d_{\mu m}=d_{m} * 10^{6} \f]
    *
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see MeterToMicrometer() for alias.
    */
    template<typename T>
    T MeterToMicron(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to copper x units.
    *		\f[ d_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} d_{m} \f]
    *
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see MeterToAngstrom() for angstrom conversion.
    *   @see MeterToPicometer() for picometer conversion.
    *   @see MeterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MeterToCuXUnit(const T lengthInMeter);
   
    /**
    *   @brief Converts a length in meters to molybdenum x units.
    *		\f[ d_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} d_{m} /  \f]
    *
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see MeterToAngstrom() for angstrom conversion.
    *   @see MeterToPicometer() for picometer conversion.
    *   @see MeterToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T MeterToMoXUnit(const T lengthInMeter);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Meter-Imperial
    /// @{

    /**
    *   @brief Converts a length in meters to miles.
    *		\f[ d_{mi}=\frac{1}{0.0254 * 63360} d_{m} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T MeterToMile(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to yards.
    *		\f[ d_{yd}= \frac{1}{0.0254 * 36} d_{m}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T MeterToYard(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to feet.
    *		\f[ d_{ft}= \frac{1}{0.0254 * 12} d_{m} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T MeterToFoot(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to inches.
    *		\f[ d_{in}=\frac{1}{0.0254} d_{m} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T MeterToInch(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to mils (thousandth of an inch).
    *		\f[ d_{mil}= \frac{1}{0.0254} d_{m} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see MeterToThou() for alias.
    */
    template<typename T>
    T MeterToMil(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to thous (thousandth of an inch).
    *		\f[ d_{mil}= \frac{1}{0.0254} d_{m} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see MeterToMil() for alias.
    */
    template<typename T>
    T MeterToThou(const T lengthInMeter);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Meter-Nautical
    /// @{

    /**
    *   @brief Converts a length in meters to nautical mile.
    *		\f[ d_{NM}= \frac{1}{0.0254 * 1852} d_{m}  \f]
    *
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T MeterToNauticalMile(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to fathoms.
    *		\f[ d_{fathom}= \frac{1}{0.0254 * 72} d_{m}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T MeterToFathom(const T lengthInMeter);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Meter-Surveyors
    /// @{

    /**
    *   @brief Converts a length in meters to rods.
    *		\f[ d_{rod}= \frac{1}{0.0254 * 198} d_{m} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T MeterToRod(const T lengthInMeter);

    /**
    *   @brief Converts a length in meters to chains.
    *		\f[ d_{ch}= \frac{1}{0.0254 * 792} d_{m} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInMeter \f$ d_{m}\ (m)\f$ Length in meters.
    *   @return \f$ d_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T MeterToChain(const T lengthInMeter);

	/// @}
} //namespace EGXMath

#include "TemplateConversion.inl"
