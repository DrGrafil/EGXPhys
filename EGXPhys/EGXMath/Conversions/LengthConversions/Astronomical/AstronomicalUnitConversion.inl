/// @file EGXMath/Conversions/LengthConversions/Astronomical/AstronomicalUnitConversion.inl
///
/// @brief Implimentation of AstronomicalUnit conversions
/// @author Elliot Grafil 
/// @date 6/11/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T AstronomicalUnitToLightYear(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) / (T)lightYearInMeters;
    }

    template<typename T>
    T AstronomicalUnitToParsec(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T AstronomicalUnitToMeter(const T lengthInAstronomicalUnit) {
        return lengthInAstronomicalUnit * (T)auInMeters;
    }

    template<typename T>
    T AstronomicalUnitToYottameter(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e-24;
    }


    template<typename T>
    T AstronomicalUnitToZettameter(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e-21;
    }

    template<typename T>
    T AstronomicalUnitToExameter(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e-18;
    }

    template<typename T>
    T AstronomicalUnitToPetameter(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e-15;
    }


    template<typename T>
    T AstronomicalUnitToTerameter(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e-12;
    }

    template<typename T>
    T AstronomicalUnitToGigameter(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e-9;
    }

    template<typename T>
    T AstronomicalUnitToMegameter(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e-6;
    }

    template<typename T>
    T AstronomicalUnitToKilometer(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e-3;
    }

    template<typename T>
    T AstronomicalUnitToHectometer(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e-2;
    }

    template<typename T>
    T AstronomicalUnitToDecameter(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e-1;
    }

    template<typename T>
    T AstronomicalUnitToDecimeter(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e1;
    }

    template<typename T>
    T AstronomicalUnitToCentimeter(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e2;
    }

    template<typename T>
    T AstronomicalUnitToMillimeter(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e3;
    }

    template<typename T>
    T AstronomicalUnitToMicrometer(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e6;
    }

    template<typename T>
    T AstronomicalUnitToNanometer(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e9;
    }

    template<typename T>
    T AstronomicalUnitToPicometer(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e12;
    }

    template<typename T>
    T AstronomicalUnitToFemtometer(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e15;
    }

    template<typename T>
    T AstronomicalUnitToAttometer(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e18;
    }

    template<typename T>
    T AstronomicalUnitToZeptometer(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e21;
    }

    template<typename T>
    T AstronomicalUnitToYoctometer(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) * (T)1e24;
    }




    template<typename T>
    T AstronomicalUnitToAngstrom(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToPicometer(lengthInAstronomicalUnit) * (T)1e-2;
    }

    template<typename T>
    T AstronomicalUnitToFermi(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToFemtometer(lengthInAstronomicalUnit);
    }

    template<typename T>
    T AstronomicalUnitToMicron(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMicrometer(lengthInAstronomicalUnit);
    }

    template<typename T>
    T AstronomicalUnitToCuXUnit(const T lengthInAstronomicalUnit) {
        
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) / (T)CuXUnit;
    }

    template<typename T>
    T AstronomicalUnitToMoXUnit(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T AstronomicalUnitToMile(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToInch(lengthInAstronomicalUnit) / (T)63360.0;
    }

    template<typename T>
    T AstronomicalUnitToYard(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToInch(lengthInAstronomicalUnit) / (T)36.0;
    }

    template<typename T>
    T AstronomicalUnitToFoot(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToInch(lengthInAstronomicalUnit) / (T)12.0;
    }

    template<typename T>
    T AstronomicalUnitToInch(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) / (T)0.0254;
    }

    template<typename T>
    T AstronomicalUnitToMil(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToInch(lengthInAstronomicalUnit) * (T)1000.0;
    }

    template<typename T>
    T AstronomicalUnitToThou(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToInch(lengthInAstronomicalUnit) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T AstronomicalUnitToNauticalMile(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToMeter(lengthInAstronomicalUnit) / (T)1852.0;
    }

    template<typename T>
    T AstronomicalUnitToFathom(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToInch(lengthInAstronomicalUnit) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T AstronomicalUnitToRod(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToInch(lengthInAstronomicalUnit) / (T)198.0;
    }

    template<typename T>
    T AstronomicalUnitToChain(const T lengthInAstronomicalUnit) {
        return AstronomicalUnitToInch(lengthInAstronomicalUnit) / (T)792.0;
    }

}//namespace EGXPhys
