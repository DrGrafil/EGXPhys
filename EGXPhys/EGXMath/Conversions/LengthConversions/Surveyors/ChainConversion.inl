/// @file EGXMath/Conversions/LengthConversions/Imperial/ChainConversion.inl
///
/// @brief Implimentation of Chain conversions
/// @author Elliot Grafil (Metex)
/// @date 6/13/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T ChainToAstronomicalUnit(const T lengthInChain) {
        return ChainToMeter(lengthInChain) / (T)auInMeters;
    }

    template<typename T>
    T ChainToLightYear(const T lengthInChain) {
        return ChainToMeter(lengthInChain) / (T)lightYearInMeters;
    }

    template<typename T>
    T ChainToParsec(const T lengthInChain) {
        return ChainToMeter(lengthInChain) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T ChainToMeter(const T lengthInChain) {
        return ChainToInch(lengthInChain) * (T)0.0254;
    }

    template<typename T>
    T ChainToYottameter(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e-24;
    }


    template<typename T>
    T ChainToZettameter(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e-21;
    }

    template<typename T>
    T ChainToExameter(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e-18;
    }

    template<typename T>
    T ChainToPetameter(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e-15;
    }


    template<typename T>
    T ChainToTerameter(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e-12;
    }

    template<typename T>
    T ChainToGigameter(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e-9;
    }

    template<typename T>
    T ChainToMegameter(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e-6;
    }

    template<typename T>
    T ChainToKilometer(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e-3;
    }

    template<typename T>
    T ChainToHectometer(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e-2;
    }

    template<typename T>
    T ChainToDecameter(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e-1;
    }

    template<typename T>
    T ChainToDecimeter(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e1;
    }

    template<typename T>
    T ChainToCentimeter(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e2;
    }

    template<typename T>
    T ChainToMillimeter(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e3;
    }

    template<typename T>
    T ChainToMicrometer(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e6;
    }

    template<typename T>
    T ChainToNanometer(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e9;
    }

    template<typename T>
    T ChainToPicometer(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e12;
    }

    template<typename T>
    T ChainToFemtometer(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e15;
    }

    template<typename T>
    T ChainToAttometer(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e18;
    }

    template<typename T>
    T ChainToZeptometer(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e21;
    }

    template<typename T>
    T ChainToYoctometer(const T lengthInChain) {
        return ChainToMeter(lengthInChain) * (T)1e24;
    }




    template<typename T>
    T ChainToAngstrom(const T lengthInChain) {
        return ChainToPicometer(lengthInChain) * (T)1e-2;
    }

    template<typename T>
    T ChainToFermi(const T lengthInChain) {
        return ChainTofemtometer(lengthInChain);
    }

    template<typename T>
    T ChainToMicron(const T lengthInChain) {
        return ChainToMicrometer(lengthInChain);
    }

    template<typename T>
    T ChainToCuXUnit(const T lengthInChain) {
        
        return ChainToMeter(lengthInChain) / (T)CuXUnit;
    }

    template<typename T>
    T ChainToMoXUnit(const T lengthInChain) {
        return ChainToMeter(lengthInChain) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T ChainToMile(const T lengthInChain) {
        return ChainToInch(lengthInChain) / (T)63360.0;
    }

    template<typename T>
    T ChainToYard(const T lengthInChain) {
        return ChainToInch(lengthInChain) / (T)36.0;
    }

    template<typename T>
    T ChainToFoot(const T lengthInChain) {
        return ChainToInch(lengthInChain) / (T)12.0;
    }

    template<typename T>
    T ChainToInch(const T lengthInChain) {
        return lengthInChain * (T)792.0;
    }

    template<typename T>
    T ChainToMil(const T lengthInChain) {
        return ChainToInch(lengthInChain) * (T)1000.0;
    }

    template<typename T>
    T ChainToThou(const T lengthInChain) {
        return ChainToInch(lengthInChain) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T ChainToNauticalMile(const T lengthInChain) {
        return ChainToMeter(lengthInChain) / (T)1852.0;
    }

    template<typename T>
    T ChainToFathom(const T lengthInChain) {
        return ChainToInch(lengthInChain) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T ChainToRod(const T lengthInChain) {
        return ChainToInch(lengthInChain) / (T)198.0;
    }

}//namespace EGXPhys
