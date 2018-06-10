/// @file EGXMath/Conversions/LengthConversions/Non-SI/CuXUnitConversion.inl
///
/// @brief Implimentation of CuXUnit conversions
/// @author Elliot Grafil (Metex)
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T CuXUnitToAstronomicalUnit(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) / (T)auInMeters;
    }

    template<typename T>
    T CuXUnitToLightYear(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) / (T)lightYearInMeters;
    }

    template<typename T>
    T CuXUnitToParsec(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T CuXUnitToMeter(const T lengthInCuXUnit) {
        return (T)CuXUnit * lengthInCuXUnit;
    }

    template<typename T>
    T CuXUnitToYottameter(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e-24;
    }


    template<typename T>
    T CuXUnitToZettameter(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e-21;
    }

    template<typename T>
    T CuXUnitToExameter(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e-18;
    }

    template<typename T>
    T CuXUnitToPetameter(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e-15;
    }


    template<typename T>
    T CuXUnitToTerameter(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e-12;
    }

    template<typename T>
    T CuXUnitToGigameter(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e-9;
    }

    template<typename T>
    T CuXUnitToMegameter(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e-6;
    }

    template<typename T>
    T CuXUnitToKilometer(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e-3;
    }

    template<typename T>
    T CuXUnitToHectometer(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e-2;
    }

    template<typename T>
    T CuXUnitToDecameter(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e-1;
    }

    template<typename T>
    T CuXUnitToDecimeter(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e1;
    }

    template<typename T>
    T CuXUnitToCentimeter(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e2;
    }

    template<typename T>
    T CuXUnitToMillimeter(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e3;
    }

    template<typename T>
    T CuXUnitToMicrometer(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e6;
    }

    template<typename T>
    T CuXUnitToNanometer(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e9;
    }

    template<typename T>
    T CuXUnitToPicometer(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e12;
    }

    template<typename T>
    T CuXUnitToFemtometer(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e15;
    }

    template<typename T>
    T CuXUnitToAttometer(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e18;
    }

    template<typename T>
    T CuXUnitToZeptometer(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e21;
    }

    template<typename T>
    T CuXUnitToYoctometer(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) * (T)1e24;
    }




    template<typename T>
    T CuXUnitToAngstrom(const T lengthInCuXUnit) {
        return CuXUnitToPicometer(lengthInCuXUnit) * (T)1e-2;
    }

    template<typename T>
    T CuXUnitToFermi(const T lengthInCuXUnit) {
        return CuXUnitTofemtometer(lengthInCuXUnit);
    }

    template<typename T>
    T CuXUnitToMicron(const T lengthInCuXUnit) {
        return CuXUnitToMicrometer(lengthInCuXUnit);
    }

    template<typename T>
    T CuXUnitToMoXUnit(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T CuXUnitToMile(const T lengthInCuXUnit) {
        return CuXUnitToInch(lengthInCuXUnit) / (T)63360.0;
    }

    template<typename T>
    T CuXUnitToYard(const T lengthInCuXUnit) {
        return CuXUnitToInch(lengthInCuXUnit) / (T)36.0;
    }

    template<typename T>
    T CuXUnitToFoot(const T lengthInCuXUnit) {
        return CuXUnitToInch(lengthInCuXUnit) / (T)12.0;
    }

    template<typename T>
    T CuXUnitToInch(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) / (T)0.0254;
    }

    template<typename T>
    T CuXUnitToMil(const T lengthInCuXUnit) {
        return CuXUnitToInch(lengthInCuXUnit) * (T)1000.0;
    }

    template<typename T>
    T CuXUnitToThou(const T lengthInCuXUnit) {
        return CuXUnitToInch(lengthInCuXUnit) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T CuXUnitToNauticalMile(const T lengthInCuXUnit) {
        return CuXUnitToMeter(lengthInCuXUnit) / (T)1852.0;
    }

    template<typename T>
    T CuXUnitToFathom(const T lengthInCuXUnit) {
        return CuXUnitToInch(lengthInCuXUnit) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T CuXUnitToRod(const T lengthInCuXUnit) {
        return CuXUnitToInch(lengthInCuXUnit) / (T)198.0;
    }

    template<typename T>
    T CuXUnitToChain(const T lengthInCuXUnit) {
        return CuXUnitToInch(lengthInCuXUnit) / (T)792.0;
    }

}//namespace EGXPhys
