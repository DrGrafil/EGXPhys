/// @file EGXMath/Conversions/LengthConversions/SI/DecimeterConversion.hpp
///
/// @brief Converts length measurements in decimeters into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Decimeter Decimeter
/// @ingroup EGXMath-Conversions-LengthConversions-SI

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Decimeter-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Decimeter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Decimeter-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Decimeter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Decimeter-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Decimeter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Decimeter-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Decimeter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Decimeter-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Decimeter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Decimeter-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Decimeter

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-SI-Decimeter-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in decimeters to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{dm} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T DecimeterToAstronomicalUnit(const T lengthInDecimeter);

    /**
    *   @brief Converts a length decimeters in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{dm} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T DecimeterToLightYear(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{dm} * 10^{-1}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T DecimeterToParsec(const T lengthInDecimeter);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Decimeter-SI
    /// @{
    /**
    *   @brief Converts a length in decimeters to meters.
    *		\f[ l_{m}=l_{dm} * 10^{-1} \f]
    *
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T DecimeterToMeter(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to yottameters.
    *		\f[ l_{Ym}=l_{dm} * 10^{-25} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T DecimeterToYottameter(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to zettameters.
    *		\f[ l_{Zm}=l_{dm} * 10^{-26} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T DecimeterToZettameter(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to exameters.
    *		\f[ l_{Em}=l_{dm} * 10^{-19} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T DecimeterToExameter(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to petameters.
    *		\f[ l_{Pm}=l_{dm} * 10^{-16} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T DecimeterToPetameter(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to terameters.
    *		\f[ l_{Tm}=l_{dm} * 10^{-13} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T DecimeterToTerameter(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to gigameters.
    *		\f[ l_{Gm}=l_{dm} * 10^{-10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T DecimeterToGigameter(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to megameters.
    *		\f[ l_{Mm}=l_{dm} * 10^{-7} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T DecimeterToMegameter(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to kilometers.
    *		\f[ l_{km}=l_{dm} * 10^{-4} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T DecimeterToKilometer(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to hectometers.
    *		\f[ l_{hm}=l_{dm} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T DecimeterToHectometer(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to decameters.
    *		\f[ l_{dam}=l_{dm} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T DecimeterToDecameter(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to centimeters.
    *		\f[ l_{cm}=l_{dm} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T DecimeterToCentimeter(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to millimeters.
    *		\f[ l_{mm}=l_{dm} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T DecimeterToMillimeter(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to micrometers.
    *		\f[ l_{\mu m}=l_{dm} * 10^{5} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see DecimeterToMicron() for alias.
    */
    template<typename T>
    T DecimeterToMicrometer(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to nanometers.
    *		\f[ l_{nm}=l_{dm} * 10^{8} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see DecimeterToMicron() for alias.
    */
    template<typename T>
    T DecimeterToNanometer(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to picometers.
    *		\f[ l_{pm}=l_{dm} * 10^{11} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see DecimeterToAngstrom() for angstrom conversion.
    *   @see DecimeterToCuXUnit() for copper x unit conversion.
    *   @see DecimeterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T DecimeterToPicometer(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to femtometers.
    *		\f[ l_{fm}=l_{dm} * 10^{14} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see DecimeterToFermi() for alias.
    */
    template<typename T>
    T DecimeterToFemtometer(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to attometers.
    *		\f[ l_{am}=l_{dm} * 10^{17} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T DecimeterToAttometer(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to zeptometers.
    *		\f[ l_{zm}=l_{dm} * 10^{20} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T DecimeterToZeptometer(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to yoctometers.
    *		\f[ l_{ym}=l_{dm} * 10^{23} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T DecimeterToYoctometer(const T lengthInDecimeter);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Decimeter-Non-SI
    /// @{

    /**
    *   @brief Converts a length in decimeters to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{dm} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see DecimeterToPicometer() for picometer conversion.
    *   @see DecimeterToCuXUnit() for copper x unit conversion.
    *   @see DecimeterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T DecimeterToAngstrom(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to fermis.
    *		\f[ l_{fm}=l_{dm} * 10^{14} \f]
    *
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T DecimeterToFermi(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to microns.
    *		\f[ l_{\mu m}=l_{dm} * 10^{5} \f]
    *
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see DecimeterToMicrometer() for alias.
    */
    template<typename T>
    T DecimeterToMicron(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{dm} * 10^{-1}\f]
    *
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see DecimeterToAngstrom() for angstrom conversion.
    *   @see DecimeterToPicometer() for picometer conversion.
    *   @see DecimeterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T DecimeterToCuXUnit(const T lengthInDecimeter);
   
    /**
    *   @brief Converts a length in decimeters to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{dm} * 10^{-1}\f]
    *
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see DecimeterToAngstrom() for angstrom conversion.
    *   @see DecimeterToPicometer() for picometer conversion.
    *   @see DecimeterToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T DecimeterToMoXUnit(const T lengthInDecimeter);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Decimeter-Imperial
    /// @{

    /**
    *   @brief Converts a length in decimeters to miles.
    *		\f[ l_{mi}=\frac{10^{-1}}{0.0254 * 63360} l_{dm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T DecimeterToMile(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to yards.
    *		\f[ l_{yd}=  \frac{10^{-1}}{0.0254 * 36} \frac{1}{36} l_{dm}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T DecimeterToYard(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to feet.
    *		\f[ l_{ft}= \frac{10^{-1}}{0.0254 * 12} l_{dm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T DecimeterToFoot(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to inches.
    *		\f[ l_{in}=  \frac{10^{-1}}{0.0254} l_{dm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T DecimeterToInch(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-1}}{0.0254} l_{dm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see DecimeterToThou() for alias.
    */
    template<typename T>
    T DecimeterToMil(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{-1}}{0.0254} l_{dm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see DecimeterToMil() for alias.
    */
    template<typename T>
    T DecimeterToThou(const T lengthInDecimeter);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Decimeter-Nautical
    /// @{

    /**
    *   @brief Converts a length in decimeters to nautical mile.
    *		\f[ l_{NM}= \frac{10^{-1}}{1852} l_{dm}  \f]
    *
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T DecimeterToNauticalMile(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to fathoms.
    *		\f[ l_{fathom}= \frac{10^{-1}}{0.0254 * 72} l_{dm}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T DecimeterToFathom(const T lengthInDecimeter);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Decimeter-Surveyors
    /// @{

    /**
    *   @brief Converts a length in decimeters to rods.
    *		\f[ l_{rod}= \frac{10^{-1}}{0.0254 * 198} l_{dm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T DecimeterToRod(const T lengthInDecimeter);

    /**
    *   @brief Converts a length in decimeters to chains.
    *		\f[ l_{ch}= \frac{10^{-1}}{0.0254 * 792}  l_{dm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInDecimeter \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T DecimeterToChain(const T lengthInDecimeter);

	/// @}
} //namespace EGXMath

#include "DecimeterConversion.inl"
