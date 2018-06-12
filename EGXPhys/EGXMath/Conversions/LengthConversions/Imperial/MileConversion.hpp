/// @file EGXMath/Conversions/LengthConversions/Imperial/MileConversion.hpp
///
/// @brief Converts length measurements in miles into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/11/18

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Mile Mile
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Mile-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Mile

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Mile-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Mile

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Mile-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Mile

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Mile-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Mile

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Mile-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Mile

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Mile-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Mile

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Mile-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in miles to astronomical units.
    *		\f[ l_{au}=\frac{0.0254 * 63360}{149597870700} l_{mi} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T MileToAstronomicalUnit(const T lengthInMile);

    /**
    *   @brief Converts a length miles in to light-years.
    *		\f[ l_{ly}=\frac{0.0254 * 63360}{9460730472580800} l_{mi} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T MileToLightYear(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to parsecs.
    *		\f[ l_{pc}=\frac{0.0254 * 63360 * \pi}{149597870700 * 648000} l_{mi}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T MileToParsec(const T lengthInMile);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Mile-SI
    /// @{
    /**
    *   @brief Converts a length in miles to meters.
    *		\f[ l_{m}=0.0254 * 63360 * l_{mi} \f]
    *
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T MileToMeter(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to yottameters.
    *		\f[ l_{Ym}=0.0254 * 63360 * l_{mi} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T MileToYottameter(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to zettameters.
    *		\f[ l_{Zm}=0.0254 * 63360 * l_{mi} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T MileToZettameter(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to exameters.
    *		\f[ l_{Em}=0.0254 * 63360 * l_{mi} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T MileToExameter(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to petameters.
    *		\f[ l_{Pm}=0.0254 * 63360 * l_{mi} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T MileToPetameter(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to terameters.
    *		\f[ l_{Tm}=0.0254 * 63360 * l_{mi} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T MileToTerameter(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to gigameters.
    *		\f[ l_{Gm}=0.0254 * 63360 * l_{mi} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T MileToGigameter(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to megameters.
    *		\f[ l_{Mm}=0.0254 * 63360 * l_{mi} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T MileToMegameter(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to kilometers.
    *		\f[ l_{km}=0.0254 * 63360 * l_{mi} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T MileToKilometer(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to hectometers.
    *		\f[ l_{hm}=0.0254 * 63360 * l_{mi} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T MileToHectometer(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to decameters.
    *		\f[ l_{dam}=0.0254 * 63360 * l_{mi} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T MileToDecameter(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to decimeters.
    *		\f[ l_{dm}=0.0254 * 63360 * l_{mi} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T MileToDecimeter(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to centimeters.
    *		\f[ l_{cm}=0.0254 * 63360 * l_{mi} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T MileToCentimeter(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to millimeters.
    *		\f[ l_{mm}=0.0254 * 63360 * l_{mi} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T MileToMillimeter(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to micrometers.
    *		\f[ l_{\mu m}=0.0254 * 63360 * l_{mi} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see MileToMicron() for alias.
    */
    template<typename T>
    T MileToMicrometer(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to nanometers.
    *		\f[ l_{nm}=0.0254 * 63360 * l_{mi} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see MileToMicron() for alias.
    */
    template<typename T>
    T MileToNanometer(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to picometers.
    *		\f[ l_{pm}=0.0254 * 63360 * l_{mi} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see MileToAngstrom() for angstrom conversion.
    *   @see MileToCuXUnit() for copper x unit conversion.
    *   @see MileToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MileToPicometer(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to femtometers.
    *		\f[ l_{fm}=0.0254 * 63360 * l_{mi} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see MileToFermi() for alias.
    */
    template<typename T>
    T MileToFemtometer(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to attometers.
    *		\f[ l_{am}=0.0254 * 63360 * l_{mi} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T MileToAttometer(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to zeptometers.
    *		\f[ l_{zm}=0.0254 * 63360 * l_{mi} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T MileToZeptometer(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to yoctometers.
    *		\f[ l_{ym}=0.0254 * 63360 * l_{mi} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T MileToYoctometer(const T lengthInMile);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Mile-Non-SI
    /// @{

    /**
    *   @brief Converts a length in miles to angstroms.
    *		\f[ l_{\unicode{x212B}}=0.0254 * 63360 * l_{mi} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see MileToPicometer() for picometer conversion.
    *   @see MileToCuXUnit() for copper x unit conversion.
    *   @see MileToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MileToAngstrom(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to fermis.
    *		\f[ l_{fm}=0.0254 * 63360 * l_{mi} * 10^{15} \f]
    *
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T MileToFermi(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to microns.
    *		\f[ l_{\mu m}=0.0254 * 63360 * l_{mi} * 10^{6} \f]
    *
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see MileToMicrometer() for alias.
    */
    template<typename T>
    T MileToMicron(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}=0.0254 * 63360 * \frac{1}{1.00207697*10^{-13}} l_{mi}\f]
    *
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see MileToAngstrom() for angstrom conversion.
    *   @see MileToPicometer() for picometer conversion.
    *   @see MileToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T MileToCuXUnit(const T lengthInMile);
   
    /**
    *   @brief Converts a length in miles to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=0.0254 * 63360 * \frac{1}{1.00209952*10^{-13}} l_{mi}\f]
    *
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see MileToAngstrom() for angstrom conversion.
    *   @see MileToPicometer() for picometer conversion.
    *   @see MileToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T MileToMoXUnit(const T lengthInMile);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Mile-Imperial
    /// @{

    /**
    *   @brief Converts a length in miles to yards.
    *		\f[ l_{yd}=  \frac{63360}{36} l_{mi}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T MileToYard(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to feet.
    *		\f[ l_{ft}= \frac{63360}{12} l_{mi} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T MileToFoot(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to inches.
    *		\f[ l_{in}=63360 * l_{mi} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T MileToInch(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to mils (thousandth of an inch).
    *		\f[ l_{mil}=63360 * l_{mi} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see MileToThou() for alias.
    */
    template<typename T>
    T MileToMil(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to thous (thousandth of an inch).
    *		\f[ l_{mil}=63360 * l_{mi} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see MileToMil() for alias.
    */
    template<typename T>
    T MileToThou(const T lengthInMile);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Mile-Nautical
    /// @{

    /**
    *   @brief Converts a length in miles to nautical mile.
    *		\f[ l_{NM}= \frac{0.0254 * 63360}{1852} l_{mi}  \f]
    *
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T MileToNauticalMile(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to fathoms.
    *		\f[ l_{fathom}= \frac{63360}{72} l_{mi}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T MileToFathom(const T lengthInMile);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Mile-Surveyors
    /// @{

    /**
    *   @brief Converts a length in miles to rods.
    *		\f[ l_{rod}= \frac{63360}{198} l_{mi} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T MileToRod(const T lengthInMile);

    /**
    *   @brief Converts a length in miles to chains.
    *		\f[ l_{ch}= \frac{63360}{792}  l_{mi} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInMile \f$ l_{mi}\ (mi)\f$ Length in miles.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T MileToChain(const T lengthInMile);

	/// @}
} //namespace EGXMath

#include "MileConversion.inl"
