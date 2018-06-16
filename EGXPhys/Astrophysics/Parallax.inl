/// @file EGXPhys/Astrophysics/Parallax.inl
///
/// @brief Implimentation of parallax calculations
/// @author Elliot Grafil (Metex)
/// @date 3/19/18


namespace EGXPhys {

    template<typename T>
    T ParallaxToParsec(const T parallaxInArcseconds) {
        return (T)1.0 / parallaxInArcseconds;
    }

    template<typename T>
    T ParallaxToAU(const T parallaxInArcseconds) {
        return EGXMath::ParsecToAU((T)1.0 / parallaxInArcseconds));
    }

    template<typename T>
    T ParallaxToLightYear(const T parallaxInArcseconds) {
        return EGXMath::ParsecToLightYear((T)1.0 / parallaxInArcseconds);
    }

    template<typename T>
    T ParallaxToMeters(const T parallaxInArcseconds) {
        return EGXMath::ParsecToMeter((T)1.0 / parallaxInArcseconds);
    }

}//namespace EGXPhys
