/// @file EGXMath/Conversions/LengthConversions/Astronomical/LightYearConversion.inl
///
/// @brief Implimentation of LightYear conversions
/// @author Elliot Grafil (Metex)
/// @date 6/11/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T LightYearToAstronomicalUnit(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) / (T)auInMeters;
    }

    template<typename T>
    T LightYearToParsec(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T LightYearToMeter(const T lengthInLightYear) {
        return lengthInLightYear *(T)lightYearInMeters;
    }

    template<typename T>
    T LightYearToYottameter(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e-24;
    }


    template<typename T>
    T LightYearToZettameter(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e-21;
    }

    template<typename T>
    T LightYearToExameter(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e-18;
    }

    template<typename T>
    T LightYearToPetameter(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e-15;
    }


    template<typename T>
    T LightYearToTerameter(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e-12;
    }

    template<typename T>
    T LightYearToGigameter(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e-9;
    }

    template<typename T>
    T LightYearToMegameter(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e-6;
    }

    template<typename T>
    T LightYearToKilometer(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e-3;
    }

    template<typename T>
    T LightYearToHectometer(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e-2;
    }

    template<typename T>
    T LightYearToDecameter(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e-1;
    }

    template<typename T>
    T LightYearToDecimeter(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e1;
    }

    template<typename T>
    T LightYearToCentimeter(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e2;
    }

    template<typename T>
    T LightYearToMillimeter(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e3;
    }

    template<typename T>
    T LightYearToMicrometer(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e6;
    }

    template<typename T>
    T LightYearToNanometer(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e9;
    }

    template<typename T>
    T LightYearToPicometer(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e12;
    }

    template<typename T>
    T LightYearToFemtometer(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e15;
    }

    template<typename T>
    T LightYearToAttometer(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e18;
    }

    template<typename T>
    T LightYearToZeptometer(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e21;
    }

    template<typename T>
    T LightYearToYoctometer(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) * (T)1e24;
    }




    template<typename T>
    T LightYearToAngstrom(const T lengthInLightYear) {
        return LightYearToPicometer(lengthInLightYear) * (T)1e-2;
    }

    template<typename T>
    T LightYearToFermi(const T lengthInLightYear) {
        return LightYearTofemtometer(lengthInLightYear);
    }

    template<typename T>
    T LightYearToMicron(const T lengthInLightYear) {
        return LightYearToMicrometer(lengthInLightYear);
    }

    template<typename T>
    T LightYearToCuXUnit(const T lengthInLightYear) {
        
        return LightYearToMeter(lengthInLightYear) / (T)CuXUnit;
    }

    template<typename T>
    T LightYearToMoXUnit(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T LightYearToMile(const T lengthInLightYear) {
        return LightYearToInch(lengthInLightYear) / (T)63360.0;
    }

    template<typename T>
    T LightYearToYard(const T lengthInLightYear) {
        return LightYearToInch(lengthInLightYear) / (T)36.0;
    }

    template<typename T>
    T LightYearToFoot(const T lengthInLightYear) {
        return LightYearToInch(lengthInLightYear) / (T)12.0;
    }

    template<typename T>
    T LightYearToInch(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) / (T)0.0254;
    }

    template<typename T>
    T LightYearToMil(const T lengthInLightYear) {
        return LightYearToInch(lengthInLightYear) * (T)1000.0;
    }

    template<typename T>
    T LightYearToThou(const T lengthInLightYear) {
        return LightYearToInch(lengthInLightYear) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T LightYearToNauticalMile(const T lengthInLightYear) {
        return LightYearToMeter(lengthInLightYear) / (T)1852.0;
    }

    template<typename T>
    T LightYearToFathom(const T lengthInLightYear) {
        return LightYearToInch(lengthInLightYear) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T LightYearToRod(const T lengthInLightYear) {
        return LightYearToInch(lengthInLightYear) / (T)198.0;
    }

    template<typename T>
    T LightYearToChain(const T lengthInLightYear) {
        return LightYearToInch(lengthInLightYear) / (T)792.0;
    }

}//namespace EGXPhys
