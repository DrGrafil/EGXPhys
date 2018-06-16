/// @file EGXMath/Conversions/LengthConversions/Nautical/FathomConversion.hpp
///
/// @brief Converts length measurements in fathoms into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/13/18

/// @defgroup EGXMath-Conversions-LengthConversions-Nautical-Fathom Fathom
/// @ingroup EGXMath-Conversions-LengthConversions-Nautical

/// @defgroup EGXMath-Conversions-LengthConversions-Nautical-Fathom-Astronomical Astronomical
/// @ingroup EGXMath-Conversions-LengthConversions-Nautical-Fathom

/// @defgroup EGXMath-Conversions-LengthConversions-Nautical-Fathom-SI SI
/// @ingroup EGXMath-Conversions-LengthConversions-Nautical-Fathom

/// @defgroup EGXMath-Conversions-LengthConversions-Nautical-Fathom-Non-SI Non-SI
/// @ingroup EGXMath-Conversions-LengthConversions-Nautical-Fathom

/// @defgroup EGXMath-Conversions-LengthConversions-Nautical-Fathom-Nautical Nautical
/// @ingroup EGXMath-Conversions-LengthConversions-Nautical-Fathom

/// @defgroup EGXMath-Conversions-LengthConversions-Nautical-Fathom-Imperial Imperial
/// @ingroup EGXMath-Conversions-LengthConversions-Nautical-Fathom

