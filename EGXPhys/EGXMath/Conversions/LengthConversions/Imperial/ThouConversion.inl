/// @file EGXMath/Conversions/LengthConversions/Imperial/ThouConversion.inl
///
/// @brief Implimentation of Thou conversions
/// @author Elliot Grafil (Metex)
/// @date 6/13/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T ThouToAstronomicalUnit(const T lengthInThou) {
        return ThouToMeter(lengthInThou) / (T)auInMeters;
    }

    template<typename T>
    T ThouToLightYear(const T lengthInThou) {
        return ThouToMeter(lengthInThou) / (T)lightYearInMeters;
    }

    template<typename T>
    T ThouToParsec(const T lengthInThou) {
        return ThouToMeter(lengthInThou) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T ThouToMeter(const T lengthInThou) {
        return ThouToInch(lengthInThou) * (T)0.0254;
    }

    template<typename T>
    T ThouToYottameter(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e-24;
    }


    template<typename T>
    T ThouToZettameter(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e-21;
    }

    template<typename T>
    T ThouToExameter(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e-18;
    }

    template<typename T>
    T ThouToPetameter(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e-15;
    }


    template<typename T>
    T ThouToTerameter(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e-12;
    }

    template<typename T>
    T ThouToGigameter(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e-9;
    }

    template<typename T>
    T ThouToMegameter(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e-6;
    }

    template<typename T>
    T ThouToKilometer(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e-3;
    }

    template<typename T>
    T ThouToHectometer(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e-2;
    }

    template<typename T>
    T ThouToDecameter(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e-1;
    }

    template<typename T>
    T ThouToDecimeter(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e1;
    }

    template<typename T>
    T ThouToCentimeter(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e2;
    }

    template<typename T>
    T ThouToMillimeter(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e3;
    }

    template<typename T>
    T ThouToMicrometer(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e6;
    }

    template<typename T>
    T ThouToNanometer(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e9;
    }

    template<typename T>
    T ThouToPicometer(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e12;
    }

    template<typename T>
    T ThouToFemtometer(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e15;
    }

    template<typename T>
    T ThouToAttometer(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e18;
    }

    template<typename T>
    T ThouToZeptometer(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e21;
    }

    template<typename T>
    T ThouToYoctometer(const T lengthInThou) {
        return ThouToMeter(lengthInThou) * (T)1e24;
    }




    template<typename T>
    T ThouToAngstrom(const T lengthInThou) {
        return ThouToPicometer(lengthInThou) * (T)1e-2;
    }

    template<typename T>
    T ThouToFermi(const T lengthInThou) {
        return ThouToFemtometer(lengthInThou);
    }

    template<typename T>
    T ThouToMicron(const T lengthInThou) {
        return ThouToMicrometer(lengthInThou);
    }

    template<typename T>
    T ThouToCuXUnit(const T lengthInThou) {
        
        return ThouToMeter(lengthInThou) / (T)CuXUnit;
    }

    template<typename T>
    T ThouToMoXUnit(const T lengthInThou) {
        return ThouToMeter(lengthInThou) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T ThouToMile(const T lengthInThou) {
        return ThouToInch(lengthInThou) / (T)63360.0;
    }

    template<typename T>
    T ThouToYard(const T lengthInThou) {
        return ThouToInch(lengthInThou) / (T)36.0;
    }

    template<typename T>
    T ThouToFoot(const T lengthInThou) {
        return ThouToInch(lengthInThou) / (T)12.0;
    }

    template<typename T>
    T ThouToInch(const T lengthInThou) {
        return lengthInThou / (T)1000.0;
    }

    template<typename T>
    T ThouToMil(const T lengthInThou) {
        return ThouToInch(lengthInThou) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T ThouToNauticalMile(const T lengthInThou) {
        return ThouToMeter(lengthInThou) / (T)1852.0;
    }

    template<typename T>
    T ThouToFathom(const T lengthInThou) {
        return ThouToInch(lengthInThou) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T ThouToRod(const T lengthInThou) {
        return ThouToInch(lengthInThou) / (T)198.0;
    }

    template<typename T>
    T ThouToChain(const T lengthInThou) {
        return ThouToInch(lengthInThou) / (T)792.0;
    }

}//namespace EGXPhys
