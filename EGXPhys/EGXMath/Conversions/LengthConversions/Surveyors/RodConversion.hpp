/// @file EGXMath/Conversions/LengthConversions/Imperial/RodConversion.hpp
///
/// @brief Converts length measurements in rods into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/13/18

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Rod Rod
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Rod-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Rod

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Rod-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Rod

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Rod-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Rod

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Rod-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Rod

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Rod-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Rod

/// @defgroup EGXMath-Conversions-LengthConversions-Imperial-Rod-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Imperial-Rod

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Rod-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in rods to astronomical units.
    *		\f[ l_{au}=\frac{0.0254 * 198}{149597870700} l_{rod} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T RodToAstronomicalUnit(const T lengthInRod);

    /**
    *   @brief Converts a length rods in to light-years.
    *		\f[ l_{ly}=\frac{0.0254 * 198}{9460730472580800} l_{rod} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T RodToLightYear(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to parsecs.
    *		\f[ l_{pc}=\frac{0.0254 * 198 * \pi}{149597870700 * 648000} l_{rod}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T RodToParsec(const T lengthInRod);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Rod-SI
    /// @{
    /**
    *   @brief Converts a length in rods to meters.
    *		\f[ l_{m}=0.0254 * 198 * l_{rod} \f]
    *
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T RodToMeter(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to yottameters.
    *		\f[ l_{Ym}=0.0254 * 198 * l_{rod} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T RodToYottameter(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to zettameters.
    *		\f[ l_{Zm}=0.0254 * 198 * l_{rod} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T RodToZettameter(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to exameters.
    *		\f[ l_{Em}=0.0254 * 198 * l_{rod} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T RodToExameter(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to petameters.
    *		\f[ l_{Pm}=0.0254 * 198 * l_{rod} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T RodToPetameter(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to terameters.
    *		\f[ l_{Tm}=0.0254 * 198 * l_{rod} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T RodToTerameter(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to gigameters.
    *		\f[ l_{Gm}=0.0254 * 198 * l_{rod} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T RodToGigameter(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to megameters.
    *		\f[ l_{Mm}=0.0254 * 198 * l_{rod} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T RodToMegameter(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to kilometers.
    *		\f[ l_{km}=0.0254 * 198 * l_{rod} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T RodToKilometer(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to hectometers.
    *		\f[ l_{hm}=0.0254 * 198 * l_{rod} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T RodToHectometer(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to decameters.
    *		\f[ l_{dam}=0.0254 * 198 * l_{rod} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T RodToDecameter(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to decimeters.
    *		\f[ l_{dm}=0.0254 * 198 * l_{rod} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T RodToDecimeter(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to centimeters.
    *		\f[ l_{cm}=0.0254 * 198 * l_{rod} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T RodToCentimeter(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to millimeters.
    *		\f[ l_{mm}=0.0254 * 198 * l_{rod} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T RodToMillimeter(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to micrometers.
    *		\f[ l_{\mu m}=0.0254 * 198 * l_{rod} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see RodToMicron() for alias.
    */
    template<typename T>
    T RodToMicrometer(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to nanometers.
    *		\f[ l_{nm}=0.0254 * 198 * l_{rod} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see RodToMicron() for alias.
    */
    template<typename T>
    T RodToNanometer(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to picometers.
    *		\f[ l_{pm}=0.0254 * 198 * l_{rod} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see RodToAngstrom() for angstrom conversion.
    *   @see RodToCuXUnit() for copper x unit conversion.
    *   @see RodToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T RodToPicometer(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to femtometers.
    *		\f[ l_{fm}=0.0254 * 198 * l_{rod} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see RodToFermi() for alias.
    */
    template<typename T>
    T RodToFemtometer(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to attometers.
    *		\f[ l_{am}=0.0254 * 198 * l_{rod} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T RodToAttometer(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to zeptometers.
    *		\f[ l_{zm}=0.0254 * 198 * l_{rod} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T RodToZeptometer(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to yoctometers.
    *		\f[ l_{ym}=0.0254 * 198 * l_{rod} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T RodToYoctometer(const T lengthInRod);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Rod-Non-SI
    /// @{

    /**
    *   @brief Converts a length in rods to angstroms.
    *		\f[ l_{\unicode{x212B}}=0.0254 * 198 * l_{rod} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see RodToPicometer() for picometer conversion.
    *   @see RodToCuXUnit() for copper x unit conversion.
    *   @see RodToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T RodToAngstrom(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to fermis.
    *		\f[ l_{fm}=0.0254 * 198 * l_{rod} * 10^{15} \f]
    *
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T RodToFermi(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to microns.
    *		\f[ l_{\mu m}=0.0254 * 198 * l_{rod} * 10^{6} \f]
    *
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see RodToMicrometer() for alias.
    */
    template<typename T>
    T RodToMicron(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}=\frac{0.0254 * 198}{1.00207697*10^{-13}} l_{rod}\f]
    *
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ (xu)\f$ Length in copper x units.
    *   @see RodToAngstrom() for angstrom conversion.
    *   @see RodToPicometer() for picometer conversion.
    *   @see RodToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T RodToCuXUnit(const T lengthInRod);
   
    /**
    *   @brief Converts a length in rods to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{0.0254 * 198}{1.00209952*10^{-13}} l_{rod}\f]
    *
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see RodToAngstrom() for angstrom conversion.
    *   @see RodToPicometer() for picometer conversion.
    *   @see RodToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T RodToMoXUnit(const T lengthInRod);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Rod-Imperial
    /// @{

    /**
    *   @brief Converts a length in rods to miles.
    *		\f[ l_{mi}=\frac{198}{63360} l_{rod} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T RodToMile(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to yards.
    *		\f[ l_{yd}=  \frac{198}{36} l_{rod}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T RodToYard(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to feet.
    *		\f[ l_{ft}= \frac{198}{12} l_{rod} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T RodToFoot(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to inches.
    *		\f[ l_{in}= 198 * l_{rod} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T RodToInch(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to mils (thousandth of an inch).
    *		\f[ l_{mil}=198 * l_{rod} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see RodToThou() for alias.
    */
    template<typename T>
    T RodToMil(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to thous (thousandth of an inch).
    *		\f[ l_{mil}= 198 * l_{rod} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see RodToMil() for alias.
    */
    template<typename T>
    T RodToThou(const T lengthInRod);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Rod-Nautical
    /// @{

    /**
    *   @brief Converts a length in rods to nautical mile.
    *		\f[ l_{NM}= \frac{0.0254 * 198}{1852} l_{rod}  \f]
    *
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T RodToNauticalMile(const T lengthInRod);

    /**
    *   @brief Converts a length in rods to fathoms.
    *		\f[ l_{fathom}= \frac{198}{72} l_{rod}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T RodToFathom(const T lengthInRod);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Imperial-Rod-Surveyors
    /// @{


    /**
    *   @brief Converts a length in rods to chains.
    *		\f[ l_{ch}= \frac{198}{792}  l_{rod} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInRod \f$ l_{rod}\ (rod)\f$ Length in rods.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T RodToChain(const T lengthInRod);

	/// @}
} //namespace EGXMath

#include "RodConversion.inl"
