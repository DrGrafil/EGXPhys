/// @file EGXMath/Conversions/LengthConversions/MillimeterConversion.hpp
///
/// @brief Converts length measurements in millimeters into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Millimeter Millimeter
/// @ingroup EGXMath-Conversions-LengthConversions

/// @defgroup EGXMath-Conversions-LengthConversions-Millimeter-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Millimeter

/// @defgroup EGXMath-Conversions-LengthConversions-Millimeter-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Millimeter

/// @defgroup EGXMath-Conversions-LengthConversions-Millimeter-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Millimeter

/// @defgroup EGXMath-Conversions-LengthConversions-Millimeter-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Millimeter

/// @defgroup EGXMath-Conversions-LengthConversions-Millimeter-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Millimeter

/// @defgroup EGXMath-Conversions-LengthConversions-Millimeter-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Millimeter

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Millimeter-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in millimeters to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{mm} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T MillimeterToAstronomicalUnit(const T lengthInMillimeter);

    /**
    *   @brief Converts a length millimeters in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{mm} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T MillimeterToLightYear(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{mm} * 10^{-3}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T MillimeterToParsec(const T lengthInMillimeter);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Millimeter-SI
    /// @{
    /**
    *   @brief Converts a length in millimeters to meters.
    *		\f[ l_{m}=l_{mm} * 10^{-3} \f]
    *
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T MillimeterToMeter(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to yottameters.
    *		\f[ l_{Ym}=l_{mm} * 10^{-27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T MillimeterToYottameter(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to zettameters.
    *		\f[ l_{Zm}=l_{mm} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T MillimeterToZettameter(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to exameters.
    *		\f[ l_{Em}=l_{mm} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T MillimeterToExameter(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to petameters.
    *		\f[ l_{Pm}=l_{mm} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T MillimeterToPetameter(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to terameters.
    *		\f[ l_{Tm}=l_{mm} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T MillimeterToTerameter(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to gigameters.
    *		\f[ l_{Gm}=l_{mm} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T MillimeterToGigameter(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to megameters.
    *		\f[ l_{Mm}=l_{mm} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T MillimeterToMegameter(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to kilometers.
    *		\f[ l_{km}=l_{mm} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T MillimeterToKilometer(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to hectometers.
    *		\f[ l_{hm}=l_{mm} * 10^{-5} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T MillimeterToHectometer(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to decameters.
    *		\f[ l_{dam}=l_{mm} * 10^{-4} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T MillimeterToDecameter(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to decimeters.
    *		\f[ l_{dm}=l_{mm} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T MillimeterToDecimeter(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to centimeters.
    *		\f[ l_{cm}=l_{mm} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T MillimeterToCentimeter(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to micrometers.
    *		\f[ l_{\mu m}=l_{mm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see MillimeterToMicron() for alias.
    */
    template<typename T>
    T MillimeterToMicrometer(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to nanometers.
    *		\f[ l_{nm}=l_{mm} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see MillimeterToMicron() for alias.
    */
    template<typename T>
    T MillimeterToNanometer(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to picometers.
    *		\f[ l_{pm}=l_{mm} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see MillimeterToAngstrom() for angstrom conversion.
    *   @see MillimeterToCuXUnit() for copper x unit conversion.
    *   @see MillimeterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MillimeterToPicometer(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to femtometers.
    *		\f[ l_{fm}=l_{mm} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see MillimeterToFermi() for alias.
    */
    template<typename T>
    T MillimeterToFemtometer(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to attometers.
    *		\f[ l_{am}=l_{mm} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T MillimeterToAttometer(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to zeptometers.
    *		\f[ l_{zm}=l_{mm} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T MillimeterToZeptometer(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to yoctometers.
    *		\f[ l_{ym}=l_{mm} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T MillimeterToYoctometer(const T lengthInMillimeter);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Millimeter-Non-SI
    /// @{

    /**
    *   @brief Converts a length in millimeters to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{mm} * 10^{7} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see MillimeterToPicometer() for picometer conversion.
    *   @see MillimeterToCuXUnit() for copper x unit conversion.
    *   @see MillimeterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MillimeterToAngstrom(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to fermis.
    *		\f[ l_{fm}=l_{mm} * 10^{12} \f]
    *
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T MillimeterToFermi(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to microns.
    *		\f[ l_{\mu m}=l_{mm} * 10^{3} \f]
    *
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see MillimeterToMicrometer() for alias.
    */
    template<typename T>
    T MillimeterToMicron(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{mm} * 10^{-3}\f]
    *
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see MillimeterToAngstrom() for angstrom conversion.
    *   @see MillimeterToPicometer() for picometer conversion.
    *   @see MillimeterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MillimeterToCuXUnit(const T lengthInMillimeter);
   
    /**
    *   @brief Converts a length in millimeters to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{mm} * 10^{-3}\f]
    *
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see MillimeterToAngstrom() for angstrom conversion.
    *   @see MillimeterToPicometer() for picometer conversion.
    *   @see MillimeterToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T MillimeterToMoXUnit(const T lengthInMillimeter);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Millimeter-Imperial
    /// @{

    /**
    *   @brief Converts a length in millimeters to miles.
    *		\f[ l_{mi}=\frac{10^{-3}}{0.0254 * 63360} l_{mm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T MillimeterToMile(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to yards.
    *		\f[ l_{yd}=  \frac{10^{-3}}{0.0254 * 36} \frac{1}{36} l_{mm}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T MillimeterToYard(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to feet.
    *		\f[ l_{ft}= \frac{10^{-3}}{0.0254 * 12} l_{mm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T MillimeterToFoot(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to inches.
    *		\f[ l_{in}=  \frac{10^{-3}}{0.0254} l_{mm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T MillimeterToInch(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-3}}{0.0254} l_{mm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see MillimeterToThou() for alias.
    */
    template<typename T>
    T MillimeterToMil(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-3}}{0.0254} l_{mm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see MillimeterToMil() for alias.
    */
    template<typename T>
    T MillimeterToThou(const T lengthInMillimeter);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Millimeter-Nautical
    /// @{

    /**
    *   @brief Converts a length in millimeters to nautical mile.
    *		\f[ l_{NM}= \frac{10^{-3}}{0.0254 * 1852} l_{mm}  \f]
    *
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T MillimeterToNauticalMile(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to fathoms.
    *		\f[ l_{fathom}= \frac{10^{-3}}{0.0254 * 72} l_{mm}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T MillimeterToFathom(const T lengthInMillimeter);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Millimeter-Surveyors
    /// @{

    /**
    *   @brief Converts a length in millimeters to rods.
    *		\f[ l_{rod}= \frac{10^{-3}}{0.0254 * 198} l_{mm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T MillimeterToRod(const T lengthInMillimeter);

    /**
    *   @brief Converts a length in millimeters to chains.
    *		\f[ l_{ch}= \frac{10^{-3}}{0.0254 * 792}  l_{mm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInMillimeter \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T MillimeterToChain(const T lengthInMillimeter);

	/// @}
} //namespace EGXMath

#include "MillimeterConversion.inl"
