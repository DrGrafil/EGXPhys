/// @file EGXMath/Conversions/LengthConversions/Imperial/InchConversion.inl
///
/// @brief Implimentation of Inch conversions
/// @author Elliot Grafil (Metex)
/// @date 6/11/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T InchToAstronomicalUnit(const T lengthInInch) {
        return InchToMeter(lengthInInch) / (T)auInMeters;
    }

    template<typename T>
    T InchToLightYear(const T lengthInInch) {
        return InchToMeter(lengthInInch) / (T)lightYearInMeters;
    }

    template<typename T>
    T InchToParsec(const T lengthInInch) {
        return InchToMeter(lengthInInch) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T InchToMeter(const T lengthInInch) {
        return lengthInInch * (T)0.0254;
    }

    template<typename T>
    T InchToYottameter(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e-24;
    }


    template<typename T>
    T InchToZettameter(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e-21;
    }

    template<typename T>
    T InchToExameter(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e-18;
    }

    template<typename T>
    T InchToPetameter(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e-15;
    }


    template<typename T>
    T InchToTerameter(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e-12;
    }

    template<typename T>
    T InchToGigameter(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e-9;
    }

    template<typename T>
    T InchToMegameter(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e-6;
    }

    template<typename T>
    T InchToKilometer(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e-3;
    }

    template<typename T>
    T InchToHectometer(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e-2;
    }

    template<typename T>
    T InchToDecameter(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e-1;
    }

    template<typename T>
    T InchToDecimeter(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e1;
    }

    template<typename T>
    T InchToCentimeter(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e2;
    }

    template<typename T>
    T InchToMillimeter(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e3;
    }

    template<typename T>
    T InchToMicrometer(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e6;
    }

    template<typename T>
    T InchToNanometer(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e9;
    }

    template<typename T>
    T InchToPicometer(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e12;
    }

    template<typename T>
    T InchToFemtometer(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e15;
    }

    template<typename T>
    T InchToAttometer(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e18;
    }

    template<typename T>
    T InchToZeptometer(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e21;
    }

    template<typename T>
    T InchToYoctometer(const T lengthInInch) {
        return InchToMeter(lengthInInch) * (T)1e24;
    }




    template<typename T>
    T InchToAngstrom(const T lengthInInch) {
        return InchToPicometer(lengthInInch) * (T)1e-2;
    }

    template<typename T>
    T InchToFermi(const T lengthInInch) {
        return InchTofemtometer(lengthInInch);
    }

    template<typename T>
    T InchToMicron(const T lengthInInch) {
        return InchToMicrometer(lengthInInch);
    }

    template<typename T>
    T InchToCuXUnit(const T lengthInInch) {
        
        return InchToMeter(lengthInInch) / (T)CuXUnit;
    }

    template<typename T>
    T InchToMoXUnit(const T lengthInInch) {
        return InchToMeter(lengthInInch) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T InchToMile(const T lengthInInch) {
        return lengthInInch / (T)63360.0;
    }

    template<typename T>
    T InchToYard(const T lengthInInch) {
        return lengthInInch / (T)36.0;
    }

    template<typename T>
    T InchToFoot(const T lengthInInch) {
        return lengthInInch / (T)12.0;
    }

    template<typename T>
    T InchToMil(const T lengthInInch) {
        return lengthInInch * (T)1000.0;
    }

    template<typename T>
    T InchToThou(const T lengthInInch) {
        return lengthInInch * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T InchToNauticalMile(const T lengthInInch) {
        return InchToMeter(lengthInInch) / (T)1852.0;
    }

    template<typename T>
    T InchToFathom(const T lengthInInch) {
        return lengthInInch / (T)72.0;
    }

    //Survyors
    template<typename T>
    T InchToRod(const T lengthInInch) {
        return lengthInInch / (T)198.0;
    }

    template<typename T>
    T InchToChain(const T lengthInInch) {
        return lengthInInch / (T)792.0;
    }

}//namespace EGXPhys
