/// @file EGXMath/Conversions/LengthConversions/Imperial/MileConversion.inl
///
/// @brief Implimentation of Mile conversions
/// @author Elliot Grafil 
/// @date 6/11/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T MileToAstronomicalUnit(const T lengthInMile) {
        return MileToMeter(lengthInMile) / (T)auInMeters;
    }

    template<typename T>
    T MileToLightYear(const T lengthInMile) {
        return MileToMeter(lengthInMile) / (T)lightYearInMeters;
    }

    template<typename T>
    T MileToParsec(const T lengthInMile) {
        return MileToMeter(lengthInMile) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T MileToMeter(const T lengthInMile) {
        return lengthInMile * (T)0.0254 * (T)63360.0;
    }

    template<typename T>
    T MileToYottameter(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e-24;
    }


    template<typename T>
    T MileToZettameter(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e-21;
    }

    template<typename T>
    T MileToExameter(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e-18;
    }

    template<typename T>
    T MileToPetameter(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e-15;
    }


    template<typename T>
    T MileToTerameter(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e-12;
    }

    template<typename T>
    T MileToGigameter(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e-9;
    }

    template<typename T>
    T MileToMegameter(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e-6;
    }

    template<typename T>
    T MileToKilometer(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e-3;
    }

    template<typename T>
    T MileToHectometer(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e-2;
    }

    template<typename T>
    T MileToDecameter(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e-1;
    }

    template<typename T>
    T MileToDecimeter(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e1;
    }

    template<typename T>
    T MileToCentimeter(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e2;
    }

    template<typename T>
    T MileToMillimeter(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e3;
    }

    template<typename T>
    T MileToMicrometer(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e6;
    }

    template<typename T>
    T MileToNanometer(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e9;
    }

    template<typename T>
    T MileToPicometer(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e12;
    }

    template<typename T>
    T MileToFemtometer(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e15;
    }

    template<typename T>
    T MileToAttometer(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e18;
    }

    template<typename T>
    T MileToZeptometer(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e21;
    }

    template<typename T>
    T MileToYoctometer(const T lengthInMile) {
        return MileToMeter(lengthInMile) * (T)1e24;
    }




    template<typename T>
    T MileToAngstrom(const T lengthInMile) {
        return MileToPicometer(lengthInMile) * (T)1e-2;
    }

    template<typename T>
    T MileToFermi(const T lengthInMile) {
        return MileToFemtometer(lengthInMile);
    }

    template<typename T>
    T MileToMicron(const T lengthInMile) {
        return MileToMicrometer(lengthInMile);
    }

    template<typename T>
    T MileToCuXUnit(const T lengthInMile) {
        
        return MileToMeter(lengthInMile) / (T)CuXUnit;
    }

    template<typename T>
    T MileToMoXUnit(const T lengthInMile) {
        return MileToMeter(lengthInMile) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T MileToYard(const T lengthInMile) {
        return MileToInch(lengthInMile) / (T)36.0;
    }

    template<typename T>
    T MileToFoot(const T lengthInMile) {
        return MileToInch(lengthInMile) / (T)12.0;
    }

    template<typename T>
    T MileToInch(const T lengthInMile) {
        return lengthInMile * (T)63360.0;
    }

    template<typename T>
    T MileToMil(const T lengthInMile) {
        return MileToInch(lengthInMile) * (T)1000.0;
    }

    template<typename T>
    T MileToThou(const T lengthInMile) {
        return MileToInch(lengthInMile) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T MileToNauticalMile(const T lengthInMile) {
        return MileToMeter(lengthInMile) / (T)1852.0;
    }

    template<typename T>
    T MileToFathom(const T lengthInMile) {
        return MileToInch(lengthInMile) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T MileToRod(const T lengthInMile) {
        return MileToInch(lengthInMile) / (T)198.0;
    }

    template<typename T>
    T MileToChain(const T lengthInMile) {
        return MileToInch(lengthInMile) / (T)792.0;
    }

}//namespace EGXPhys
