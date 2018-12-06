/// @file EGXMath/Conversions/LengthConversions/Nautical/NauticalMileConversion.hpp
///
/// @brief Converts length measurements in nautical miles into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil 
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile Nautical Mile
/// @ingroup EGXMath-Conversions-LengthConversions-Nautical

/// @defgroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile

/// @defgroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile

/// @defgroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile

/// @defgroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile

/// @defgroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile

/// @defgroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in nautical miles to astronomical units.
    *		\f[ l_{au}=  \frac{1852}{149597870700} l_{NM} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T NauticalMileToAstronomicalUnit(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length nautical miles in to light-years.
    *		\f[ l_{ly}= \frac{1852}{9460730472580800} l_{NM} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T NauticalMileToLightYear(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to parsecs.
    *		\f[ l_{pc}=\frac{1852 * \pi}{149597870700 * 648000} l_{NM}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T NauticalMileToParsec(const T lengthInNauticalMile);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile-SI
    /// @{
    /**
    *   @brief Converts a length in nautical miles to meters.
    *		\f[ l_{m}=1852 * l_{NM} \f]
    *
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T NauticalMileToMeter(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to yottameters.
    *		\f[ l_{Ym}=1852 * l_{NM} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T NauticalMileToYottameter(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to zettameters.
    *		\f[ l_{Zm}=1852 * l_{NM} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T NauticalMileToZettameter(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to exameters.
    *		\f[ l_{Em}=1852 * l_{NM} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T NauticalMileToExameter(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to petameters.
    *		\f[ l_{Pm}=1852 * l_{NM} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T NauticalMileToPetameter(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to terameters.
    *		\f[ l_{Tm}=1852 * l_{NM} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T NauticalMileToTerameter(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to gigameters.
    *		\f[ l_{Gm}=1852 * l_{NM} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T NauticalMileToGigameter(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to megameters.
    *		\f[ l_{Mm}=1852 * l_{NM} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T NauticalMileToMegameter(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to kilometers.
    *		\f[ l_{km}=1852 * l_{NM} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T NauticalMileToKilometer(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to hectometers.
    *		\f[ l_{hm}=1852 * l_{NM} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T NauticalMileToHectometer(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to decameters.
    *		\f[ l_{dam}=1852 * l_{NM} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T NauticalMileToDecameter(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to decimeters.
    *		\f[ l_{dm}=1852 * l_{NM} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T NauticalMileToDecimeter(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to centimeters.
    *		\f[ l_{cm}=1852 * l_{NM} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T NauticalMileToCentimeter(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to millimeters.
    *		\f[ l_{mm}=1852 * l_{NM} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T NauticalMileToMillimeter(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to micrometers.
    *		\f[ l_{\mu m}=1852 * l_{NM} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see NauticalMileToMicron() for alias.
    */
    template<typename T>
    T NauticalMileToMicrometer(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to nanometers.
    *		\f[ l_{nm}=1852 * l_{NM} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see NauticalMileToMicron() for alias.
    */
    template<typename T>
    T NauticalMileToNanometer(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to picometers.
    *		\f[ l_{pm}=1852 * l_{NM} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see NauticalMileToAngstrom() for angstrom conversion.
    *   @see NauticalMileToCuXUnit() for copper x unit conversion.
    *   @see NauticalMileToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T NauticalMileToPicometer(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to femtometers.
    *		\f[ l_{fm}=1852 * l_{NM} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see NauticalMileToFermi() for alias.
    */
    template<typename T>
    T NauticalMileToFemtometer(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to attometers.
    *		\f[ l_{am}=1852 * l_{NM} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T NauticalMileToAttometer(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to zeptometers.
    *		\f[ l_{zm}=1852 * l_{NM} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T NauticalMileToZeptometer(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to yoctometers.
    *		\f[ l_{ym}=1852 * l_{NM} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T NauticalMileToYoctometer(const T lengthInNauticalMile);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile-Non-SI
    /// @{

    /**
    *   @brief Converts a length in nautical miles to angstroms.
    *		\f[ l_{\unicode{x212B}}=1852 * l_{NM} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see NauticalMileToPicometer() for picometer conversion.
    *   @see NauticalMileToCuXUnit() for copper x unit conversion.
    *   @see NauticalMileToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T NauticalMileToAngstrom(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to fermis.
    *		\f[ l_{fm}=1852 * l_{NM} * 10^{15} \f]
    *
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T NauticalMileToFermi(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to microns.
    *		\f[ l_{\mu m}=1852 * l_{NM} * 10^{6} \f]
    *
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see NauticalMileToMicrometer() for alias.
    */
    template<typename T>
    T NauticalMileToMicron(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1852}{1.00207697*10^{-13}} l_{NM}\f]
    *
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ (xu)\f$ Length in copper x units.
    *   @see NauticalMileToAngstrom() for angstrom conversion.
    *   @see NauticalMileToPicometer() for picometer conversion.
    *   @see NauticalMileToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T NauticalMileToCuXUnit(const T lengthInNauticalMile);
   
    /**
    *   @brief Converts a length in nautical miles to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1852}{1.00209952*10^{-13}} l_{NM}\f]
    *
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see NauticalMileToAngstrom() for angstrom conversion.
    *   @see NauticalMileToPicometer() for picometer conversion.
    *   @see NauticalMileToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T NauticalMileToMoXUnit(const T lengthInNauticalMile);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile-Imperial
    /// @{

    /**
    *   @brief Converts a length in nautical miles to miles.
    *		\f[ l_{mi}=\frac{1852}{0.0254 * 63360} l_{NM} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T NauticalMileToMile(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to yards.
    *		\f[ l_{yd}=  \frac{1852}{0.0254 * 36}l_{NM}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T NauticalMileToYard(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to feet.
    *		\f[ l_{ft}= \frac{1852}{0.0254 * 12} l_{NM} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T NauticalMileToFoot(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to inches.
    *		\f[ l_{in}=  \frac{1852}{0.0254} l_{NM} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T NauticalMileToInch(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{1852}{0.0254} l_{NM} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see NauticalMileToThou() for alias.
    */
    template<typename T>
    T NauticalMileToMil(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{1852}{0.0254} l_{NM} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see NauticalMileToMil() for alias.
    */
    template<typename T>
    T NauticalMileToThou(const T lengthInNauticalMile);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile-Nautical
    /// @{

    /**
    *   @brief Converts a length in nautical miles to fathoms.
    *		\f[ l_{fathom}= \frac{1852}{0.0254 * 72} l_{NM}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T NauticalMileToFathom(const T lengthInNauticalMile);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Nautical-NauticalMile-Surveyors
    /// @{

    /**
    *   @brief Converts a length in nautical miles to rods.
    *		\f[ l_{rod}= \frac{1852}{0.0254 * 198} l_{NM} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T NauticalMileToRod(const T lengthInNauticalMile);

    /**
    *   @brief Converts a length in nautical miles to chains.
    *		\f[ l_{ch}= \frac{1852}{0.0254 * 792}  l_{NM} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInNauticalMile \f$ l_{NM}\ (NM)\f$ Length in nautical miles.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T NauticalMileToChain(const T lengthInNauticalMile);

	/// @}
} //namespace EGXMath

#include "NauticalMileConversion.inl"
