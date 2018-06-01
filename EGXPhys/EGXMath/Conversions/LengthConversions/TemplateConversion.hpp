/// @file EGXMath/Conversions/LengthConversions/uzitzsConversion.hpp
///
/// @brief Converts length measurements in uzitzs into various other units such as meters, parsecs, light years.
///
/// @author Elliot Grafil (Metex)
/// @date 6/1/18

/// @defgroup EGXMath-Conversions-LengthConversions-uzitzs uzitzs
/// @ingroup EGXMath-Conversions-LengthConversions

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
	/// @addtogroup EGXMath-Conversions-LengthConversions-uzitzs
	/// @{

    //Astronomical
    // No hubble length due to ill defined.
    /**
    *   @brief Converts a length in ulongxxits to astronomical units.
    *		\f[ d_{au}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Astronomical_unit
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{au}\ (au)\f$ Length in astronomical units.
    */
    template<typename T>
    T uzitzsToAstronomicalUnit(const T lengthInuzitzs);

    /**
    *   @brief Converts a length ulongxxits in to light-years.
    *		\f[ d_{ly}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Light-year
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{ly}\ (ly)\f$ Length in light-years.
    */
    template<typename T>
    T uzitzsToLightYear(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to parsecs.
    *		\f[ d_{pc}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Parsec
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{pc}\ (pc)\f$ Length in parsecs.
    */
    template<typename T>
    T uzitzsToParsec(const T lengthInuzitzs);


    //SI

    /**
    *   @brief Converts a length in ulongxxits to meters.
    *		\f[ d_{m}=\d_{uxxits} \f]
    *
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{m}\ (m)\f$ Length in meters.
    */
    template<typename T>
    T uzitzsToMeter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to yottameters.
    *		\f[ d_{Ym}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{Ym}\ (Ym)\f$ Length in yottameters.
    */
    template<typename T>
    T uzitzsToYottameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to zettameters.
    *		\f[ d_{Zm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{Zm}\ (Zm)\f$ Length in zettameters.
    */
    template<typename T>
    T uzitzsToZettameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to exameters.
    *		\f[ d_{Em}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{Em}\ (Em)\f$ Length in exameters.
    */
    template<typename T>
    T uzitzsToExameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to petameters.
    *		\f[ d_{Pm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{Pm}\ (Pm)\f$ Length in petameters.
    */
    template<typename T>
    T uzitzsToPetameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to terameters.
    *		\f[ d_{Tm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{Tm}\ (Tm)\f$ Length in terameters.
    */
    template<typename T>
    T uzitzsToTerameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to gigameters.
    *		\f[ d_{Gm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{Gm}\ (m)\f$ Length in gigameters.
    */
    template<typename T>
    T uzitzsToGigameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to megameters.
    *		\f[ d_{Mm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{Mm}\ (Mm)\f$ Length in megameters.
    */
    template<typename T>
    T uzitzsToMegameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to kilometers.
    *		\f[ d_{km}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{km}\ (km)\f$ Length in kilometers.
    */
    template<typename T>
    T uzitzsToKilometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to hectometers.
    *		\f[ d_{hm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{hm}\ (hm)\f$ Length in hectometers.
    */
    template<typename T>
    T uzitzsToHectometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to decameters.
    *		\f[ d_{dam}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{dam}\ (dam)\f$ Length in decameters.
    */
    template<typename T>
    T uzitzsToDecameter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to decimeters.
    *		\f[ d_{dm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{dm}\ (dm)\f$ Length in decimeters.
    */
    template<typename T>
    T uzitzsToDecimeter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to centimeters.
    *		\f[ d_{cm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{cm}\ (cm)\f$ Length in centimeters.
    */
    template<typename T>
    T uzitzsToCentimeter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to millimeters.
    *		\f[ d_{m}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{mm}\ (mm)\f$ Length in millimeters.
    */
    template<typename T>
    T uzitzsToMillimeter(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to micrometers.
    *		\f[ d_{\mum}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{\mum}\ (\mum)\f$ Length in micrometers.
    *   @see uzitzsToMicron for alias.
    */
    template<typename T>
    T uzitzsToMicrometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to nanometers.
    *		\f[ d_{nm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{nm}\ (nm)\f$ Length in nanometers.
    */
    template<typename T>
    T uzitzsToNanometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to picometers.
    *		\f[ d_{pm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{pm}\ (pm)\f$ Length in picometers.
    *   @see uzitzsToAngstrom for angstrom conversion.
    *   @see uzitzsToCuXUnit for copper x unit conversion.
    *   @see uzitzsToMoXUnit for molybdenum  x unit conversion.
    */
    template<typename T>
    T uzitzsTPicometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to femtometers.
    *		\f[ d_{fm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{fm}\ (fm)\f$ Length in femtometers.
    *   @see uzitzsToFermi for alias.
    */
    template<typename T>
    T uzitzsToFemtometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to attometers.
    *		\f[ d_{am}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{am}\ (am)\f$ Length in attometers.
    */
    template<typename T>
    T uzitzsToAttometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to zeptometers.
    *		\f[ d_{zm}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{zm}\ (zm)\f$ Length in zeptometers.
    */
    template<typename T>
    T uzitzsToZeptometer(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to Yoctometers.
    *		\f[ d_{ym}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{ym}\ (ym)\f$ Length in yoctometers.
    */
    template<typename T>
    T uzitzsToYoctometer(const T lengthInuzitzs);








    //Non-SI

    /**
    *   @brief Converts a length in ulongxxits to angstroms.
    *		\f[ d_{\AA}=\d_{uxxits} \f]
    *
    *   See https://en.wikipedia.org/wiki/Metric_prefix#List_of_SI_prefixes and https://en.wikipedia.org/wiki/Unit_of_length
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{\AA}\ (\AA)\f$ Length in angstroms.
    *   @see uzitzsToPicometer for picometer conversion.
    *   @see uzitzsToCuXUnit for copper x unit conversion.
    *   @see uzitzsToMoXUnit for molybdenum  x unit conversion.
    */
    template<typename T>
    T uzitzsToAngstrom(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to fermis.
    *		\f[ d_{fm}=\d_{uxxits} \f]
    *
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{fm}\ (fm)\f$ Length in fermis.
    */
    template<typename T>
    T uzitzsToFermi(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to microns.
    *		\f[ d_{\mum}=\d_{uxxits} \f]
    *
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{\mum}\ (\mum)\f$ Length in microns.
    */
    template<typename T>
    T uzitzsToMicron(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to copper x unit.
    *		\f[ d_{xu(Cu\ K\alpha_1)}=\d_{uxxits} \f]
    *
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{xu(Cu\ K\alpha_1)}\ ()\f$ Length in copper x unit.
    *   @see uzitzsToAngstrom for angstrom conversion.
    *   @see uzitzsToPicometer for picometer conversion.
    *   @see uzitzsToMoXUnit for molybdenum  x unit conversion.
    */
    template<typename T>
    T uzitzsToCuXUnit(const T lengthInuzitzs);

    /**
    *   @brief Converts a length in ulongxxits to molybdenum x unit.
    *		\f[ d_{xu(Mo\ K\alpha_1)}=\d_{uxxits} \f]
    *
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{xu(Mo\ K\alpha_1)}\ (xu)\f$ Length in molybdenum x unit.
    *   @see uzitzsToAngstrom for angstrom conversion.
    *   @see uzitzsToPicometer for picometer conversion.
    *   @see uzitzsToCuXUnit for copper x unit conversion.
    */
    template<typename T>
    T uzitzsToMoXUnit(const T lengthInuzitzs);






    //Imperial
    /**
    *   @brief Converts a length in ulongxxits to .
    *		\f[ d_{}=\d_{uxxits} \f]
    *
    *   @param \f$ d_{uxxits}\ (uxxits)\f$ Length in ulongxxits.
    *   @return \f$ d_{}\ ()\f$ Length in .
    */
    template<typename T>
    T uzitzsToMile(const T lengthInuzitzs);



	/// @}
} //namespace EGXMath

#include "uzitzsConversion.inl"
