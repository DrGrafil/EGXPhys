/// @file EGXMath/Conversions/LengthConversions/Imperial/YardConversion.hpp
///
/// @brief Converts length measurements in yards into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil 
/// @date 6/11/18

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Yard Yard
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Yard-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Yard

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Yard-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Yard

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Yard-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Yard

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Yard-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Yard

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Yard-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Yard

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Yard-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Yard

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Yard-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in yards to astronomical units.
    *		\f[ l_{au}=\frac{0.0254 * 36}{149597870700} l_{yd} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T YardToAstronomicalUnit(const T lengthInYard);

    /**
    *   @brief Converts a length yards in to light-years.
    *		\f[ l_{ly}=\frac{0.0254 * 36}{9460730472580800} l_{yd} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T YardToLightYear(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to parsecs.
    *		\f[ l_{pc}=\frac{0.0254 * 36 * \pi}{149597870700 * 648000} l_{yd}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T YardToParsec(const T lengthInYard);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Yard-SI
    /// @{
    /**
    *   @brief Converts a length in yards to meters.
    *		\f[ l_{m}=0.0254 * 36 * l_{yd} \f]
    *
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T YardToMeter(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to yottameters.
    *		\f[ l_{Ym}=0.0254 * 36 * l_{yd} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T YardToYottameter(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to zettameters.
    *		\f[ l_{Zm}=0.0254 * 36 * l_{yd} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T YardToZettameter(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to exameters.
    *		\f[ l_{Em}=0.0254 * 36 * l_{yd} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T YardToExameter(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to petameters.
    *		\f[ l_{Pm}=0.0254 * 36 * l_{yd} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T YardToPetameter(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to terameters.
    *		\f[ l_{Tm}=0.0254 * 36 * l_{yd} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T YardToTerameter(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to gigameters.
    *		\f[ l_{Gm}=0.0254 * 36 * l_{yd} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T YardToGigameter(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to megameters.
    *		\f[ l_{Mm}=0.0254 * 36 * l_{yd} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T YardToMegameter(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to kilometers.
    *		\f[ l_{km}=0.0254 * 36 * l_{yd} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T YardToKilometer(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to hectometers.
    *		\f[ l_{hm}=0.0254 * 36 * l_{yd} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T YardToHectometer(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to decameters.
    *		\f[ l_{dam}=0.0254 * 36 * l_{yd} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T YardToDecameter(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to decimeters.
    *		\f[ l_{dm}=0.0254 * 36 * l_{yd} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T YardToDecimeter(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to centimeters.
    *		\f[ l_{cm}=0.0254 * 36 * l_{yd} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T YardToCentimeter(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to millimeters.
    *		\f[ l_{mm}=0.0254 * 36 * l_{yd} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T YardToMillimeter(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to micrometers.
    *		\f[ l_{\mu m}=0.0254 * 36 * l_{yd} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see YardToMicron() for alias.
    */
    template<typename T>
    T YardToMicrometer(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to nanometers.
    *		\f[ l_{nm}=0.0254 * 36 * l_{yd} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see YardToMicron() for alias.
    */
    template<typename T>
    T YardToNanometer(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to picometers.
    *		\f[ l_{pm}=0.0254 * 36 * l_{yd} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see YardToAngstrom() for angstrom conversion.
    *   @see YardToCuXUnit() for copper x unit conversion.
    *   @see YardToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T YardToPicometer(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to femtometers.
    *		\f[ l_{fm}=0.0254 * 36 * l_{yd} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see YardToFermi() for alias.
    */
    template<typename T>
    T YardToFemtometer(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to attometers.
    *		\f[ l_{am}=0.0254 * 36 * l_{yd} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T YardToAttometer(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to zeptometers.
    *		\f[ l_{zm}=0.0254 * 36 * l_{yd} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T YardToZeptometer(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to yoctometers.
    *		\f[ l_{ym}=0.0254 * 36 * l_{yd} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T YardToYoctometer(const T lengthInYard);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Yard-Non-SI
    /// @{

    /**
    *   @brief Converts a length in yards to angstroms.
    *		\f[ l_{\unicode{x212B}}=0.0254 * 36 * l_{yd} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see YardToPicometer() for picometer conversion.
    *   @see YardToCuXUnit() for copper x unit conversion.
    *   @see YardToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T YardToAngstrom(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to fermis.
    *		\f[ l_{fm}=0.0254 * 36 * l_{yd} * 10^{15} \f]
    *
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T YardToFermi(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to microns.
    *		\f[ l_{\mu m}=0.0254 * 36 * l_{yd} * 10^{6} \f]
    *
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see YardToMicrometer() for alias.
    */
    template<typename T>
    T YardToMicron(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}=\frac{0.0254 * 36}{1.00207697*10^{-13}} l_{yd}\f]
    *
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ (xu)\f$ Length in copper x units.
    *   @see YardToAngstrom() for angstrom conversion.
    *   @see YardToPicometer() for picometer conversion.
    *   @see YardToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T YardToCuXUnit(const T lengthInYard);
   
    /**
    *   @brief Converts a length in yards to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{0.0254 * 36}{1.00209952*10^{-13}} l_{yd}\f]
    *
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see YardToAngstrom() for angstrom conversion.
    *   @see YardToPicometer() for picometer conversion.
    *   @see YardToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T YardToMoXUnit(const T lengthInYard);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Yard-Imperial
    /// @{

    /**
    *   @brief Converts a length in yards to miles.
    *		\f[ l_{mi}=\frac{36}{63360} l_{yd} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T YardToMile(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to feet.
    *		\f[ l_{ft}= \frac{36}{12} l_{yd} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T YardToFoot(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to inches.
    *		\f[ l_{in}= 36 * l_{yd} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T YardToInch(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to mils (thousandth of an inch).
    *		\f[ l_{mil}=36 * l_{yd} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see YardToThou() for alias.
    */
    template<typename T>
    T YardToMil(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to thous (thousandth of an inch).
    *		\f[ l_{mil}=36 * l_{yd} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see YardToMil() for alias.
    */
    template<typename T>
    T YardToThou(const T lengthInYard);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Yard-Nautical
    /// @{

    /**
    *   @brief Converts a length in yards to nautical mile.
    *		\f[ l_{NM}= \frac{0.0254 * 36}{1852} l_{yd}  \f]
    *
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T YardToNauticalMile(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to fathoms.
    *		\f[ l_{fathom}= \frac{36}{72} l_{yd}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T YardToFathom(const T lengthInYard);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Yard-Surveyors
    /// @{

    /**
    *   @brief Converts a length in yards to rods.
    *		\f[ l_{rod}= \frac{36}{198} l_{yd} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T YardToRod(const T lengthInYard);

    /**
    *   @brief Converts a length in yards to chains.
    *		\f[ l_{ch}= \frac{36}{792}  l_{yd} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInYard \f$ l_{yd}\ (yd)\f$ Length in yards.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T YardToChain(const T lengthInYard);

	/// @}
} //namespace EGXMath

#include "YardConversion.inl"
