/// @file EGXMath/Conversions/LengthConversions/SI/ZettameterConversion.inl
///
/// @brief Implimentation of Zettameter conversions
/// @author Elliot Grafil (Metex)
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T ZettameterToAstronomicalUnit(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) / (T)auInMeters;
    }

    template<typename T>
    T ZettameterToLightYear(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) / (T)lightYearInMeters;
    }

    template<typename T>
    T ZettameterToParsec(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T ZettameterToMeter(const T lengthInZettameter) {
        return lengthInZettameter * (T)1e21;
    }

    template<typename T>
    T ZettameterToYottameter(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e-24;
    }


    template<typename T>
    T ZettameterToExameter(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e-18;
    }

    template<typename T>
    T ZettameterToPetameter(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e-15;
    }


    template<typename T>
    T ZettameterToTerameter(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e-12;
    }

    template<typename T>
    T ZettameterToGigameter(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e-9;
    }

    template<typename T>
    T ZettameterToMegameter(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e-6;
    }

    template<typename T>
    T ZettameterToKilometer(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e-3;
    }

    template<typename T>
    T ZettameterToHectometer(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e-2;
    }

    template<typename T>
    T ZettameterToDecameter(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e-1;
    }

    template<typename T>
    T ZettameterToDecimeter(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e1;
    }

    template<typename T>
    T ZettameterToCentimeter(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e2;
    }

    template<typename T>
    T ZettameterToMillimeter(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e3;
    }

    template<typename T>
    T ZettameterToMicrometer(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e6;
    }

    template<typename T>
    T ZettameterToNanometer(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e9;
    }

    template<typename T>
    T ZettameterToPicometer(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e12;
    }

    template<typename T>
    T ZettameterToFemtometer(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e15;
    }

    template<typename T>
    T ZettameterToAttometer(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e18;
    }

    template<typename T>
    T ZettameterToZeptometer(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e21;
    }

    template<typename T>
    T ZettameterToYoctometer(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) * (T)1e24;
    }




    template<typename T>
    T ZettameterToAngstrom(const T lengthInZettameter) {
        return ZettameterToPicometer(lengthInZettameter) * (T)1e-2;
    }

    template<typename T>
    T ZettameterToFermi(const T lengthInZettameter) {
        return ZettameterToFemtometer(lengthInZettameter);
    }

    template<typename T>
    T ZettameterToMicron(const T lengthInZettameter) {
        return ZettameterToMicrometer(lengthInZettameter);
    }

    template<typename T>
    T ZettameterToCuXUnit(const T lengthInZettameter) {
        
        return ZettameterToMeter(lengthInZettameter) / (T)CuXUnit;
    }

    template<typename T>
    T ZettameterToMoXUnit(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T ZettameterToMile(const T lengthInZettameter) {
        return ZettameterToInch(lengthInZettameter) / (T)63360.0;
    }

    template<typename T>
    T ZettameterToYard(const T lengthInZettameter) {
        return ZettameterToInch(lengthInZettameter) / (T)36.0;
    }

    template<typename T>
    T ZettameterToFoot(const T lengthInZettameter) {
        return ZettameterToInch(lengthInZettameter) / (T)12.0;
    }

    template<typename T>
    T ZettameterToInch(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) / (T)0.0254;
    }

    template<typename T>
    T ZettameterToMil(const T lengthInZettameter) {
        return ZettameterToInch(lengthInZettameter) * (T)1000.0;
    }

    template<typename T>
    T ZettameterToThou(const T lengthInZettameter) {
        return ZettameterToInch(lengthInZettameter) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T ZettameterToNauticalMile(const T lengthInZettameter) {
        return ZettameterToMeter(lengthInZettameter) / (T)1852.0;
    }

    template<typename T>
    T ZettameterToFathom(const T lengthInZettameter) {
        return ZettameterToInch(lengthInZettameter) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T ZettameterToRod(const T lengthInZettameter) {
        return ZettameterToInch(lengthInZettameter) / (T)198.0;
    }

    template<typename T>
    T ZettameterToChain(const T lengthInZettameter) {
        return ZettameterToInch(lengthInZettameter) / (T)792.0;
    }

}//namespace EGXPhys
