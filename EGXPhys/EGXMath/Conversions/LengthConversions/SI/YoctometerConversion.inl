/// @file EGXMath/Conversions/LengthConversions/SI/YoctometerConversion.inl
///
/// @brief Implimentation of Yoctometer conversions
/// @author Elliot Grafil 
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T YoctometerToAstronomicalUnit(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) / (T)auInMeters;
    }

    template<typename T>
    T YoctometerToLightYear(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) / (T)lightYearInMeters;
    }

    template<typename T>
    T YoctometerToParsec(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T YoctometerToMeter(const T lengthInYoctometer) {
        return lengthInYoctometer * (T)1e-24;
    }

    template<typename T>
    T YoctometerToYottameter(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e-24;
    }

    template<typename T>
    T YoctometerToZettameter(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e-21;
    }

    template<typename T>
    T YoctometerToExameter(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e-18;
    }

    template<typename T>
    T YoctometerToPetameter(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e-15;
    }


    template<typename T>
    T YoctometerToTerameter(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e-12;
    }

    template<typename T>
    T YoctometerToGigameter(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e-9;
    }

    template<typename T>
    T YoctometerToMegameter(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e-6;
    }

    template<typename T>
    T YoctometerToKilometer(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e-3;
    }

    template<typename T>
    T YoctometerToHectometer(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e-2;
    }

    template<typename T>
    T YoctometerToDecameter(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e-1;
    }

    template<typename T>
    T YoctometerToDecimeter(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e1;
    }

    template<typename T>
    T YoctometerToCentimeter(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e2;
    }

    template<typename T>
    T YoctometerToMillimeter(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e3;
    }

    template<typename T>
    T YoctometerToMicrometer(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e6;
    }

    template<typename T>
    T YoctometerToNanometer(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e9;
    }

    template<typename T>
    T YoctometerToPicometer(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e12;
    }

    template<typename T>
    T YoctometerToFemtometer(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e15;
    }

    template<typename T>
    T YoctometerToAttometer(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e18;
    }

    template<typename T>
    T YoctometerToZeptometer(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) * (T)1e21;
    }




    template<typename T>
    T YoctometerToAngstrom(const T lengthInYoctometer) {
        return YoctometerToPicometer(lengthInYoctometer) * (T)1e-2;
    }

    template<typename T>
    T YoctometerToFermi(const T lengthInYoctometer) {
        return YoctometerToFemtometer(lengthInYoctometer);
    }

    template<typename T>
    T YoctometerToMicron(const T lengthInYoctometer) {
        return YoctometerToMicrometer(lengthInYoctometer);
    }

    template<typename T>
    T YoctometerToCuXUnit(const T lengthInYoctometer) {
        
        return YoctometerToMeter(lengthInYoctometer) / (T)CuXUnit;
    }

    template<typename T>
    T YoctometerToMoXUnit(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T YoctometerToMile(const T lengthInYoctometer) {
        return YoctometerToInch(lengthInYoctometer) / (T)63360.0;
    }

    template<typename T>
    T YoctometerToYard(const T lengthInYoctometer) {
        return YoctometerToInch(lengthInYoctometer) / (T)36.0;
    }

    template<typename T>
    T YoctometerToFoot(const T lengthInYoctometer) {
        return YoctometerToInch(lengthInYoctometer) / (T)12.0;
    }

    template<typename T>
    T YoctometerToInch(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) / (T)0.0254;
    }

    template<typename T>
    T YoctometerToMil(const T lengthInYoctometer) {
        return YoctometerToInch(lengthInYoctometer) * (T)1000.0;
    }

    template<typename T>
    T YoctometerToThou(const T lengthInYoctometer) {
        return YoctometerToInch(lengthInYoctometer) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T YoctometerToNauticalMile(const T lengthInYoctometer) {
        return YoctometerToMeter(lengthInYoctometer) / (T)1852.0;
    }

    template<typename T>
    T YoctometerToFathom(const T lengthInYoctometer) {
        return YoctometerToInch(lengthInYoctometer) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T YoctometerToRod(const T lengthInYoctometer) {
        return YoctometerToInch(lengthInYoctometer) / (T)198.0;
    }

    template<typename T>
    T YoctometerToChain(const T lengthInYoctometer) {
        return YoctometerToInch(lengthInYoctometer) / (T)792.0;
    }

}//namespace EGXPhys