/// @defgroup EGXMath-Conversions-LengthConversions-Nautical-Fathom-Surveyors Surveyors
/// @ingroup EGXMath-Conversions-LengthConversions-Nautical-Fathom

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-Nautical-Fathom-Astronomical
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in fathoms to astronomical units.
    *		\f[ l_{au}=\frac{0.0254 * 72}{149597870700} l_{fathom} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T FathomToAstronomicalUnit(const T lengthInFathom);

    /**
    *   @brief Converts a length fathoms in to light-years.
    *		\f[ l_{ly}=\frac{0.0254 * 72}{9460730472580800} l_{fathom} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T FathomToLightYear(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to parsecs.
    *		\f[ l_{pc}=\frac{0.0254 * 72 * \pi}{149597870700 * 648000} l_{fathom}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T FathomToParsec(const T lengthInFathom);

    /// @}

    //SI
    
    /// @addtogroup EGXMath-Conversions-LengthConversions-Nautical-Fathom-SI
    /// @{
    /**
    *   @brief Converts a length in fathoms to meters.
    *		\f[ l_{m}=0.0254 * 72 * l_{fathom} \f]
    *
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T FathomToMeter(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to yottameters.
    *		\f[ l_{Ym}=0.0254 * 72 * l_{fathom} * 10^{-24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T FathomToYottameter(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to zettameters.
    *		\f[ l_{Zm}=0.0254 * 72 * l_{fathom} * 10^{-21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T FathomToZettameter(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to exameters.
    *		\f[ l_{Em}=0.0254 * 72 * l_{fathom} * 10^{-18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T FathomToExameter(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to petameters.
    *		\f[ l_{Pm}=0.0254 * 72 * l_{fathom} * 10^{-15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T FathomToPetameter(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to terameters.
    *		\f[ l_{Tm}=0.0254 * 72 * l_{fathom} * 10^{-12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T FathomToTerameter(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to gigameters.
    *		\f[ l_{Gm}=0.0254 * 72 * l_{fathom} * 10^{-9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T FathomToGigameter(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to megameters.
    *		\f[ l_{Mm}=0.0254 * 72 * l_{fathom} * 10^{-6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T FathomToMegameter(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to kilometers.
    *		\f[ l_{km}=0.0254 * 72 * l_{fathom} * 10^{-3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T FathomToKilometer(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to hectometers.
    *		\f[ l_{hm}=0.0254 * 72 * l_{fathom} * 10^{-2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T FathomToHectometer(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to decameters.
    *		\f[ l_{dam}=0.0254 * 72 * l_{fathom} * 10^{-1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T FathomToDecameter(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to decimeters.
    *		\f[ l_{dm}=0.0254 * 72 * l_{fathom} * 10^{1} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T FathomToDecimeter(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to centimeters.
    *		\f[ l_{cm}=0.0254 * 72 * l_{fathom} * 10^{2} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T FathomToCentimeter(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to millimeters.
    *		\f[ l_{mm}=0.0254 * 72 * l_{fathom} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T FathomToMillimeter(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to micrometers.
    *		\f[ l_{\mu m}=0.0254 * 72 * l_{fathom} * 10^{6} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in micrometers.
    *   @see FathomToMicron() for alias.
    */
    template<typename T>
    T FathomToMicrometer(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to nanometers.
    *		\f[ l_{nm}=0.0254 * 72 * l_{fathom} * 10^{9} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{nm}\ (nm)\f$ Length in nanometers.
    *   @see FathomToMicron() for alias.
    */
    template<typename T>
    T FathomToNanometer(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to picometers.
    *		\f[ l_{pm}=0.0254 * 72 * l_{fathom} * 10^{12} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{pm}\ (pm)\f$ Length in picometers.
    *   @see FathomToAngstrom() for angstrom conversion.
    *   @see FathomToCuXUnit() for copper x unit conversion.
    *   @see FathomToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T FathomToPicometer(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to femtometers.
    *		\f[ l_{fm}=0.0254 * 72 * l_{fathom} * 10^{15} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in femtometers.
    *   @see FathomToFermi() for alias.
    */
    template<typename T>
    T FathomToFemtometer(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to attometers.
    *		\f[ l_{am}=0.0254 * 72 * l_{fathom} * 10^{18} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T FathomToAttometer(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to zeptometers.
    *		\f[ l_{zm}=0.0254 * 72 * l_{fathom} * 10^{21} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T FathomToZeptometer(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to yoctometers.
    *		\f[ l_{ym}=0.0254 * 72 * l_{fathom} * 10^{24} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T FathomToYoctometer(const T lengthInFathom);

    /// @}

    //Non-SI

    /// @addtogroup EGXMath-Conversions-LengthConversions-Nautical-Fathom-Non-SI
    /// @{

    /**
    *   @brief Converts a length in fathoms to angstroms.
    *		\f[ l_{\unicode{x212B}}=0.0254 * 72 * l_{fathom} * 10^{10} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{\unicode{x212B}}\ (\unicode{x212B})\f$ Length in angstroms.
    *   @see FathomToPicometer() for picometer conversion.
    *   @see FathomToCuXUnit() for copper x unit conversion.
    *   @see FathomToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T FathomToAngstrom(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to fermis.
    *		\f[ l_{fm}=0.0254 * 72 * l_{fathom} * 10^{15} \f]
    *
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T FathomToFermi(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to microns.
    *		\f[ l_{\mu m}=0.0254 * 72 * l_{fathom} * 10^{6} \f]
    *
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{\mu m}\ (\mu m)\f$ Length in microns.
    *   @see FathomToMicrometer() for alias.
    */
    template<typename T>
    T FathomToMicron(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to copper x units.
    *		\f[ l_{xu(Cu\ K\alpha_1)}=\frac{0.0254 * 72}{1.00207697*10^{-13}} l_{fathom}\f]
    *
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{xu(Cu\ K\alpha_1)}\ (xu)\f$ Length in copper x units.
    *   @see FathomToAngstrom() for angstrom conversion.
    *   @see FathomToPicometer() for picometer conversion.
    *   @see FathomToMoXUnit() for molybdenum  x unit conversion.
    */
    template<typename T>
    T FathomToCuXUnit(const T lengthInFathom);
   
    /**
    *   @brief Converts a length in fathoms to molybdenum x units.
    *		\f[ l_{xu(Mo\ K\alpha_1)}=\frac{0.0254 * 72}{1.00209952*10^{-13}} l_{fathom}\f]
    *
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x units.
    *   @see FathomToAngstrom() for angstrom conversion.
    *   @see FathomToPicometer() for picometer conversion.
    *   @see FathomToCuXUnit() for copper x unit conversion.
    */
    template<typename T>
    T FathomToMoXUnit(const T lengthInFathom);

    /// @}

    //Imperial

    /// @addtogroup EGXMath-Conversions-LengthConversions-Nautical-Fathom-Imperial
    /// @{

    /**
    *   @brief Converts a length in fathoms to miles.
    *		\f[ l_{mi}=\frac{72}{63360} l_{fathom} \f]
    *
    *   See https://en.wikipedia.org/wiki/Mile
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{mi}\ (mi)\f$ Length in miles.
    */
    template<typename T>
    T FathomToMile(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to yards.
    *		\f[ l_{yd}=  \frac{72}{36} l_{fathom}  \f]
    *
    *   See https://en.wikipedia.org/wiki/Yard
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{yd}\ (yd)\f$ Length in yards.
    */
    template<typename T>
    T FathomToYard(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to feet.
    *		\f[ l_{ft}= \frac{72}{12} l_{fathom} \f]
    *
    *   See https://en.wikipedia.org/wiki/Foot_(unit)
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{ft}\ (ft)\f$ Length in feet.
    */
    template<typename T>
    T FathomToFoot(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to inches.
    *		\f[ l_{in}=72 * l_{fathom} \f]
    *
    *   See https://en.wikipedia.org/wiki/Inch
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{in}\ (in)\f$ Length in inches.
    */
    template<typename T>
    T FathomToInch(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to mils (thousandth of an inch).
    *		\f[ l_{mil}=72 * l_{fathom} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in mils (thousandth of an inch).
    *   @see FathomToThou() for alias.
    */
    template<typename T>
    T FathomToMil(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to thous (thousandth of an inch).
    *		\f[ l_{mil}=72 * l_{fathom} * 10^{3} \f]
    *
    *   See https://en.wikipedia.org/wiki/Thousandth_of_an_inch
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{mil}\ (mil)\f$ Length in thous (thousandth of an inch).
    *   @see FathomToMil() for alias.
    */
    template<typename T>
    T FathomToThou(const T lengthInFathom);

    /// @}

    //Nautical

    /// @addtogroup EGXMath-Conversions-LengthConversions-Nautical-Fathom-Nautical
    /// @{

    /**
    *   @brief Converts a length in fathoms to nautical mile.
    *		\f[ l_{NM}= \frac{0.0254 * 72}{1852} l_{fathom}  \f]
    *
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{NM}\ (NM)\f$ Length in nautical mile.
    */
    template<typename T>
    T FathomToNauticalMile(const T lengthInFathom);

    /// @}

    //Surveyors

    /// @addtogroup EGXMath-Conversions-LengthConversions-Nautical-Fathom-Surveyors
    /// @{

    /**
    *   @brief Converts a length in fathoms to rods.
    *		\f[ l_{rod}= \frac{72}{198} l_{fathom} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Rod_(unit)
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{rod}\ (rod)\f$ Length in rods.
    */
    template<typename T>
    T FathomToRod(const T lengthInFathom);

    /**
    *   @brief Converts a length in fathoms to chains.
    *		\f[ l_{ch}= \frac{72}{792}  l_{fathom} \f]
    *
    *   See https://simple.wikipedia.org/wiki/Chain_(unit)
    *   @param lengthInFathom \f$ l_{fathom}\ (fathom)\f$ Length in fathoms.
    *   @return \f$ l_{ch}\ (ch)\f$ Length in chains.
    */
    template<typename T>
    T FathomToChain(const T lengthInFathom);

	/// @}
} //namespace EGXMath

#include "FathomConversion.inl"
