/// @file EGXMath/Conversions/LengthConversions/ExameterConversion.hpp
///
/// @brief Converts length measurements in exameters into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/8/18

/// @defgroup EGXMath-Conversions-LengthConversions-Exameter Exameter
/// @ingroup EGXMath-Conversions-LengthConversions

/// @defgroup EGXMath-Conversions-LengthConversions-Exameter-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Exameter

/// @defgroup EGXMath-Conversions-LengthConversions-Exameter-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Exameter

/// @defgroup EGXMath-Conversions-LengthConversions-Exameter-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Exameter

/// @defgroup EGXMath-Conversions-LengthConversions-Exameter-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Exameter

/// @defgroup EGXMath-Conversions-LengthConversions-Exameter-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Exameter

/// @defgroup EGXMath-Conversions-LengthConversions-Exameter-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Exameter

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Exameter-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in exameters to astronomical units.
    *		\f[ l_{au}=  \frac{1}{149597870700} l_{Em} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T ExameterToAstronomicalUnit(const T lengthInExameter);

    /**
    *   @brief Converts a length exameters in to light-years.
    *		\f[ l_{ly}= \frac{1}{9460730472580800} l_{Em} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T ExameterToLightYear(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to parsecs.
    *		\f[ l_{pc}=\frac{\pi}{149597870700 * 648000} l_{Em} * 10^{18}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T ExameterToParsec(const T lengthInExameter);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Exameter-SI
    /// @{
    /**
    *   @brief Converts a length in exameters to meters.
    *		\f[ l_{m}=l_{Em} * 10^{18}  \f]
    *
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T ExameterToMeter(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to yottameters.
    *		\f[ l_{Ym}=l_{Em} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T ExameterToYottameter(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to zettameters.
    *		\f[ l_{Zm}=l_{Em} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T ExameterToZettameter(const T lengthInExameter);


    /**
    *   @brief Converts a length in exameters to petameters.
    *		\f[ l_{Pm}=l_{Em} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T ExameterToPetameter(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to terameters.
    *		\f[ l_{Tm}=l_{Em} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T ExameterToTerameter(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to gigameters.
    *		\f[ l_{Gm}=l_{Em} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T ExameterToGigameter(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to megameters.
    *		\f[ l_{Mm}=l_{Em} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T ExameterToMegameter(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to kilometers.
    *		\f[ l_{km}=l_{Em} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T ExameterToKilometer(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to hectometers.
    *		\f[ l_{hm}=l_{Em} * 10^{16} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T ExameterToHectometer(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to decameters.
    *		\f[ l_{dam}=l_{Em} * 10^{17} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T ExameterToDecameter(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to decimeters.
    *		\f[ l_{dm}=l_{Em} * 10^{19} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T ExameterToDecimeter(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to centimeters.
    *		\f[ l_{cm}=l_{Em} * 10^{20} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T ExameterToCentimeter(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to millimeters.
    *		\f[ l_{mm}=l_{Em} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T ExameterToMillimeter(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to micrometers.
    *		\f[ l_{\mu m}=l_{Em} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see ExameterToMicron() for alias.
    */
    template<typename T>
    T ExameterToMicrometer(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to nanometers.
    *		\f[ l_{nm}=l_{Em} * 10^{27} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see ExameterToMicron() for alias.
    */
    template<typename T>
    T ExameterToNanometer(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to picometers.
    *		\f[ l_{pm}=l_{Em} * 10^{30} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see ExameterToAngstrom() for angstrom conversion.
    *   @see ExameterToCuXUnit() for copper x unit conversion.
    *   @see ExameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ExameterToPicometer(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to femtometers.
    *		\f[ l_{fm}=l_{Em} * 10^{33} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see ExameterToFermi() for alias.
    */
    template<typename T>
    T ExameterToFemtometer(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to attometers.
    *		\f[ l_{am}=l_{Em} * 10^{36} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T ExameterToAttometer(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to zeptometers.
    *		\f[ l_{zm}=l_{Em} * 10^{39} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T ExameterToZeptometer(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to yoctometers.
    *		\f[ l_{ym}=l_{Em} * 10^{42} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T ExameterToYoctometer(const T lengthInExameter);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Exameter-Non-SI
    /// @{

    /**
    *   @brief Converts a length in exameters to angstroms.
    *		\f[ l_{\unicode{x212B}}=l_{Em} * 10^{28} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see ExameterToPicometer() for picometer conversion.
    *   @see ExameterToCuXUnit() for copper x unit conversion.
    *   @see ExameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ExameterToAngstrom(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to fermis.
    *		\f[ l_{fm}=l_{Em} * 10^{23} \f]
    *
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T ExameterToFermi(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to microns.
    *		\f[ l_{\mu m}=l_{Em} * 10^{24} \f]
    *
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see ExameterToMicrometer() for alias.
    */
    template<typename T>
    T ExameterToMicron(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}= \frac{1}{1.00207697*10^{-13}} l_{Em} * 10^{18}\f]
    *
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x units.
    *   @see ExameterToAngstrom() for angstrom conversion.
    *   @see ExameterToPicometer() for picometer conversion.
    *   @see ExameterToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T ExameterToCuXUnit(const T lengthInExameter);
   
    /**
    *   @brief Converts a length in exameters to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{1}{1.00209952*10^{-13}} l_{Em} * 10^{18}\f]
    *
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see ExameterToAngstrom() for angstrom conversion.
    *   @see ExameterToPicometer() for picometer conversion.
    *   @see ExameterToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T ExameterToMoXUnit(const T lengthInExameter);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Exameter-Imperial
    /// @{

    /**
    *   @brief Converts a length in exameters to miles.
    *		\f[ l_{mi}=\frac{10^{18}}{0.0254 * 63360} l_{Em} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T ExameterToMile(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to yards.
    *		\f[ l_{yd}=  \frac{10^{18}}{0.0254 * 36} \frac{1}{36} l_{Em}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T ExameterToYard(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to feet.
    *		\f[ l_{ft}= \frac{10^{18}}{0.0254 * 12} l_{Em} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T ExameterToFoot(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to inches.
    *		\f[ l_{in}=  \frac{10^{18}}{0.0254} l_{Em} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T ExameterToInch(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to mils (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{18}}{0.0254} l_{Em} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see ExameterToThou() for alias.
    */
    template<typename T>
    T ExameterToMil(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to thous (thousandth of an inch).
    *		\f[ l_{mil}= \frac{10^{18}}{0.0254} l_{Em} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see ExameterToMil() for alias.
    */
    template<typename T>
    T ExameterToThou(const T lengthInExameter);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Exameter-Nautical
    /// @{

    /**
    *   @brief Converts a length in exameters to nautical mile.
    *		\f[ l_{NM}= \frac{10^{18}}{0.0254 * 1852} l_{Em}  \f]
    *
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T ExameterToNauticalMile(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to fathoms.
    *		\f[ l_{fathom}= \frac{10^{18}}{0.0254 * 72} l_{Em}  \f]
    *
    *   See https://simple.wikipedia.org/wiki/Fathom
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    */
    template<typename T>
    T ExameterToFathom(const T lengthInExameter);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Exameter-Surveyors
    /// @{

    /**
    *   @brief Converts a length in exameters to rods.
    *		\f[ l_{rod}= \frac{10^{18}}{0.0254 * 198} l_{Em} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T ExameterToRod(const T lengthInExameter);

    /**
    *   @brief Converts a length in exameters to chains.
    *		\f[ l_{ch}= \frac{10^{18}}{0.0254 * 792}  l_{Em} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInExameter \f$ l_{Em}\ (Em)\f$ Length in exameters.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T ExameterToChain(const T lengthInExameter);

	/// @}
} //namespace EGXMath

#include "ExameterConversion.inl"
