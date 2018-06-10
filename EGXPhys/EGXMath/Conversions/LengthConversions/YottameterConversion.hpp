/// @file EGXMath/Conversions/LengthConversions/YottameterConversion.hpp
///
/// @brief Converts length measurements in yottameters into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Yottameter Yottameter
/// @ingroup EGXMath-Conversions-LengthConversions

/// @defgroup EGXMath-Conversions-LengthConversions-Yottameter-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Yottameter

/// @defgroup EGXMath-Conversions-LengthConversions-Yottameter-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Yottameter

/// @defgroup EGXMath-Conversions-LengthConversions-Yottameter-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Yottameter

/// @defgroup EGXMath-Conversions-LengthConversions-Yottameter-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Yottameter

/// @defgroup EGXMath-Conversions-LengthConversions-Yottameter-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Yottameter

/// @defgroup EGXMath-Conversions-LengthConversions-Yottameter-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Yottameter

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Yottameter-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in yottameters to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{Ym} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T YottameterToAstronomicalUnit(const T lengthInYottameter);

    /**
    *   @brief Converts a length yottameters in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{Ym} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T YottameterToLightYear(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{Ym} * 10^{24}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T YottameterToParsec(const T lengthInYottameter);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Yottameter-SI
    /// @{
    /**
    *   @brief Converts a length in yottameters to meters.
    *		\f[ l_{m}=l_{Ym} * 10^{24} \f]
    *
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T YottameterToMeter(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to zettameters.
    *		\f[ l_{Zm}=l_{Ym} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T YottameterToZettameter(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to exameters.
    *		\f[ l_{Em}=l_{Ym} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T YottameterToExameter(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to petameters.
    *		\f[ l_{Pm}=l_{Ym} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T YottameterToPetameter(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to terameters.
    *		\f[ l_{Tm}=l_{Ym} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T YottameterToTerameter(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to gigameters.
    *		\f[ l_{Gm}=l_{Ym} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T YottameterToGigameter(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to megameters.
    *		\f[ l_{Mm}=l_{Ym} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T YottameterToMegameter(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to kilometers.
    *		\f[ l_{km}=l_{Ym} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T YottameterToKilometer(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to hectometers.
    *		\f[ l_{hm}=l_{Ym} * 10^{22} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T YottameterToHectometer(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to decameters.
    *		\f[ l_{dam}=l_{Ym} * 10^{23} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T YottameterToDecameter(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to decimeters.
    *		\f[ l_{dm}=l_{Ym} * 10^{25} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T YottameterToDecimeter(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to centimeters.
    *		\f[ l_{cm}=l_{Ym} * 10^{26} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T YottameterToCentimeter(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to millimeters.
    *		\f[ l_{mm}=l_{Ym} * 10^{27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T YottameterToMillimeter(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to micrometers.
    *		\f[ l_{\mu m}=l_{Ym} * 10^{30} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see YottameterToMicron() for alias.
    */
    template<typename T>
    T YottameterToMicrometer(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to nanometers.
    *		\f[ l_{nm}=l_{Ym} * 10^{33} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see YottameterToMicron() for alias.
    */
    template<typename T>
    T YottameterToNanometer(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to picometers.
    *		\f[ l_{pm}=l_{Ym} * 10^{36} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see YottameterToAngstrom() for angstrom conversion.
    *   @see YottameterToCuXUnit() for copper x unit conversion.
    *   @see YottameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T YottameterToPicometer(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to femtometers.
    *		\f[ l_{fm}=l_{Ym} * 10^{39} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see YottameterToFermi() for alias.
    */
    template<typename T>
    T YottameterToFemtometer(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to attometers.
    *		\f[ l_{am}=l_{Ym} * 10^{42} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T YottameterToAttometer(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to zeptometers.
    *		\f[ l_{zm}=l_{Ym} * 10^{45} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T YottameterToZeptometer(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to yoctometers.
    *		\f[ l_{ym}=l_{Ym} * 10^{48} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T YottameterToYoctometer(const T lengthInYottameter);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Yottameter-Non-SI
    /// @{

    /**
    *   @brief Converts a length in yottameters to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{Ym} * 10^{34} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see YottameterToPicometer() for picometer conversion.
    *   @see YottameterToCuXUnit() for copper x unit conversion.
    *   @see YottameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T YottameterToAngstrom(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to fermis.
    *		\f[ l_{fm}=l_{Ym} * 10^{39} \f]
    *
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T YottameterToFermi(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to microns.
    *		\f[ l_{\mu m}=l_{Ym} * 10^{30} \f]
    *
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see YottameterToMicrometer() for alias.
    */
    template<typename T>
    T YottameterToMicron(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{Ym} * 10^{24}\f]
    *
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see YottameterToAngstrom() for angstrom conversion.
    *   @see YottameterToPicometer() for picometer conversion.
    *   @see YottameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T YottameterToCuXUnit(const T lengthInYottameter);
   
    /**
    *   @brief Converts a length in yottameters to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{Ym} * 10^{24}\f]
    *
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see YottameterToAngstrom() for angstrom conversion.
    *   @see YottameterToPicometer() for picometer conversion.
    *   @see YottameterToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T YottameterToMoXUnit(const T lengthInYottameter);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Yottameter-Imperial
    /// @{

    /**
    *   @brief Converts a length in yottameters to miles.
    *		\f[ l_{mi}=\frac{10^{24}}{0.0254 * 63360} l_{Ym} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T YottameterToMile(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to yards.
    *		\f[ l_{yd}=  \frac{10^{24}}{0.0254 * 36} \frac{1}{36} l_{Ym}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T YottameterToYard(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to feet.
    *		\f[ l_{ft}= \frac{10^{24}}{0.0254 * 12} l_{Ym} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T YottameterToFoot(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to inches.
    *		\f[ l_{in}=  \frac{10^{24}}{0.0254} l_{Ym} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T YottameterToInch(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{24}}{0.0254} l_{Ym} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see YottameterToThou() for alias.
    */
    template<typename T>
    T YottameterToMil(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{24}}{0.0254} l_{Ym} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see YottameterToMil() for alias.
    */
    template<typename T>
    T YottameterToThou(const T lengthInYottameter);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Yottameter-Nautical
    /// @{

    /**
    *   @brief Converts a length in yottameters to nautical mile.
    *		\f[ l_{NM}= \frac{10^{24}}{0.0254 * 1852} l_{Ym}  \f]
    *
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T YottameterToNauticalMile(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to fathoms.
    *		\f[ l_{fathom}= \frac{10^{24}}{0.0254 * 72} l_{Ym}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T YottameterToFathom(const T lengthInYottameter);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Yottameter-Surveyors
    /// @{

    /**
    *   @brief Converts a length in yottameters to rods.
    *		\f[ l_{rod}= \frac{10^{24}}{0.0254 * 198} l_{Ym} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T YottameterToRod(const T lengthInYottameter);

    /**
    *   @brief Converts a length in yottameters to chains.
    *		\f[ l_{ch}= \frac{10^{24}}{0.0254 * 792}  l_{Ym} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInYottameter \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T YottameterToChain(const T lengthInYottameter);

	/// @}
} //namespace EGXMath

#include "YottameterConversion.inl"
