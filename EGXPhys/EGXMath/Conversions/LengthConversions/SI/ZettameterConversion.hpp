/// @file EGXMath/Conversions/LengthConversions/SI/ZettameterConversion.hpp
///
/// @brief Converts length measurements in zettameters into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil 
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Zettameter Zettameter
/// @ingroup EGXMath-Conversions-LengthConversions-SI

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Zettameter-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Zettameter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Zettameter-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Zettameter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Zettameter-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Zettameter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Zettameter-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Zettameter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Zettameter-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Zettameter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Zettameter-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Zettameter

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-SI-Zettameter-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in zettameters to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{Zm} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T ZettameterToAstronomicalUnit(const T lengthInZettameter);

    /**
    *   @brief Converts a length zettameters in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{Zm} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T ZettameterToLightYear(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{Zm} * 10^{21}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T ZettameterToParsec(const T lengthInZettameter);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Zettameter-SI
    /// @{
    /**
    *   @brief Converts a length in zettameters to meters.
    *		\f[ l_{m}=l_{Zm} * 10^{21} \f]
    *
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T ZettameterToMeter(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to yottameters.
    *		\f[ l_{Ym}=l_{Zm} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T ZettameterToYottameter(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to exameters.
    *		\f[ l_{Em}=l_{Zm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T ZettameterToExameter(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to petameters.
    *		\f[ l_{Pm}=l_{Zm} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T ZettameterToPetameter(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to terameters.
    *		\f[ l_{Tm}=l_{Zm} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T ZettameterToTerameter(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to gigameters.
    *		\f[ l_{Gm}=l_{Zm} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T ZettameterToGigameter(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to megameters.
    *		\f[ l_{Mm}=l_{Zm} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T ZettameterToMegameter(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to kilometers.
    *		\f[ l_{km}=l_{Zm} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T ZettameterToKilometer(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to hectometers.
    *		\f[ l_{hm}=l_{Zm} * 10^{19} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T ZettameterToHectometer(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to decameters.
    *		\f[ l_{dam}=l_{Zm} * 10^{20} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T ZettameterToDecameter(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to decimeters.
    *		\f[ l_{dm}=l_{Zm} * 10^{22} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T ZettameterToDecimeter(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to centimeters.
    *		\f[ l_{cm}=l_{Zm} * 10^{23} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T ZettameterToCentimeter(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to millimeters.
    *		\f[ l_{mm}=l_{Zm} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T ZettameterToMillimeter(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to micrometers.
    *		\f[ l_{\mu m}=l_{Zm} * 10^{27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see ZettameterToMicron() for alias.
    */
    template<typename T>
    T ZettameterToMicrometer(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to nanometers.
    *		\f[ l_{nm}=l_{Zm} * 10^{30} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see ZettameterToMicron() for alias.
    */
    template<typename T>
    T ZettameterToNanometer(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to picometers.
    *		\f[ l_{pm}=l_{Zm} * 10^{33} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see ZettameterToAngstrom() for angstrom conversion.
    *   @see ZettameterToCuXUnit() for copper x unit conversion.
    *   @see ZettameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ZettameterToPicometer(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to femtometers.
    *		\f[ l_{fm}=l_{Zm} * 10^{36} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see ZettameterToFermi() for alias.
    */
    template<typename T>
    T ZettameterToFemtometer(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to attometers.
    *		\f[ l_{am}=l_{Zm} * 10^{39} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T ZettameterToAttometer(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to zeptometers.
    *		\f[ l_{zm}=l_{Zm} * 10^{42} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T ZettameterToZeptometer(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to yoctometers.
    *		\f[ l_{ym}=l_{Zm} * 10^{45} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T ZettameterToYoctometer(const T lengthInZettameter);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Zettameter-Non-SI
    /// @{

    /**
    *   @brief Converts a length in zettameters to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{Zm} * 10^{31} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see ZettameterToPicometer() for picometer conversion.
    *   @see ZettameterToCuXUnit() for copper x unit conversion.
    *   @see ZettameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ZettameterToAngstrom(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to fermis.
    *		\f[ l_{fm}=l_{Zm} * 10^{36} \f]
    *
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T ZettameterToFermi(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to microns.
    *		\f[ l_{\mu m}=l_{Zm} * 10^{27} \f]
    *
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see ZettameterToMicrometer() for alias.
    */
    template<typename T>
    T ZettameterToMicron(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{Zm} * 10^{21}\f]
    *
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ (xu)\f$ Length in copper x units.
    *   @see ZettameterToAngstrom() for angstrom conversion.
    *   @see ZettameterToPicometer() for picometer conversion.
    *   @see ZettameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ZettameterToCuXUnit(const T lengthInZettameter);
   
    /**
    *   @brief Converts a length in zettameters to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{Zm} * 10^{21}\f]
    *
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see ZettameterToAngstrom() for angstrom conversion.
    *   @see ZettameterToPicometer() for picometer conversion.
    *   @see ZettameterToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T ZettameterToMoXUnit(const T lengthInZettameter);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Zettameter-Imperial
    /// @{

    /**
    *   @brief Converts a length in zettameters to miles.
    *		\f[ l_{mi}=\frac{10^{21}}{0.0254 * 63360} l_{Zm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T ZettameterToMile(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to yards.
    *		\f[ l_{yd}=  \frac{10^{21}}{0.0254 * 36} l_{Zm}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T ZettameterToYard(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to feet.
    *		\f[ l_{ft}= \frac{10^{21}}{0.0254 * 12} l_{Zm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T ZettameterToFoot(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to inches.
    *		\f[ l_{in}=  \frac{10^{21}}{0.0254} l_{Zm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T ZettameterToInch(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{21}}{0.0254} l_{Zm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see ZettameterToThou() for alias.
    */
    template<typename T>
    T ZettameterToMil(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{21}}{0.0254} l_{Zm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see ZettameterToMil() for alias.
    */
    template<typename T>
    T ZettameterToThou(const T lengthInZettameter);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Zettameter-Nautical
    /// @{

    /**
    *   @brief Converts a length in zettameters to nautical mile.
    *		\f[ l_{NM}= \frac{10^{21}}{1852} l_{Zm}  \f]
    *
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T ZettameterToNauticalMile(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to fathoms.
    *		\f[ l_{fathom}= \frac{10^{21}}{0.0254 * 72} l_{Zm}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T ZettameterToFathom(const T lengthInZettameter);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Zettameter-Surveyors
    /// @{

    /**
    *   @brief Converts a length in zettameters to rods.
    *		\f[ l_{rod}= \frac{10^{21}}{0.0254 * 198} l_{Zm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T ZettameterToRod(const T lengthInZettameter);

    /**
    *   @brief Converts a length in zettameters to chains.
    *		\f[ l_{ch}= \frac{10^{21}}{0.0254 * 792}  l_{Zm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInZettameter \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T ZettameterToChain(const T lengthInZettameter);

	/// @}
} //namespace EGXMath

#include "ZettameterConversion.inl"
