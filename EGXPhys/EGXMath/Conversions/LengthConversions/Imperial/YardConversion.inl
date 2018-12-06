/// @file EGXMath/Conversions/LengthConversions/Imperial/YardConversion.inl
///
/// @brief Implimentation of Yard conversions
/// @author Elliot Grafil 
/// @date 6/11/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T YardToAstronomicalUnit(const T lengthInYard) {
        return YardToMeter(lengthInYard) / (T)auInMeters;
    }

    template<typename T>
    T YardToLightYear(const T lengthInYard) {
        return YardToMeter(lengthInYard) / (T)lightYearInMeters;
    }

    template<typename T>
    T YardToParsec(const T lengthInYard) {
        return YardToMeter(lengthInYard) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T YardToMeter(const T lengthInYard) {
        return YardToInch(lengthInYard) * (T)0.0254;
    }

    template<typename T>
    T YardToYottameter(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e-24;
    }


    template<typename T>
    T YardToZettameter(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e-21;
    }

    template<typename T>
    T YardToExameter(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e-18;
    }

    template<typename T>
    T YardToPetameter(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e-15;
    }


    template<typename T>
    T YardToTerameter(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e-12;
    }

    template<typename T>
    T YardToGigameter(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e-9;
    }

    template<typename T>
    T YardToMegameter(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e-6;
    }

    template<typename T>
    T YardToKilometer(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e-3;
    }

    template<typename T>
    T YardToHectometer(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e-2;
    }

    template<typename T>
    T YardToDecameter(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e-1;
    }

    template<typename T>
    T YardToDecimeter(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e1;
    }

    template<typename T>
    T YardToCentimeter(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e2;
    }

    template<typename T>
    T YardToMillimeter(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e3;
    }

    template<typename T>
    T YardToMicrometer(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e6;
    }

    template<typename T>
    T YardToNanometer(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e9;
    }

    template<typename T>
    T YardToPicometer(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e12;
    }

    template<typename T>
    T YardToFemtometer(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e15;
    }

    template<typename T>
    T YardToAttometer(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e18;
    }

    template<typename T>
    T YardToZeptometer(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e21;
    }

    template<typename T>
    T YardToYoctometer(const T lengthInYard) {
        return YardToMeter(lengthInYard) * (T)1e24;
    }




    template<typename T>
    T YardToAngstrom(const T lengthInYard) {
        return YardToPicometer(lengthInYard) * (T)1e-2;
    }

    template<typename T>
    T YardToFermi(const T lengthInYard) {
        return YardToFemtometer(lengthInYard);
    }

    template<typename T>
    T YardToMicron(const T lengthInYard) {
        return YardToMicrometer(lengthInYard);
    }

    template<typename T>
    T YardToCuXUnit(const T lengthInYard) {
        
        return YardToMeter(lengthInYard) / (T)CuXUnit;
    }

    template<typename T>
    T YardToMoXUnit(const T lengthInYard) {
        return YardToMeter(lengthInYard) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T YardToMile(const T lengthInYard) {
        return YardToInch(lengthInYard) / (T)63360.0;
    }

    template<typename T>
    T YardToFoot(const T lengthInYard) {
        return YardToInch(lengthInYard) / (T)12.0;
    }

    template<typename T>
    T YardToInch(const T lengthInYard) {
        return lengthInYard * (T)36.0;
    }

    template<typename T>
    T YardToMil(const T lengthInYard) {
        return YardToInch(lengthInYard) * (T)1000.0;
    }

    template<typename T>
    T YardToThou(const T lengthInYard) {
        return YardToInch(lengthInYard) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T YardToNauticalMile(const T lengthInYard) {
        return YardToMeter(lengthInYard) / (T)1852.0;
    }

    template<typename T>
    T YardToFathom(const T lengthInYard) {
        return YardToInch(lengthInYard) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T YardToRod(const T lengthInYard) {
        return YardToInch(lengthInYard) / (T)198.0;
    }

    template<typename T>
    T YardToChain(const T lengthInYard) {
        return YardToInch(lengthInYard) / (T)792.0;
    }

}//namespace EGXPhys
