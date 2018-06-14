/// @file EGXMath/Conversions/LengthConversions/Imperial/ChainConversion.hpp
///
/// @brief Converts length measurements in chains into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/13/18

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Chain Chain
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Chain-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Chain

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Chain-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Chain

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Chain-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Chain

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Chain-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Chain

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Chain-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Chain

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Chain-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Chain

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Chain-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in chains to astronomical units.
    *		\f[ l_{au}=\frac{0.0254 * 792}{149597870700} l_{ch} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T ChainToAstronomicalUnit(const T lengthInChain);

    /**
    *   @brief Converts a length chains in to light-years.
    *		\f[ l_{ly}=\frac{0.0254 * 792}{9460730472580800} l_{ch} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T ChainToLightYear(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to parsecs.
    *		\f[ l_{pc}=\frac{0.0254 * 792 * \pi}{149597870700 * 648000} l_{ch}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T ChainToParsec(const T lengthInChain);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Chain-SI
    /// @{
    /**
    *   @brief Converts a length in chains to meters.
    *		\f[ l_{m}=0.0254 * 792 * l_{ch} \f]
    *
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T ChainToMeter(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to yottameters.
    *		\f[ l_{Ym}=0.0254 * 792 * l_{ch} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T ChainToYottameter(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to zettameters.
    *		\f[ l_{Zm}=0.0254 * 792 * l_{ch} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T ChainToZettameter(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to exameters.
    *		\f[ l_{Em}=0.0254 * 792 * l_{ch} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T ChainToExameter(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to petameters.
    *		\f[ l_{Pm}=0.0254 * 792 * l_{ch} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T ChainToPetameter(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to terameters.
    *		\f[ l_{Tm}=0.0254 * 792 * l_{ch} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T ChainToTerameter(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to gigameters.
    *		\f[ l_{Gm}=0.0254 * 792 * l_{ch} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T ChainToGigameter(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to megameters.
    *		\f[ l_{Mm}=0.0254 * 792 * l_{ch} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T ChainToMegameter(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to kilometers.
    *		\f[ l_{km}=0.0254 * 792 * l_{ch} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T ChainToKilometer(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to hectometers.
    *		\f[ l_{hm}=0.0254 * 792 * l_{ch} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T ChainToHectometer(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to decameters.
    *		\f[ l_{dam}=0.0254 * 792 * l_{ch} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T ChainToDecameter(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to decimeters.
    *		\f[ l_{dm}=0.0254 * 792 * l_{ch} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T ChainToDecimeter(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to centimeters.
    *		\f[ l_{cm}=0.0254 * 792 * l_{ch} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T ChainToCentimeter(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to millimeters.
    *		\f[ l_{mm}=0.0254 * 792 * l_{ch} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T ChainToMillimeter(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to micrometers.
    *		\f[ l_{\mu m}=0.0254 * 792 * l_{ch} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see ChainToMicron() for alias.
    */
    template<typename T>
    T ChainToMicrometer(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to nanometers.
    *		\f[ l_{nm}=0.0254 * 792 * l_{ch} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see ChainToMicron() for alias.
    */
    template<typename T>
    T ChainToNanometer(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to picometers.
    *		\f[ l_{pm}=0.0254 * 792 * l_{ch} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see ChainToAngstrom() for angstrom conversion.
    *   @see ChainToCuXUnit() for copper x unit conversion.
    *   @see ChainToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ChainToPicometer(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to femtometers.
    *		\f[ l_{fm}=0.0254 * 792 * l_{ch} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see ChainToFermi() for alias.
    */
    template<typename T>
    T ChainToFemtometer(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to attometers.
    *		\f[ l_{am}=0.0254 * 792 * l_{ch} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T ChainToAttometer(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to zeptometers.
    *		\f[ l_{zm}=0.0254 * 792 * l_{ch} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T ChainToZeptometer(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to yoctometers.
    *		\f[ l_{ym}=0.0254 * 792 * l_{ch} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T ChainToYoctometer(const T lengthInChain);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Chain-Non-SI
    /// @{

    /**
    *   @brief Converts a length in chains to angstroms.
    *		\f[ l_{\unicode{x212B}}=0.0254 * 792 * l_{ch} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see ChainToPicometer() for picometer conversion.
    *   @see ChainToCuXUnit() for copper x unit conversion.
    *   @see ChainToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ChainToAngstrom(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to fermis.
    *		\f[ l_{fm}=0.0254 * 792 * l_{ch} * 10^{15} \f]
    *
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T ChainToFermi(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to microns.
    *		\f[ l_{\mu m}=0.0254 * 792 * l_{ch} * 10^{6} \f]
    *
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see ChainToMicrometer() for alias.
    */
    template<typename T>
    T ChainToMicron(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}=\frac{0.0254 * 792}{1.00207697*10^{-13}} l_{ch}\f]
    *
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ (xu)\f$ Length in copper x units.
    *   @see ChainToAngstrom() for angstrom conversion.
    *   @see ChainToPicometer() for picometer conversion.
    *   @see ChainToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ChainToCuXUnit(const T lengthInChain);
   
    /**
    *   @brief Converts a length in chains to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{0.0254 * 792}{1.00209952*10^{-13}} l_{ch}\f]
    *
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see ChainToAngstrom() for angstrom conversion.
    *   @see ChainToPicometer() for picometer conversion.
    *   @see ChainToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T ChainToMoXUnit(const T lengthInChain);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Chain-Imperial
    /// @{

    /**
    *   @brief Converts a length in chains to miles.
    *		\f[ l_{mi}=\frac{792}{63360} l_{ch} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T ChainToMile(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to yards.
    *		\f[ l_{yd}=  \frac{792}{36} l_{ch}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T ChainToYard(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to feet.
    *		\f[ l_{ft}= \frac{792}{12} l_{ch} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T ChainToFoot(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to inches.
    *		\f[ l_{in}= 792 * l_{ch} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T ChainToInch(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to mils (thousandth of an inch).
    *		\f[ l_{mil}=792 * l_{ch} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see ChainToThou() for alias.
    */
    template<typename T>
    T ChainToMil(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to thous (thousandth of an inch).
    *		\f[ l_{mil}= 792 * l_{ch} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see ChainToMil() for alias.
    */
    template<typename T>
    T ChainToThou(const T lengthInChain);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Chain-Nautical
    /// @{

    /**
    *   @brief Converts a length in chains to nautical mile.
    *		\f[ l_{NM}= \frac{0.0254 * 792}{1852} l_{ch}  \f]
    *
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T ChainToNauticalMile(const T lengthInChain);

    /**
    *   @brief Converts a length in chains to fathoms.
    *		\f[ l_{fathom}= \frac{792}{72} l_{ch}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T ChainToFathom(const T lengthInChain);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Chain-Surveyors
    /// @{

    /**
    *   @brief Converts a length in chains to rods.
    *		\f[ l_{rod}= \frac{792}{198} l_{ch} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInChain \f$ l_{ch}\ (ch)\f$ Length in chains.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T ChainToRod(const T lengthInChain);


	/// @}
} //namespace EGXMath

#include "ChainConversion.inl"
