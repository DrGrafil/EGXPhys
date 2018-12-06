/// @file EGXMath/Conversions/LengthConversions/Imperial/ThouConversion.hpp
///
/// @brief Converts length measurements in thous into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil 
/// @date 6/13/18

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Thou Thou
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Thou-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Thou

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Thou-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Thou

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Thou-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Thou

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Thou-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Thou

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Thou-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Thou

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Thou-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Thou

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Thou-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in thous to astronomical units.
    *		\f[ l_{au}=\frac{0.0254 * 10^{-3}}{149597870700} l_{mil} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T ThouToAstronomicalUnit(const T lengthInThou);

    /**
    *   @brief Converts a length thous in to light-years.
    *		\f[ l_{ly}=\frac{0.0254 * 10^{-3}}{9460730472580800} l_{mil} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T ThouToLightYear(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to parsecs.
    *		\f[ l_{pc}=\frac{0.0254 * 10^{-3} * \pi}{149597870700 * 648000} l_{mil}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T ThouToParsec(const T lengthInThou);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Thou-SI
    /// @{
    /**
    *   @brief Converts a length in thous to meters.
    *		\f[ l_{m}=0.0254 * l_{mil} * 10^{-3} \f]
    *
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T ThouToMeter(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to yottameters.
    *		\f[ l_{Ym}=0.0254 * l_{mil} * 10^{-27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T ThouToYottameter(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to zettameters.
    *		\f[ l_{Zm}=0.0254 * l_{mil} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T ThouToZettameter(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to exameters.
    *		\f[ l_{Em}=0.0254 * l_{mil} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T ThouToExameter(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to petameters.
    *		\f[ l_{Pm}=0.0254 * l_{mil} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T ThouToPetameter(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to terameters.
    *		\f[ l_{Tm}=0.0254 * l_{mil} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T ThouToTerameter(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to gigameters.
    *		\f[ l_{Gm}=0.0254 * l_{mil} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T ThouToGigameter(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to megameters.
    *		\f[ l_{Mm}=0.0254 * l_{mil} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T ThouToMegameter(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to kilometers.
    *		\f[ l_{km}=0.0254 * l_{mil} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T ThouToKilometer(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to hectometers.
    *		\f[ l_{hm}=0.0254 * l_{mil} * 10^{-5} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T ThouToHectometer(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to decameters.
    *		\f[ l_{dam}=0.0254 * l_{mil} * 10^{-4} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T ThouToDecameter(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to decimeters.
    *		\f[ l_{dm}=0.0254 * l_{mil} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T ThouToDecimeter(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to centimeters.
    *		\f[ l_{cm}=0.0254 * l_{mil} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T ThouToCentimeter(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to millimeters.
    *		\f[ l_{mm}=0.0254 * l_{mil} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T ThouToMillimeter(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to micrometers.
    *		\f[ l_{\mu m}=0.0254 * l_{mil} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see ThouToMicron() for alias.
    */
    template<typename T>
    T ThouToMicrometer(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to nanometers.
    *		\f[ l_{nm}=0.0254 * l_{mil} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see ThouToMicron() for alias.
    */
    template<typename T>
    T ThouToNanometer(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to picometers.
    *		\f[ l_{pm}=0.0254 * l_{mil} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see ThouToAngstrom() for angstrom conversion.
    *   @see ThouToCuXUnit() for copper x unit conversion.
    *   @see ThouToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ThouToPicometer(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to femtometers.
    *		\f[ l_{fm}=0.0254 * l_{mil} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see ThouToFermi() for alias.
    */
    template<typename T>
    T ThouToFemtometer(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to attometers.
    *		\f[ l_{am}=0.0254 * l_{mil} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T ThouToAttometer(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to zeptometers.
    *		\f[ l_{zm}=0.0254 * l_{mil} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T ThouToZeptometer(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to yoctometers.
    *		\f[ l_{ym}=0.0254 * l_{mil} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T ThouToYoctometer(const T lengthInThou);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Thou-Non-SI
    /// @{

    /**
    *   @brief Converts a length in thous to angstroms.
    *		\f[ l_{\unicode{x212B}}=0.0254 * l_{mil} * 10^{7} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see ThouToPicometer() for picometer conversion.
    *   @see ThouToCuXUnit() for copper x unit conversion.
    *   @see ThouToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ThouToAngstrom(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to fermis.
    *		\f[ l_{fm}=0.0254 * l_{mil} * 10^{12} \f]
    *
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T ThouToFermi(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to microns.
    *		\f[ l_{\mu m}=0.0254 * l_{mil} * 10^{3} \f]
    *
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see ThouToMicrometer() for alias.
    */
    template<typename T>
    T ThouToMicron(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}=\frac{0.0254 * 10^{-3}}{1.00207697*10^{-13}} l_{mil}\f]
    *
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ (xu)\f$ Length in copper x units.
    *   @see ThouToAngstrom() for angstrom conversion.
    *   @see ThouToPicometer() for picometer conversion.
    *   @see ThouToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ThouToCuXUnit(const T lengthInThou);
   
    /**
    *   @brief Converts a length in thous to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{0.0254 * 10^{-3}}{1.00209952*10^{-13}} l_{mil}\f]
    *
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see ThouToAngstrom() for angstrom conversion.
    *   @see ThouToPicometer() for picometer conversion.
    *   @see ThouToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T ThouToMoXUnit(const T lengthInThou);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Thou-Imperial
    /// @{

    /**
    *   @brief Converts a length in thous to miles.
    *		\f[ l_{mi}=\frac{10^{-3}}{63360} l_{mil} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T ThouToMile(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to yards.
    *		\f[ l_{yd}=  \frac{10^{-3}}{36} l_{mil}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T ThouToYard(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to feet.
    *		\f[ l_{ft}= \frac{10^{-3}}{12} l_{mil} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T ThouToFoot(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to inches.
    *		\f[ l_{in}= l_{mil} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T ThouToInch(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to mils (thousandth of an inch).
    *		\f[ l_{mil}=l_{mil} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see ThouToThou() for alias.
    */
    template<typename T>
    T ThouToMil(const T lengthInThou);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Thou-Nautical
    /// @{

    /**
    *   @brief Converts a length in thous to nautical mile.
    *		\f[ l_{NM}= \frac{0.0254 * 10^{-3}}{1852} l_{mil}  \f]
    *
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T ThouToNauticalMile(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to fathoms.
    *		\f[ l_{fathom}= \frac{10^{-3}}{72} l_{mil}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T ThouToFathom(const T lengthInThou);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Thou-Surveyors
    /// @{

    /**
    *   @brief Converts a length in thous to rods.
    *		\f[ l_{rod}= \frac{10^{-3}}{198} l_{mil} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T ThouToRod(const T lengthInThou);

    /**
    *   @brief Converts a length in thous to chains.
    *		\f[ l_{ch}= \frac{10^{-3}}{792}  l_{mil} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInThou \f$ l_{mil}\ (mil)\f$ Length in thous.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T ThouToChain(const T lengthInThou);

	/// @}
} //namespace EGXMath

#include "ThouConversion.inl"
