/// @file EGXMath/Conversions/LengthConversions/Astronomical/LightYearConversion.hpp
///
/// @brief Converts length measurements in light years into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil 
/// @date 6/11/18

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear LightYear
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in light years to astronomical units.
    *		\f[ l_{au}=  \frac{9460730472580800}{149597870700} l_{ly} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T LightYearToAstronomicalUnit(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to parsecs.
    *		\f[ l_{pc}=\frac{9460730472580800 * \pi}{149597870700 * 648000} l_{ly}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T LightYearToParsec(const T lengthInLightYear);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear-SI
    /// @{
    /**
    *   @brief Converts a length in light years to meters.
    *		\f[ l_{m}=9460730472580800 * l_{ly} \f]
    *
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T LightYearToMeter(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to yottameters.
    *		\f[ l_{Ym}=9460730472580800 * l_{ly} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T LightYearToYottameter(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to zettameters.
    *		\f[ l_{Zm}=9460730472580800 * l_{ly} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T LightYearToZettameter(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to exameters.
    *		\f[ l_{Em}=9460730472580800 * l_{ly} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T LightYearToExameter(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to petameters.
    *		\f[ l_{Pm}=9460730472580800 * l_{ly} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T LightYearToPetameter(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to terameters.
    *		\f[ l_{Tm}=9460730472580800 * l_{ly} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T LightYearToTerameter(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to gigameters.
    *		\f[ l_{Gm}=9460730472580800 * l_{ly} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T LightYearToGigameter(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to megameters.
    *		\f[ l_{Mm}=9460730472580800 * l_{ly} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T LightYearToMegameter(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to kilometers.
    *		\f[ l_{km}=9460730472580800 * l_{ly} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T LightYearToKilometer(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to hectometers.
    *		\f[ l_{hm}=9460730472580800 * l_{ly} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T LightYearToHectometer(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to decameters.
    *		\f[ l_{dam}=9460730472580800 * l_{ly} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T LightYearToDecameter(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to decimeters.
    *		\f[ l_{dm}=9460730472580800 * l_{ly} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T LightYearToDecimeter(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to centimeters.
    *		\f[ l_{cm}=9460730472580800 * l_{ly} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T LightYearToCentimeter(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to millimeters.
    *		\f[ l_{mm}=9460730472580800 * l_{ly} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T LightYearToMillimeter(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to micrometers.
    *		\f[ l_{\mu m}=9460730472580800 * l_{ly} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see LightYearToMicron() for alias.
    */
    template<typename T>
    T LightYearToMicrometer(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to nanometers.
    *		\f[ l_{nm}=9460730472580800 * l_{ly} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see LightYearToMicron() for alias.
    */
    template<typename T>
    T LightYearToNanometer(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to picometers.
    *		\f[ l_{pm}=9460730472580800 * l_{ly} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see LightYearToAngstrom() for angstrom conversion.
    *   @see LightYearToCuXUnit() for copper x unit conversion.
    *   @see LightYearToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T LightYearToPicometer(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to femtometers.
    *		\f[ l_{fm}=9460730472580800 * l_{ly} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see LightYearToFermi() for alias.
    */
    template<typename T>
    T LightYearToFemtometer(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to attometers.
    *		\f[ l_{am}=9460730472580800 * l_{ly} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T LightYearToAttometer(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to zeptometers.
    *		\f[ l_{zm}=9460730472580800 * l_{ly} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T LightYearToZeptometer(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to yoctometers.
    *		\f[ l_{ym}=9460730472580800 * l_{ly} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T LightYearToYoctometer(const T lengthInLightYear);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear-Non-SI
    /// @{

    /**
    *   @brief Converts a length in light years to angstroms.
    *		\f[ l_{\unicode{x212B}}=9460730472580800 * l_{ly} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see LightYearToPicometer() for picometer conversion.
    *   @see LightYearToCuXUnit() for copper x unit conversion.
    *   @see LightYearToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T LightYearToAngstrom(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to fermis.
    *		\f[ l_{fm}=9460730472580800 * l_{ly} * 10^{15} \f]
    *
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T LightYearToFermi(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to microns.
    *		\f[ l_{\mu m}=9460730472580800 * l_{ly} * 10^{6} \f]
    *
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see LightYearToMicrometer() for alias.
    */
    template<typename T>
    T LightYearToMicron(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{9460730472580800}{1.00207697*10^{-13}} l_{ly}\f]
    *
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ (xu)\f$ Length in copper x units.
    *   @see LightYearToAngstrom() for angstrom conversion.
    *   @see LightYearToPicometer() for picometer conversion.
    *   @see LightYearToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T LightYearToCuXUnit(const T lengthInLightYear);
   
    /**
    *   @brief Converts a length in light years to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{9460730472580800}{1.00209952*10^{-13}} l_{ly}\f]
    *
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see LightYearToAngstrom() for angstrom conversion.
    *   @see LightYearToPicometer() for picometer conversion.
    *   @see LightYearToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T LightYearToMoXUnit(const T lengthInLightYear);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear-Imperial
    /// @{

    /**
    *   @brief Converts a length in light years to miles.
    *		\f[ l_{mi}=\frac{9460730472580800}{0.0254 * 63360} l_{ly} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T LightYearToMile(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to yards.
    *		\f[ l_{yd}=  \frac{9460730472580800}{0.0254 * 36} l_{ly}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T LightYearToYard(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to feet.
    *		\f[ l_{ft}= \frac{9460730472580800}{0.0254 * 12} l_{ly} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T LightYearToFoot(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to inches.
    *		\f[ l_{in}=  \frac{9460730472580800}{0.0254} l_{ly} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T LightYearToInch(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{9460730472580800}{0.0254} l_{ly} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see LightYearToThou() for alias.
    */
    template<typename T>
    T LightYearToMil(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{9460730472580800}{0.0254} l_{ly} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see LightYearToMil() for alias.
    */
    template<typename T>
    T LightYearToThou(const T lengthInLightYear);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear-Nautical
    /// @{

    /**
    *   @brief Converts a length in light years to nautical mile.
    *		\f[ l_{NM}= \frac{9460730472580800}{1852} l_{ly}  \f]
    *
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T LightYearToNauticalMile(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to fathoms.
    *		\f[ l_{fathom}= \frac{9460730472580800}{0.0254 * 72} l_{ly}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T LightYearToFathom(const T lengthInLightYear);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-LightYear-Surveyors
    /// @{

    /**
    *   @brief Converts a length in light years to rods.
    *		\f[ l_{rod}= \frac{9460730472580800}{0.0254 * 198} l_{ly} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T LightYearToRod(const T lengthInLightYear);

    /**
    *   @brief Converts a length in light years to chains.
    *		\f[ l_{ch}= \frac{9460730472580800}{0.0254 * 792}  l_{ly} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInLightYear \f$ l_{ly}\ (ly)\f$ Length in light years.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T LightYearToChain(const T lengthInLightYear);

	/// @}
} //namespace EGXMath

#include "LightYearConversion.inl"
