/// @file EGXMath/Conversions/LengthConversions/SI/YottameterConversion.inl
///
/// @brief Implimentation of Yottameter conversions
/// @author Elliot Grafil 
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T YottameterToAstronomicalUnit(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) / (T)auInMeters;
    }

    template<typename T>
    T YottameterToLightYear(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) / (T)lightYearInMeters;
    }

    template<typename T>
    T YottameterToParsec(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T YottameterToMeter(const T lengthInYottameter) {
        return lengthInYottameter * (T)1e24;
    }

    template<typename T>
    T YottameterToZettameter(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e-21;
    }

    template<typename T>
    T YottameterToExameter(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e-18;
    }

    template<typename T>
    T YottameterToPetameter(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e-15;
    }


    template<typename T>
    T YottameterToTerameter(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e-12;
    }

    template<typename T>
    T YottameterToGigameter(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e-9;
    }

    template<typename T>
    T YottameterToMegameter(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e-6;
    }

    template<typename T>
    T YottameterToKilometer(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e-3;
    }

    template<typename T>
    T YottameterToHectometer(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e-2;
    }

    template<typename T>
    T YottameterToDecameter(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e-1;
    }

    template<typename T>
    T YottameterToDecimeter(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e1;
    }

    template<typename T>
    T YottameterToCentimeter(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e2;
    }

    template<typename T>
    T YottameterToMillimeter(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e3;
    }

    template<typename T>
    T YottameterToMicrometer(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e6;
    }

    template<typename T>
    T YottameterToNanometer(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e9;
    }

    template<typename T>
    T YottameterToPicometer(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e12;
    }

    template<typename T>
    T YottameterToFemtometer(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e15;
    }

    template<typename T>
    T YottameterToAttometer(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e18;
    }

    template<typename T>
    T YottameterToZeptometer(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e21;
    }

    template<typename T>
    T YottameterToYoctometer(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) * (T)1e24;
    }




    template<typename T>
    T YottameterToAngstrom(const T lengthInYottameter) {
        return YottameterToPicometer(lengthInYottameter) * (T)1e-2;
    }

    template<typename T>
    T YottameterToFermi(const T lengthInYottameter) {
        return YottameterToFemtometer(lengthInYottameter);
    }

    template<typename T>
    T YottameterToMicron(const T lengthInYottameter) {
        return YottameterToMicrometer(lengthInYottameter);
    }

    template<typename T>
    T YottameterToCuXUnit(const T lengthInYottameter) {
        
        return YottameterToMeter(lengthInYottameter) / (T)CuXUnit;
    }

    template<typename T>
    T YottameterToMoXUnit(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T YottameterToMile(const T lengthInYottameter) {
        return YottameterToInch(lengthInYottameter) / (T)63360.0;
    }

    template<typename T>
    T YottameterToYard(const T lengthInYottameter) {
        return YottameterToInch(lengthInYottameter) / (T)36.0;
    }

    template<typename T>
    T YottameterToFoot(const T lengthInYottameter) {
        return YottameterToInch(lengthInYottameter) / (T)12.0;
    }

    template<typename T>
    T YottameterToInch(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) / (T)0.0254;
    }

    template<typename T>
    T YottameterToMil(const T lengthInYottameter) {
        return YottameterToInch(lengthInYottameter) * (T)1000.0;
    }

    template<typename T>
    T YottameterToThou(const T lengthInYottameter) {
        return YottameterToInch(lengthInYottameter) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T YottameterToNauticalMile(const T lengthInYottameter) {
        return YottameterToMeter(lengthInYottameter) / (T)1852.0;
    }

    template<typename T>
    T YottameterToFathom(const T lengthInYottameter) {
        return YottameterToInch(lengthInYottameter) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T YottameterToRod(const T lengthInYottameter) {
        return YottameterToInch(lengthInYottameter) / (T)198.0;
    }

    template<typename T>
    T YottameterToChain(const T lengthInYottameter) {
        return YottameterToInch(lengthInYottameter) / (T)792.0;
    }

}//namespace EGXPhys
