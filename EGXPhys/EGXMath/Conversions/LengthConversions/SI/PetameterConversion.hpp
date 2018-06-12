/// @file EGXMath/Conversions/LengthConversions/SI/PetameterConversion.hpp
///
/// @brief Converts length measurements in petameters into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Petameter Petameter
/// @ingroup EGXMath-Conversions-LengthConversions-SI

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Petameter-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Petameter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Petameter-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Petameter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Petameter-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Petameter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Petameter-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Petameter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Petameter-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Petameter

/// @defgroup EGXMath-Conversions-LengthConversions-SI-Petameter-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-SI-Petameter

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-SI-Petameter-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in petameters to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{Pm} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T PetameterToAstronomicalUnit(const T lengthInPetameter);

    /**
    *   @brief Converts a length petameters in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{Pm} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T PetameterToLightYear(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{Pm} * 10^{15}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T PetameterToParsec(const T lengthInPetameter);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Petameter-SI
    /// @{
    /**
    *   @brief Converts a length in petameters to meters.
    *		\f[ l_{m}=l_{Pm} * 10^{15} \f]
    *
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T PetameterToMeter(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to yottameters.
    *		\f[ l_{Ym}=l_{Pm} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T PetameterToYottameter(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to zettameters.
    *		\f[ l_{Zm}=l_{Pm} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T PetameterToZettameter(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to exameters.
    *		\f[ l_{Em}=l_{Pm} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T PetameterToExameter(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to terameters.
    *		\f[ l_{Tm}=l_{Pm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T PetameterToTerameter(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to gigameters.
    *		\f[ l_{Gm}=l_{Pm} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T PetameterToGigameter(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to megameters.
    *		\f[ l_{Mm}=l_{Pm} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T PetameterToMegameter(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to kilometers.
    *		\f[ l_{km}=l_{Pm} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T PetameterToKilometer(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to hectometers.
    *		\f[ l_{hm}=l_{Pm} * 10^{13} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T PetameterToHectometer(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to decameters.
    *		\f[ l_{dam}=l_{Pm} * 10^{14} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T PetameterToDecameter(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to decimeters.
    *		\f[ l_{dm}=l_{Pm} * 10^{16} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T PetameterToDecimeter(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to centimeters.
    *		\f[ l_{cm}=l_{Pm} * 10^{17} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T PetameterToCentimeter(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to millimeters.
    *		\f[ l_{mm}=l_{Pm} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T PetameterToMillimeter(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to micrometers.
    *		\f[ l_{\mu m}=l_{Pm} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see PetameterToMicron() for alias.
    */
    template<typename T>
    T PetameterToMicrometer(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to nanometers.
    *		\f[ l_{nm}=l_{Pm} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see PetameterToMicron() for alias.
    */
    template<typename T>
    T PetameterToNanometer(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to picometers.
    *		\f[ l_{pm}=l_{Pm} * 10^{27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see PetameterToAngstrom() for angstrom conversion.
    *   @see PetameterToCuXUnit() for copper x unit conversion.
    *   @see PetameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T PetameterToPicometer(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to femtometers.
    *		\f[ l_{fm}=l_{Pm} * 10^{30} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see PetameterToFermi() for alias.
    */
    template<typename T>
    T PetameterToFemtometer(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to attometers.
    *		\f[ l_{am}=l_{Pm} * 10^{33} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T PetameterToAttometer(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to zeptometers.
    *		\f[ l_{zm}=l_{Pm} * 10^{36} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T PetameterToZeptometer(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to yoctometers.
    *		\f[ l_{ym}=l_{Pm} * 10^{39} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T PetameterToYoctometer(const T lengthInPetameter);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Petameter-Non-SI
    /// @{

    /**
    *   @brief Converts a length in petameters to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{Pm} * 10^{25} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see PetameterToPicometer() for picometer conversion.
    *   @see PetameterToCuXUnit() for copper x unit conversion.
    *   @see PetameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T PetameterToAngstrom(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to fermis.
    *		\f[ l_{fm}=l_{Pm} * 10^{30} \f]
    *
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T PetameterToFermi(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to microns.
    *		\f[ l_{\mu m}=l_{Pm} * 10^{21} \f]
    *
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see PetameterToMicrometer() for alias.
    */
    template<typename T>
    T PetameterToMicron(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{Pm} * 10^{15}\f]
    *
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see PetameterToAngstrom() for angstrom conversion.
    *   @see PetameterToPicometer() for picometer conversion.
    *   @see PetameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T PetameterToCuXUnit(const T lengthInPetameter);
   
    /**
    *   @brief Converts a length in petameters to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{Pm} * 10^{15}\f]
    *
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see PetameterToAngstrom() for angstrom conversion.
    *   @see PetameterToPicometer() for picometer conversion.
    *   @see PetameterToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T PetameterToMoXUnit(const T lengthInPetameter);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Petameter-Imperial
    /// @{

    /**
    *   @brief Converts a length in petameters to miles.
    *		\f[ l_{mi}=\frac{10^{15}}{0.0254 * 63360} l_{Pm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T PetameterToMile(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to yards.
    *		\f[ l_{yd}=  \frac{10^{15}}{0.0254 * 36} l_{Pm}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T PetameterToYard(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to feet.
    *		\f[ l_{ft}= \frac{10^{15}}{0.0254 * 12} l_{Pm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T PetameterToFoot(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to inches.
    *		\f[ l_{in}=  \frac{10^{15}}{0.0254} l_{Pm} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T PetameterToInch(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{15}}{0.0254} l_{Pm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see PetameterToThou() for alias.
    */
    template<typename T>
    T PetameterToMil(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{15}}{0.0254} l_{Pm} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see PetameterToMil() for alias.
    */
    template<typename T>
    T PetameterToThou(const T lengthInPetameter);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Petameter-Nautical
    /// @{

    /**
    *   @brief Converts a length in petameters to nautical mile.
    *		\f[ l_{NM}= \frac{10^{15}}{1852} l_{Pm}  \f]
    *
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T PetameterToNauticalMile(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to fathoms.
    *		\f[ l_{fathom}= \frac{10^{15}}{0.0254 * 72} l_{Pm}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T PetameterToFathom(const T lengthInPetameter);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-SI-Petameter-Surveyors
    /// @{

    /**
    *   @brief Converts a length in petameters to rods.
    *		\f[ l_{rod}= \frac{10^{15}}{0.0254 * 198} l_{Pm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T PetameterToRod(const T lengthInPetameter);

    /**
    *   @brief Converts a length in petameters to chains.
    *		\f[ l_{ch}= \frac{10^{15}}{0.0254 * 792}  l_{Pm} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInPetameter \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T PetameterToChain(const T lengthInPetameter);

	/// @}
} //namespace EGXMath

#include "PetameterConversion.inl"
