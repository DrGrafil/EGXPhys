/// @file EGXMath/Conversions/LengthConversions/Imperial/FootConversion.hpp
///
/// @brief Converts length measurements in ulongxxits into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/11/18

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Foot Foot
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Foot-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Foot

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Foot-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Foot

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Foot-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Foot

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Foot-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Foot

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Foot-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Foot

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Foot-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Foot

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Foot-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in ulongxxits to astronomical units.
    *		\f[ l_{au}=\frac{0.0254 * 12}{149597870700} l_{ft} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T FootToAstronomicalUnit(const T lengthInFoot);

    /**
    *   @brief Converts a length ulongxxits in to light-years.
    *		\f[ l_{ly}=\frac{0.0254 * 12}{9460730472580800} l_{ft} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T FootToLightYear(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to parsecs.
    *		\f[ l_{pc}=\frac{0.0254 * 12 \pi}{149597870700 * 648000} l_{ft}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T FootToParsec(const T lengthInFoot);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Foot-SI
    /// @{
    /**
    *   @brief Converts a length in ulongxxits to meters.
    *		\f[ l_{m}=0.0254 * 12 * l_{ft} \f]
    *
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T FootToMeter(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to yottameters.
    *		\f[ l_{Ym}=0.0254 * 12 * l_{ft} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T FootToYottameter(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to zettameters.
    *		\f[ l_{Zm}=0.0254 * 12 * l_{ft} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T FootToZettameter(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to exameters.
    *		\f[ l_{Em}=0.0254 * 12 * l_{ft} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T FootToExameter(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to petameters.
    *		\f[ l_{Pm}=0.0254 * 12 * l_{ft} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T FootToPetameter(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to terameters.
    *		\f[ l_{Tm}=0.0254 * 12 * l_{ft} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T FootToTerameter(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to gigameters.
    *		\f[ l_{Gm}=0.0254 * 12 * l_{ft} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T FootToGigameter(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to megameters.
    *		\f[ l_{Mm}=0.0254 * 12 * l_{ft} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T FootToMegameter(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to kilometers.
    *		\f[ l_{km}=0.0254 * 12 * l_{ft} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T FootToKilometer(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to hectometers.
    *		\f[ l_{hm}=0.0254 * 12 * l_{ft} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T FootToHectometer(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to decameters.
    *		\f[ l_{dam}=0.0254 * 12 * l_{ft} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T FootToDecameter(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to decimeters.
    *		\f[ l_{dm}=0.0254 * 12 * l_{ft} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T FootToDecimeter(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to centimeters.
    *		\f[ l_{cm}=0.0254 * 12 * l_{ft} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T FootToCentimeter(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to millimeters.
    *		\f[ l_{mm}=0.0254 * 12 * l_{ft} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T FootToMillimeter(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to micrometers.
    *		\f[ l_{\mu m}=0.0254 * 12 * l_{ft} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see FootToMicron() for alias.
    */
    template<typename T>
    T FootToMicrometer(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to nanometers.
    *		\f[ l_{nm}=0.0254 * 12 * l_{ft} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see FootToMicron() for alias.
    */
    template<typename T>
    T FootToNanometer(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to picometers.
    *		\f[ l_{pm}=0.0254 * 12 * l_{ft} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see FootToAngstrom() for angstrom conversion.
    *   @see FootToCuXUnit() for copper x unit conversion.
    *   @see FootToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T FootToPicometer(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to femtometers.
    *		\f[ l_{fm}=0.0254 * 12 * l_{ft} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see FootToFermi() for alias.
    */
    template<typename T>
    T FootToFemtometer(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to attometers.
    *		\f[ l_{am}=0.0254 * 12 * l_{ft} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T FootToAttometer(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to zeptometers.
    *		\f[ l_{zm}=0.0254 * 12 * l_{ft} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T FootToZeptometer(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to yoctometers.
    *		\f[ l_{ym}=0.0254 * 12 * l_{ft} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T FootToYoctometer(const T lengthInFoot);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Foot-Non-SI
    /// @{

    /**
    *   @brief Converts a length in ulongxxits to angstroms.
    *		\f[ l_{\unicode{x212B}}=0.0254 * 12 * l_{ft} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see FootToPicometer() for picometer conversion.
    *   @see FootToCuXUnit() for copper x unit conversion.
    *   @see FootToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T FootToAngstrom(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to fermis.
    *		\f[ l_{fm}=0.0254 * 12 * l_{ft} * 10^{15} \f]
    *
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T FootToFermi(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to microns.
    *		\f[ l_{\mu m}=0.0254 * 12 * l_{ft} * 10^{6} \f]
    *
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see FootToMicrometer() for alias.
    */
    template<typename T>
    T FootToMicron(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}=\frac{0.0254 * 12}{1.00207697*10^{-13}} l_{ft}\f]
    *
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ (xu)\f$ Length in copper x units.
    *   @see FootToAngstrom() for angstrom conversion.
    *   @see FootToPicometer() for picometer conversion.
    *   @see FootToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T FootToCuXUnit(const T lengthInFoot);
   
    /**
    *   @brief Converts a length in ulongxxits to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{0.0254 * 12}{1.00209952*10^{-13}} l_{ft}\f]
    *
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see FootToAngstrom() for angstrom conversion.
    *   @see FootToPicometer() for picometer conversion.
    *   @see FootToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T FootToMoXUnit(const T lengthInFoot);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Foot-Imperial
    /// @{

    /**
    *   @brief Converts a length in ulongxxits to miles.
    *		\f[ l_{mi}=\frac{12}{63360} l_{ft} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T FootToMile(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to yards.
    *		\f[ l_{yd}=  \frac{12}{36} l_{ft}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T FootToYard(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to inches.
    *		\f[ l_{in}=12 * l_{ft} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T FootToInch(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to mils (thousandth of an inch).
    *		\f[ l_{mil}=12 * l_{ft} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see FootToThou() for alias.
    */
    template<typename T>
    T FootToMil(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to thous (thousandth of an inch).
    *		\f[ l_{mil}=12 * l_{ft} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see FootToMil() for alias.
    */
    template<typename T>
    T FootToThou(const T lengthInFoot);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Foot-Nautical
    /// @{

    /**
    *   @brief Converts a length in ulongxxits to nautical mile.
    *		\f[ l_{NM}= \frac{0.0254 * 12}{1852} l_{ft}  \f]
    *
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T FootToNauticalMile(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to fathoms.
    *		\f[ l_{fathom}= \frac{12}{72} l_{ft}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T FootToFathom(const T lengthInFoot);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Foot-Surveyors
    /// @{

    /**
    *   @brief Converts a length in ulongxxits to rods.
    *		\f[ l_{rod}= \frac{12}{198} l_{ft} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T FootToRod(const T lengthInFoot);

    /**
    *   @brief Converts a length in ulongxxits to chains.
    *		\f[ l_{ch}= \frac{12}{792}  l_{ft} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInFoot \f$ l_{ft}\ (ft)\f$ Length in ulongxxits.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T FootToChain(const T lengthInFoot);

	/// @}
} //namespace EGXMath

#include "FootConversion.inl"
