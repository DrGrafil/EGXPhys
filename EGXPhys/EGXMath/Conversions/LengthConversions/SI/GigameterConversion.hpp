/// @file EGXMath/Conversions/LengthConversions/SI/GigameterConversion.hpp
///
/// @brief Converts length measurements in gigameters into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Gigameter Gigameter
/// @ingroup EGXMath-Conversions-LengthConversions

/// @defgroup EGXMath-Conversions-LengthConversions-Gigameter-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Gigameter

/// @defgroup EGXMath-Conversions-LengthConversions-Gigameter-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Gigameter

/// @defgroup EGXMath-Conversions-LengthConversions-Gigameter-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Gigameter

/// @defgroup EGXMath-Conversions-LengthConversions-Gigameter-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Gigameter

/// @defgroup EGXMath-Conversions-LengthConversions-Gigameter-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Gigameter

/// @defgroup EGXMath-Conversions-LengthConversions-Gigameter-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Gigameter

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Gigameter-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in gigameters to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{Gm} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T GigameterToAstronomicalUnit(const T lengthInGigameter);

    /**
    *   @brief Converts a length gigameters in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{Gm} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T GigameterToLightYear(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{Gm} * 10^{9}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T GigameterToParsec(const T lengthInGigameter);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Gigameter-SI
    /// @{
    /**
    *   @brief Converts a length in gigameters to meters.
    *		\f[ l_{m}=l_{Gm}  * 10^{9}\f]
    *
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T GigameterToMeter(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to yottameters.
    *		\f[ l_{Ym}=l_{Gm} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T GigameterToYottameter(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to zettameters.
    *		\f[ l_{Zm}=l_{Gm} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T GigameterToZettameter(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to exameters.
    *		\f[ l_{Em}=l_{Gm} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T GigameterToExameter(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to petameters.
    *		\f[ l_{Pm}=l_{Gm} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T GigameterToPetameter(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to terameters.
    *		\f[ l_{Tm}=l_{Gm} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T GigameterToTerameter(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to megameters.
    *		\f[ l_{Mm}=l_{Gm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T GigameterToMegameter(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to kilometers.
    *		\f[ l_{km}=l_{Gm} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T GigameterToKilometer(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to hectometers.
    *		\f[ l_{hm}=l_{Gm} * 10^{7} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T GigameterToHectometer(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to decameters.
    *		\f[ l_{dam}=l_{Gm} * 10^{8} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T GigameterToDecameter(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to decimeters.
    *		\f[ l_{dm}=l_{Gm} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T GigameterToDecimeter(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to centimeters.
    *		\f[ l_{cm}=l_{Gm} * 10^{11} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T GigameterToCentimeter(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to millimeters.
    *		\f[ l_{mm}=l_{Gm} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T GigameterToMillimeter(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to micrometers.
    *		\f[ l_{\mu m}=l_{Gm} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see GigameterToMicron() for alias.
    */
    template<typename T>
    T GigameterToMicrometer(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to nanometers.
    *		\f[ l_{nm}=l_{Gm} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see GigameterToMicron() for alias.
    */
    template<typename T>
    T GigameterToNanometer(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to picometers.
    *		\f[ l_{pm}=l_{Gm} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see GigameterToAngstrom() for angstrom conversion.
    *   @see GigameterToCuXUnit() for copper x unit conversion.
    *   @see GigameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T GigameterToPicometer(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to femtometers.
    *		\f[ l_{fm}=l_{Gm} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see GigameterToFermi() for alias.
    */
    template<typename T>
    T GigameterToFemtometer(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to attometers.
    *		\f[ l_{am}=l_{Gm} * 10^{27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T GigameterToAttometer(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to zeptometers.
    *		\f[ l_{zm}=l_{Gm} * 10^{30} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T GigameterToZeptometer(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to yoctometers.
    *		\f[ l_{ym}=l_{Gm} * 10^{33} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T GigameterToYoctometer(const T lengthInGigameter);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Gigameter-Non-SI
    /// @{

    /**
    *   @brief Converts a length in gigameters to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{Gm} * 10^{19} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see GigameterToPicometer() for picometer conversion.
    *   @see GigameterToCuXUnit() for copper x unit conversion.
    *   @see GigameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T GigameterToAngstrom(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to fermis.
    *		\f[ l_{fm}=l_{Gm} * 10^{24} \f]
    *
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T GigameterToFermi(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to microns.
    *		\f[ l_{\mu m}=l_{Gm} * 10^{15} \f]
    *
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see GigameterToMicrometer() for alias.
    */
    template<typename T>
    T GigameterToMicron(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{Gm} * 10^{9}\f]
    *
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see GigameterToAngstrom() for angstrom conversion.
    *   @see GigameterToPicometer() for picometer conversion.
    *   @see GigameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T GigameterToCuXUnit(const T lengthInGigameter);
   
    /**
    *   @brief Converts a length in gigameters to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{Gm} * 10^{9}\f]
    *
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see GigameterToAngstrom() for angstrom conversion.
    *   @see GigameterToPicometer() for picometer conversion.
    *   @see GigameterToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T GigameterToMoXUnit(const T lengthInGigameter);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Gigameter-Imperial
    /// @{

    /**
    *   @brief Converts a length in gigameters to miles.
    *		\f[ l_{mi}=\frac{10^{9}}{0.0254 * 63360} l_{Gm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T GigameterToMile(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to yards.
    *		\f[ l_{yd}=  \frac{10^{9}}{0.0254 * 36} \frac{1}{36} l_{Gm}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T GigameterToYard(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to feet.
    *		\f[ l_{ft}= \frac{10^{9}}{0.0254 * 12} l_{Gm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T GigameterToFoot(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to inches.
    *		\f[ l_{in}=  \frac{10^{9}}{0.0254} l_{Gm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T GigameterToInch(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{9}}{0.0254} l_{Gm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see GigameterToThou() for alias.
    */
    template<typename T>
    T GigameterToMil(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{9}}{0.0254} l_{Gm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see GigameterToMil() for alias.
    */
    template<typename T>
    T GigameterToThou(const T lengthInGigameter);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Gigameter-Nautical
    /// @{

    /**
    *   @brief Converts a length in gigameters to nautical mile.
    *		\f[ l_{NM}= \frac{10^{9}}{0.0254 * 1852} l_{Gm}  \f]
    *
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T GigameterToNauticalMile(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to fathoms.
    *		\f[ l_{fathom}= \frac{10^{9}}{0.0254 * 72} l_{Gm}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T GigameterToFathom(const T lengthInGigameter);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Gigameter-Surveyors
    /// @{

    /**
    *   @brief Converts a length in gigameters to rods.
    *		\f[ l_{rod}= \frac{10^{9}}{0.0254 * 198} l_{Gm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T GigameterToRod(const T lengthInGigameter);

    /**
    *   @brief Converts a length in gigameters to chains.
    *		\f[ l_{ch}= \frac{10^{9}}{0.0254 * 792}  l_{Gm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInGigameter \f$ l_{Gm}\ (Gm)\f$ Length in gigameters.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T GigameterToChain(const T lengthInGigameter);

	/// @}
} //namespace EGXMath

#include "GigameterConversion.inl"
