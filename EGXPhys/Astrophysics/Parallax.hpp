/// @file EGXPhys/Astrophysics/Parallax.hpp
///
/// @brief Calculates parallax and distance based on parallax.
///
/// @author Elliot Grafil 
/// @date 6/16/18

/// @defgroup EGXPhys-Astrophysic-Parallax Parallax
/// @ingroup EGXPhys-Astrophysics

//=================================
// Header guard
#pragma once
//=================================
// Included dependencies

//=================================
// Forward declared dependencies

//=================================
//


namespace EGXPhys
{
	/// @addtogroup EGXPhys-Astrophysic-Parallax
	/// @{


     /**
     *  @brief Calculates the distance, \f$D\f$, of an object in parsecs from its observed parallax, \f$p\f$, in arcseconds.
     *			\f[ D=\dfrac{1}{p}\f]
     *
     *  See http://astro.physics.uiowa.edu/ITU/glossary/stellar-parallax/ and https://en.wikipedia.org/wiki/Stellar_parallax
     *
     *	Equation taken from http://astronomyonline.org/Science/Parallax.asp
     *    
     *  @param  parallaxInArcseconds \f$ p\ (")\f$ Parallax of object in arcseconds. See http://coolcosmos.ipac.caltech.edu/cosmic_classroom/cosmic_reference/angular.html
     *  @return \f$ d\ (pc)\f$ Distance in parsecs.
     *  @see ParallaxToAU() for conversion into astronomical units.
     *  @see ParallaxToLightYear() for conversion into light years.
     *  @see ParallaxToMeter() for conversion into meters.
     */
    template<typename T>
    T ParallaxToParsec(const T parallaxInArcseconds);

    /**
    *  @brief Calculates the distance, \f$D\f$, of an object in astronomical units from its observed parallax, \f$p\f$, in arcseconds.
    *			\f[ D=\dfrac{648000}{\pi}\dfrac{1}{p}\f]
    *
    *  See http://astro.physics.uiowa.edu/ITU/glossary/stellar-parallax/ and https://en.wikipedia.org/wiki/Stellar_parallax
    *
    *	Equation taken from http://astronomyonline.org/Science/Parallax.asp
    *
    *  @param  parallaxInArcseconds \f$ p\ (")\f$ Parallax of object in arcseconds. See http://coolcosmos.ipac.caltech.edu/cosmic_classroom/cosmic_reference/angular.html
    *  @return \f$ D\ (au)\f$ Distance in astronomical units.
    *  @see ParallaxToAU() for alias.
    *  @see ParallaxToParsec() for conversion into parsecs.
    *  @see ParallaxToLightYear() for conversion into light years.
    *  @see ParallaxToMeter() for conversion into meters.
    */
    template<typename T>
    T ParallaxToAstronomicalUnit(const T parallaxInArcseconds);

    /**
    *  @brief Calculates the distance, \f$D\f$, of an object in astronomical units from its observed parallax, \f$p\f$, in arcseconds.
    *			\f[ D=\dfrac{648000}{\pi}\dfrac{1}{p}\f]
    *
    *  See http://astro.physics.uiowa.edu/ITU/glossary/stellar-parallax/ and https://en.wikipedia.org/wiki/Stellar_parallax
    *
    *	Equation taken from http://astronomyonline.org/Science/Parallax.asp
    *
    *  @param  parallaxInArcseconds \f$ p\ (")\f$ Parallax of object in arcseconds. See http://coolcosmos.ipac.caltech.edu/cosmic_classroom/cosmic_reference/angular.html
    *  @return \f$ D\ (au)\f$ Distance in astronomical units.
    *  @see ParallaxToAU() for alias.
    *  @see ParallaxToParsec() for conversion into parsecs.
    *  @see ParallaxToLightYear() for conversion into light years.
    *  @see ParallaxToMeter() for conversion into meters.
    */
    template<typename T>
    T ParallaxToAstronomicalUnit(const T parallaxInArcseconds);

    /**
    *  @brief Calculates the distance, \f$D\f$, of an object in light years from its observed parallax, \f$p\f$, in arcseconds.
    *			\f[ D=\dfrac{149597870700 * 648000}{9460730472580800 \pi} \dfrac{1}{p}\f]
    *
    *  See http://astro.physics.uiowa.edu/ITU/glossary/stellar-parallax/ and https://en.wikipedia.org/wiki/Stellar_parallax
    *
    *	Equation taken from http://astronomyonline.org/Science/Parallax.asp
    *
    *  @param  parallaxInArcseconds \f$ p\ (")\f$ Parallax of object in arcseconds. See http://coolcosmos.ipac.caltech.edu/cosmic_classroom/cosmic_reference/angular.html
    *  @return \f$ D\ (ly)\f$ Distance in light years.
    *  @see ParallaxToParsec() for conversion into parsecs.
    *  @see ParallaxToAU() for conversion into astronomical units.
    *  @see ParallaxToLightYear() for conversion into light years.
    *  @see ParallaxToMeter() for conversion into meters.
    */
    template<typename T>
    T ParallaxToLightYear(const T parallaxInArcseconds);

    /**
    *  @brief Calculates the distance, \f$D\f$, of an object in meters from its observed parallax, \f$p\f$, in arcseconds.
    *			\f[ D=\dfrac{149597870700 * 648000}{\pi}\dfrac{1}{p}\f]
    *
    *  See http://astro.physics.uiowa.edu/ITU/glossary/stellar-parallax/ and https://en.wikipedia.org/wiki/Stellar_parallax
    *
    *	Equation taken from http://astronomyonline.org/Science/Parallax.asp
    *
    *  @param  parallaxInArcseconds \f$ p\ (")\f$ Parallax of object in arcseconds. See http://coolcosmos.ipac.caltech.edu/cosmic_classroom/cosmic_reference/angular.html
    *  @return \f$ D\ (m)\f$ Distance in meters.
    *  @see ParallaxToParsec() for conversion into parsecs.
    *  @see ParallaxToAU() for conversion into astronomical units.
    *  @see ParallaxToLightYear() for conversion into light years.
    *  @see ParallaxToMeter() for conversion into meters.
    */
    template<typename T>
    T ParallaxToMeter(const T parallaxInArcseconds);
    /// @}
} //namespace EGXPhys

#include "Parallax.inl"
