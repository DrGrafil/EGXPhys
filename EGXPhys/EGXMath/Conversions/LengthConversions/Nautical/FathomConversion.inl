/// @file EGXMath/Conversions/LengthConversions/Imperial/FathomConversion.inl
///
/// @brief Implimentation of Fathom conversions
/// @author Elliot Grafil (Metex)
/// @date 6/13/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T FathomToAstronomicalUnit(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) / (T)auInMeters;
    }

    template<typename T>
    T FathomToLightYear(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) / (T)lightYearInMeters;
    }

    template<typename T>
    T FathomToParsec(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T FathomToMeter(const T lengthInFathom) {
        return FathomToInch(lengthInFathom) * (T)0.0254;
    }

    template<typename T>
    T FathomToYottameter(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e-24;
    }


    template<typename T>
    T FathomToZettameter(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e-21;
    }

    template<typename T>
    T FathomToExameter(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e-18;
    }

    template<typename T>
    T FathomToPetameter(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e-15;
    }


    template<typename T>
    T FathomToTerameter(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e-12;
    }

    template<typename T>
    T FathomToGigameter(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e-9;
    }

    template<typename T>
    T FathomToMegameter(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e-6;
    }

    template<typename T>
    T FathomToKilometer(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e-3;
    }

    template<typename T>
    T FathomToHectometer(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e-2;
    }

    template<typename T>
    T FathomToDecameter(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e-1;
    }

    template<typename T>
    T FathomToDecimeter(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e1;
    }

    template<typename T>
    T FathomToCentimeter(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e2;
    }

    template<typename T>
    T FathomToMillimeter(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e3;
    }

    template<typename T>
    T FathomToMicrometer(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e6;
    }

    template<typename T>
    T FathomToNanometer(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e9;
    }

    template<typename T>
    T FathomToPicometer(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e12;
    }

    template<typename T>
    T FathomToFemtometer(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e15;
    }

    template<typename T>
    T FathomToAttometer(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e18;
    }

    template<typename T>
    T FathomToZeptometer(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e21;
    }

    template<typename T>
    T FathomToYoctometer(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) * (T)1e24;
    }




    template<typename T>
    T FathomToAngstrom(const T lengthInFathom) {
        return FathomToPicometer(lengthInFathom) * (T)1e-2;
    }

    template<typename T>
    T FathomToFermi(const T lengthInFathom) {
        return FathomTofemtometer(lengthInFathom);
    }

    template<typename T>
    T FathomToMicron(const T lengthInFathom) {
        return FathomToMicrometer(lengthInFathom);
    }

    template<typename T>
    T FathomToCuXUnit(const T lengthInFathom) {
        
        return FathomToMeter(lengthInFathom) / (T)CuXUnit;
    }

    template<typename T>
    T FathomToMoXUnit(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T FathomToMile(const T lengthInFathom) {
        return FathomToInch(lengthInFathom) / (T)63360.0;
    }

    template<typename T>
    T FathomToYard(const T lengthInFathom) {
        return FathomToInch(lengthInFathom) / (T)36.0;
    }

    template<typename T>
    T FathomToFoot(const T lengthInFathom) {
        return FathomToInch(lengthInFathom) / (T)12.0;
    }

    template<typename T>
    T FathomToInch(const T lengthInFathom) {
        return lengthInFathom * (T)72.0;
    }

    template<typename T>
    T FathomToMil(const T lengthInFathom) {
        return FathomToInch(lengthInFathom) * (T)1000.0;
    }

    template<typename T>
    T FathomToThou(const T lengthInFathom) {
        return FathomToInch(lengthInFathom) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T FathomToNauticalMile(const T lengthInFathom) {
        return FathomToMeter(lengthInFathom) / (T)1852.0;
    }

    //Survyors
    template<typename T>
    T FathomToRod(const T lengthInFathom) {
        return FathomToInch(lengthInFathom) / (T)198.0;
    }

    template<typename T>
    T FathomToChain(const T lengthInFathom) {
        return FathomToInch(lengthInFathom) / (T)792.0;
    }

}//namespace EGXPhys
