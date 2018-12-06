/// @file EGXMath/Conversions/LengthConversions/Non-SI/MoXUnitConversion.inl
///
/// @brief Implimentation of MoXUnit conversions
/// @author Elliot Grafil 
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T MoXUnitToAstronomicalUnit(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) / (T)auInMeters;
    }

    template<typename T>
    T MoXUnitToLightYear(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) / (T)lightYearInMeters;
    }

    template<typename T>
    T MoXUnitToParsec(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T MoXUnitToMeter(const T lengthInMoXUnit) {
        return (T)MoXUnit * lengthInMoXUnit;
    }

    template<typename T>
    T MoXUnitToYottameter(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e-24;
    }


    template<typename T>
    T MoXUnitToZettameter(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e-21;
    }

    template<typename T>
    T MoXUnitToExameter(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e-18;
    }

    template<typename T>
    T MoXUnitToPetameter(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e-15;
    }


    template<typename T>
    T MoXUnitToTerameter(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e-12;
    }

    template<typename T>
    T MoXUnitToGigameter(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e-9;
    }

    template<typename T>
    T MoXUnitToMegameter(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e-6;
    }

    template<typename T>
    T MoXUnitToKilometer(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e-3;
    }

    template<typename T>
    T MoXUnitToHectometer(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e-2;
    }

    template<typename T>
    T MoXUnitToDecameter(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e-1;
    }

    template<typename T>
    T MoXUnitToDecimeter(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e1;
    }

    template<typename T>
    T MoXUnitToCentimeter(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e2;
    }

    template<typename T>
    T MoXUnitToMillimeter(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e3;
    }

    template<typename T>
    T MoXUnitToMicrometer(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e6;
    }

    template<typename T>
    T MoXUnitToNanometer(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e9;
    }

    template<typename T>
    T MoXUnitToPicometer(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e12;
    }

    template<typename T>
    T MoXUnitToFemtometer(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e15;
    }

    template<typename T>
    T MoXUnitToAttometer(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e18;
    }

    template<typename T>
    T MoXUnitToZeptometer(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e21;
    }

    template<typename T>
    T MoXUnitToYoctometer(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) * (T)1e24;
    }




    template<typename T>
    T MoXUnitToAngstrom(const T lengthInMoXUnit) {
        return MoXUnitToPicometer(lengthInMoXUnit) * (T)1e-2;
    }

    template<typename T>
    T MoXUnitToFermi(const T lengthInMoXUnit) {
        return MoXUnitToFemtometer(lengthInMoXUnit);
    }

    template<typename T>
    T MoXUnitToMicron(const T lengthInMoXUnit) {
        return MoXUnitToMicrometer(lengthInMoXUnit);
    }

    template<typename T>
    T MoXUnitToCuXUnit(const T lengthInMoXUnit) {
        
        return MoXUnitToMeter(lengthInMoXUnit) / (T)CuXUnit;
    }


    //Imperial

    template<typename T>
    T MoXUnitToMile(const T lengthInMoXUnit) {
        return MoXUnitToInch(lengthInMoXUnit) / (T)63360.0;
    }

    template<typename T>
    T MoXUnitToYard(const T lengthInMoXUnit) {
        return MoXUnitToInch(lengthInMoXUnit) / (T)36.0;
    }

    template<typename T>
    T MoXUnitToFoot(const T lengthInMoXUnit) {
        return MoXUnitToInch(lengthInMoXUnit) / (T)12.0;
    }

    template<typename T>
    T MoXUnitToInch(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) / (T)0.0254;
    }

    template<typename T>
    T MoXUnitToMil(const T lengthInMoXUnit) {
        return MoXUnitToInch(lengthInMoXUnit) * (T)1000.0;
    }

    template<typename T>
    T MoXUnitToThou(const T lengthInMoXUnit) {
        return MoXUnitToInch(lengthInMoXUnit) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T MoXUnitToNauticalMile(const T lengthInMoXUnit) {
        return MoXUnitToMeter(lengthInMoXUnit) / (T)1852.0;
    }

    template<typename T>
    T MoXUnitToFathom(const T lengthInMoXUnit) {
        return MoXUnitToInch(lengthInMoXUnit) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T MoXUnitToRod(const T lengthInMoXUnit) {
        return MoXUnitToInch(lengthInMoXUnit) / (T)198.0;
    }

    template<typename T>
    T MoXUnitToChain(const T lengthInMoXUnit) {
        return MoXUnitToInch(lengthInMoXUnit) / (T)792.0;
    }

}//namespace EGXPhys
