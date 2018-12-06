/// @file EGXMath/Conversions/LengthConversions/SI/ZeptometerConversion.inl
///
/// @brief Implimentation of Zeptometer conversions
/// @author Elliot Grafil 
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T ZeptometerToAstronomicalUnit(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) / (T)auInMeters;
    }

    template<typename T>
    T ZeptometerToLightYear(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) / (T)lightYearInMeters;
    }

    template<typename T>
    T ZeptometerToParsec(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T ZeptometerToMeter(const T lengthInZeptometer) {
        return lengthInZeptometer * (T)1e-21;
    }

    template<typename T>
    T ZeptometerToYottameter(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e-24;
    }


    template<typename T>
    T ZeptometerToZettameter(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e-21;
    }

    template<typename T>
    T ZeptometerToExameter(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e-18;
    }

    template<typename T>
    T ZeptometerToPetameter(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e-15;
    }


    template<typename T>
    T ZeptometerToTerameter(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e-12;
    }

    template<typename T>
    T ZeptometerToGigameter(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e-9;
    }

    template<typename T>
    T ZeptometerToMegameter(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e-6;
    }

    template<typename T>
    T ZeptometerToKilometer(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e-3;
    }

    template<typename T>
    T ZeptometerToHectometer(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e-2;
    }

    template<typename T>
    T ZeptometerToDecameter(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e-1;
    }

    template<typename T>
    T ZeptometerToDecimeter(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e1;
    }

    template<typename T>
    T ZeptometerToCentimeter(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e2;
    }

    template<typename T>
    T ZeptometerToMillimeter(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e3;
    }

    template<typename T>
    T ZeptometerToMicrometer(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e6;
    }

    template<typename T>
    T ZeptometerToNanometer(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e9;
    }

    template<typename T>
    T ZeptometerToPicometer(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e12;
    }

    template<typename T>
    T ZeptometerToFemtometer(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e15;
    }

    template<typename T>
    T ZeptometerToAttometer(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e18;
    }

    template<typename T>
    T ZeptometerToYoctometer(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) * (T)1e24;
    }




    template<typename T>
    T ZeptometerToAngstrom(const T lengthInZeptometer) {
        return ZeptometerToPicometer(lengthInZeptometer) * (T)1e-2;
    }

    template<typename T>
    T ZeptometerToFermi(const T lengthInZeptometer) {
        return ZeptometerToFemtometer(lengthInZeptometer);
    }

    template<typename T>
    T ZeptometerToMicron(const T lengthInZeptometer) {
        return ZeptometerToMicrometer(lengthInZeptometer);
    }

    template<typename T>
    T ZeptometerToCuXUnit(const T lengthInZeptometer) {
        
        return ZeptometerToMeter(lengthInZeptometer) / (T)CuXUnit;
    }

    template<typename T>
    T ZeptometerToMoXUnit(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T ZeptometerToMile(const T lengthInZeptometer) {
        return ZeptometerToInch(lengthInZeptometer) / (T)63360.0;
    }

    template<typename T>
    T ZeptometerToYard(const T lengthInZeptometer) {
        return ZeptometerToInch(lengthInZeptometer) / (T)36.0;
    }

    template<typename T>
    T ZeptometerToFoot(const T lengthInZeptometer) {
        return ZeptometerToInch(lengthInZeptometer) / (T)12.0;
    }

    template<typename T>
    T ZeptometerToInch(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) / (T)0.0254;
    }

    template<typename T>
    T ZeptometerToMil(const T lengthInZeptometer) {
        return ZeptometerToInch(lengthInZeptometer) * (T)1000.0;
    }

    template<typename T>
    T ZeptometerToThou(const T lengthInZeptometer) {
        return ZeptometerToInch(lengthInZeptometer) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T ZeptometerToNauticalMile(const T lengthInZeptometer) {
        return ZeptometerToMeter(lengthInZeptometer) / (T)1852.0;
    }

    template<typename T>
    T ZeptometerToFathom(const T lengthInZeptometer) {
        return ZeptometerToInch(lengthInZeptometer) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T ZeptometerToRod(const T lengthInZeptometer) {
        return ZeptometerToInch(lengthInZeptometer) / (T)198.0;
    }

    template<typename T>
    T ZeptometerToChain(const T lengthInZeptometer) {
        return ZeptometerToInch(lengthInZeptometer) / (T)792.0;
    }

}//namespace EGXPhys
