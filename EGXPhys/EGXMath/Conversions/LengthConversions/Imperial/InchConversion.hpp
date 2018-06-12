/// @file EGXMath/Conversions/LengthConversions/Imperial/InchConversion.hpp
///
/// @brief Converts length measurements in inchs into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/11/18

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Inch Inch
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Inch-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Inch

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Inch-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Inch

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Inch-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Inch

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Inch-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Inch

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Inch-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Inch

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Inch-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Inch

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Inch-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in inchs to astronomical units.
    *		\f[ l_{au}=\frac{0.0254}{149597870700} l_{in} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T InchToAstronomicalUnit(const T lengthInInch);

    /**
    *   @brief Converts a length inchs in to light-years.
    *		\f[ l_{ly}=\frac{0.0254}{9460730472580800} l_{in} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T InchToLightYear(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to parsecs.
    *		\f[ l_{pc}=\frac{0.0254 * \pi}{149597870700 * 648000} l_{in}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T InchToParsec(const T lengthInInch);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Inch-SI
    /// @{
    /**
    *   @brief Converts a length in inchs to meters.
    *		\f[ l_{m}=0.0254 * l_{in} \f]
    *
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T InchToMeter(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to yottameters.
    *		\f[ l_{Ym}=0.0254 * l_{in} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T InchToYottameter(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to zettameters.
    *		\f[ l_{Zm}=0.0254 * l_{in} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T InchToZettameter(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to exameters.
    *		\f[ l_{Em}=0.0254 * l_{in} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T InchToExameter(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to petameters.
    *		\f[ l_{Pm}=0.0254 * l_{in} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T InchToPetameter(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to terameters.
    *		\f[ l_{Tm}=0.0254 * l_{in} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T InchToTerameter(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to gigameters.
    *		\f[ l_{Gm}=0.0254 * l_{in} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T InchToGigameter(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to megameters.
    *		\f[ l_{Mm}=0.0254 * l_{in} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T InchToMegameter(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to kilometers.
    *		\f[ l_{km}=0.0254 * l_{in} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T InchToKilometer(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to hectometers.
    *		\f[ l_{hm}=0.0254 * l_{in} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T InchToHectometer(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to decameters.
    *		\f[ l_{dam}=0.0254 * l_{in} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T InchToDecameter(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to decimeters.
    *		\f[ l_{dm}=0.0254 * l_{in} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T InchToDecimeter(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to centimeters.
    *		\f[ l_{cm}=0.0254 * l_{in} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T InchToCentimeter(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to millimeters.
    *		\f[ l_{mm}=0.0254 * l_{in} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T InchToMillimeter(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to micrometers.
    *		\f[ l_{\mu m}=0.0254 * l_{in} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see InchToMicron() for alias.
    */
    template<typename T>
    T InchToMicrometer(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to nanometers.
    *		\f[ l_{nm}=0.0254 * l_{in} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see InchToMicron() for alias.
    */
    template<typename T>
    T InchToNanometer(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to picometers.
    *		\f[ l_{pm}=0.0254 * l_{in} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see InchToAngstrom() for angstrom conversion.
    *   @see InchToCuXUnit() for copper x unit conversion.
    *   @see InchToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T InchToPicometer(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to femtometers.
    *		\f[ l_{fm}=0.0254 * l_{in} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see InchToFermi() for alias.
    */
    template<typename T>
    T InchToFemtometer(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to attometers.
    *		\f[ l_{am}=0.0254 * l_{in} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T InchToAttometer(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to zeptometers.
    *		\f[ l_{zm}=0.0254 * l_{in} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T InchToZeptometer(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to yoctometers.
    *		\f[ l_{ym}=0.0254 * l_{in} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T InchToYoctometer(const T lengthInInch);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Inch-Non-SI
    /// @{

    /**
    *   @brief Converts a length in inchs to angstroms.
    *		\f[ l_{\unicode{x212B}}=0.0254 * l_{in} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see InchToPicometer() for picometer conversion.
    *   @see InchToCuXUnit() for copper x unit conversion.
    *   @see InchToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T InchToAngstrom(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to fermis.
    *		\f[ l_{fm}=0.0254 * l_{in} * 10^{15} \f]
    *
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T InchToFermi(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to microns.
    *		\f[ l_{\mu m}=0.0254 * l_{in} * 10^{6} \f]
    *
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see InchToMicrometer() for alias.
    */
    template<typename T>
    T InchToMicron(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}=0.0254 * \frac{1}{1.00207697*10^{-13}} l_{in}\f]
    *
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see InchToAngstrom() for angstrom conversion.
    *   @see InchToPicometer() for picometer conversion.
    *   @see InchToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T InchToCuXUnit(const T lengthInInch);
   
    /**
    *   @brief Converts a length in inchs to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=0.0254 * \frac{1}{1.00209952*10^{-13}} l_{in}\f]
    *
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see InchToAngstrom() for angstrom conversion.
    *   @see InchToPicometer() for picometer conversion.
    *   @see InchToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T InchToMoXUnit(const T lengthInInch);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Inch-Imperial
    /// @{

    /**
    *   @brief Converts a length in inchs to miles.
    *		\f[ l_{mi}=\frac{1}{63360} l_{in} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T InchToMile(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to yards.
    *		\f[ l_{yd}= \frac{1}{36} l_{in}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T InchToYard(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to feet.
    *		\f[ l_{ft}= \frac{1}{12} l_{in} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T InchToFoot(const T lengthInInch);

 
    /**
    *   @brief Converts a length in inchs to mils (thousandth of an inch).
    *		\f[ l_{mil}=l_{in} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see InchToThou() for alias.
    */
    template<typename T>
    T InchToMil(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to thous (thousandth of an inch).
    *		\f[ l_{mil}= l_{in} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see InchToMil() for alias.
    */
    template<typename T>
    T InchToThou(const T lengthInInch);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Inch-Nautical
    /// @{

    /**
    *   @brief Converts a length in inchs to nautical mile.
    *		\f[ l_{NM}= \frac{0.0254}{1852} l_{in}  \f]
    *
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T InchToNauticalMile(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to fathoms.
    *		\f[ l_{fathom}= \frac{1}{72} l_{in}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T InchToFathom(const T lengthInInch);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Inch-Surveyors
    /// @{

    /**
    *   @brief Converts a length in inchs to rods.
    *		\f[ l_{rod}= \frac{1}{198} l_{in} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T InchToRod(const T lengthInInch);

    /**
    *   @brief Converts a length in inchs to chains.
    *		\f[ l_{ch}= \frac{1}{792}  l_{in} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInInch \f$ l_{in}\ (in)\f$ Length in inchs.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T InchToChain(const T lengthInInch);

	/// @}
} //namespace EGXMath

#include "InchConversion.inl"
