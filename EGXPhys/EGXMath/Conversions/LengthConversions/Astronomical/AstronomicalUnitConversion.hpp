/// @file EGXMath/Conversions/LengthConversions/Astronomical/AstronomicalUnitConversion.hpp
///
/// @brief Converts length measurements in astronomical units into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/11/18

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit AstronomicalUnit
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit

/// @defgroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit-Astronomical
	/// @{

    /**
    *   @brief Converts a length astronomical units in to light-years.
    *		\f[ l_{ly}= \frac{149597870700}{9460730472580800} l_{au}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T AstronomicalUnitToLightYear(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{648000} l_{au}   \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T AstronomicalUnitToParsec(const T lengthInAstronomicalUnit);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit-SI
    /// @{
    /**
    *   @brief Converts a length in astronomical units to meters.
    *		\f[ l_{m}=149597870700 * l_{au}  \f]
    *
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T AstronomicalUnitToMeter(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to yottameters.
    *		\f[ l_{Ym}=149597870700 * l_{au} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T AstronomicalUnitToYottameter(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to zettameters.
    *		\f[ l_{Zm}=149597870700 * l_{au} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T AstronomicalUnitToZettameter(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to exameters.
    *		\f[ l_{Em}=149597870700 * l_{au} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T AstronomicalUnitToExameter(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to petameters.
    *		\f[ l_{Pm}=149597870700 * l_{au} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T AstronomicalUnitToPetameter(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to terameters.
    *		\f[ l_{Tm}=149597870700 * l_{au} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T AstronomicalUnitToTerameter(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to gigameters.
    *		\f[ l_{Gm}=149597870700 * l_{au} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T AstronomicalUnitToGigameter(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to megameters.
    *		\f[ l_{Mm}=149597870700 * l_{au} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T AstronomicalUnitToMegameter(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to kilometers.
    *		\f[ l_{km}=149597870700 * l_{au} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T AstronomicalUnitToKilometer(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to hectometers.
    *		\f[ l_{hm}=149597870700 * l_{au} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T AstronomicalUnitToHectometer(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to decameters.
    *		\f[ l_{dam}=149597870700 * l_{au} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T AstronomicalUnitToDecameter(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to decimeters.
    *		\f[ l_{dm}=149597870700 * l_{au} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T AstronomicalUnitToDecimeter(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to centimeters.
    *		\f[ l_{cm}=149597870700 * l_{au} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T AstronomicalUnitToCentimeter(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to millimeters.
    *		\f[ l_{mm}=149597870700 * l_{au} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T AstronomicalUnitToMillimeter(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to micrometers.
    *		\f[ l_{\mu m}=149597870700 * l_{au} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see AstronomicalUnitToMicron() for alias.
    */
    template<typename T>
    T AstronomicalUnitToMicrometer(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to nanometers.
    *		\f[ l_{nm}=149597870700 * l_{au} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see AstronomicalUnitToMicron() for alias.
    */
    template<typename T>
    T AstronomicalUnitToNanometer(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to picometers.
    *		\f[ l_{pm}=149597870700 * l_{au} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see AstronomicalUnitToAngstrom() for angstrom conversion.
    *   @see AstronomicalUnitToCuXUnit() for copper x unit conversion.
    *   @see AstronomicalUnitToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T AstronomicalUnitToPicometer(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to femtometers.
    *		\f[ l_{fm}=149597870700 * l_{au} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see AstronomicalUnitToFermi() for alias.
    */
    template<typename T>
    T AstronomicalUnitToFemtometer(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to attometers.
    *		\f[ l_{am}=149597870700 * l_{au} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T AstronomicalUnitToAttometer(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to zeptometers.
    *		\f[ l_{zm}=149597870700 * l_{au} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T AstronomicalUnitToZeptometer(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to yoctometers.
    *		\f[ l_{ym}=149597870700 * l_{au} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T AstronomicalUnitToYoctometer(const T lengthInAstronomicalUnit);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit-Non-SI
    /// @{

    /**
    *   @brief Converts a length in astronomical units to angstroms.
    *		\f[ l_{\unicode{x212B}}=149597870700 * l_{au} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see AstronomicalUnitToPicometer() for picometer conversion.
    *   @see AstronomicalUnitToCuXUnit() for copper x unit conversion.
    *   @see AstronomicalUnitToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T AstronomicalUnitToAngstrom(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to fermis.
    *		\f[ l_{fm}=149597870700 * l_{au} * 10^{15} \f]
    *
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T AstronomicalUnitToFermi(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to microns.
    *		\f[ l_{\mu m}=149597870700 * l_{au} * 10^{6} \f]
    *
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see AstronomicalUnitToMicrometer() for alias.
    */
    template<typename T>
    T AstronomicalUnitToMicron(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{149597870700}{1.00207697*10^{-13}} l_{au} \f]
    *
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see AstronomicalUnitToAngstrom() for angstrom conversion.
    *   @see AstronomicalUnitToPicometer() for picometer conversion.
    *   @see AstronomicalUnitToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T AstronomicalUnitToCuXUnit(const T lengthInAstronomicalUnit);
   
    /**
    *   @brief Converts a length in astronomical units to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{149597870700}{1.00209952*10^{-13}} l_{au} \f]
    *
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see AstronomicalUnitToAngstrom() for angstrom conversion.
    *   @see AstronomicalUnitToPicometer() for picometer conversion.
    *   @see AstronomicalUnitToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T AstronomicalUnitToMoXUnit(const T lengthInAstronomicalUnit);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit-Imperial
    /// @{

    /**
    *   @brief Converts a length in astronomical units to miles.
    *		\f[ l_{mi}=\frac{149597870700}{0.0254 * 63360} l_{au} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T AstronomicalUnitToMile(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to yards.
    *		\f[ l_{yd}=  \frac{149597870700}{0.0254 * 36} l_{au}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T AstronomicalUnitToYard(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to feet.
    *		\f[ l_{ft}= \frac{149597870700}{0.0254 * 12} l_{au} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T AstronomicalUnitToFoot(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to inches.
    *		\f[ l_{in}=  \frac{149597870700}{0.0254} l_{au} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T AstronomicalUnitToInch(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{149597870700}{0.0254} l_{au} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see AstronomicalUnitToThou() for alias.
    */
    template<typename T>
    T AstronomicalUnitToMil(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{149597870700}{0.0254} l_{au} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see AstronomicalUnitToMil() for alias.
    */
    template<typename T>
    T AstronomicalUnitToThou(const T lengthInAstronomicalUnit);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit-Nautical
    /// @{

    /**
    *   @brief Converts a length in astronomical units to nautical mile.
    *		\f[ l_{NM}= \frac{149597870700}{1852} l_{au}  \f]
    *
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T AstronomicalUnitToNauticalMile(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to fathoms.
    *		\f[ l_{fathom}= \frac{149597870700}{0.0254 * 72} l_{au}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T AstronomicalUnitToFathom(const T lengthInAstronomicalUnit);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Astronomical-AstronomicalUnit-Surveyors
    /// @{

    /**
    *   @brief Converts a length in astronomical units to rods.
    *		\f[ l_{rod}= \frac{149597870700}{0.0254 * 198} l_{au} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T AstronomicalUnitToRod(const T lengthInAstronomicalUnit);

    /**
    *   @brief Converts a length in astronomical units to chains.
    *		\f[ l_{ch}= \frac{149597870700}{0.0254 * 792}  l_{au} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInAstronomicalUnit \f$ l_{au}\ (au)\f$ Length in astronomical units.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T AstronomicalUnitToChain(const T lengthInAstronomicalUnit);

	/// @}
} //namespace EGXMath

#include "AstronomicalUnitConversion.inl"
