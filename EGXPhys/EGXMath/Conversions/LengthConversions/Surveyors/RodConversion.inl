/// @file EGXMath/Conversions/LengthConversions/Imperial/RodConversion.inl
///
/// @brief Implimentation of Rod conversions
/// @author Elliot Grafil 
/// @date 6/13/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T RodToAstronomicalUnit(const T lengthInRod) {
        return RodToMeter(lengthInRod) / (T)auInMeters;
    }

    template<typename T>
    T RodToLightYear(const T lengthInRod) {
        return RodToMeter(lengthInRod) / (T)lightYearInMeters;
    }

    template<typename T>
    T RodToParsec(const T lengthInRod) {
        return RodToMeter(lengthInRod) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T RodToMeter(const T lengthInRod) {
        return RodToInch(lengthInRod) * (T)0.0254;
    }

    template<typename T>
    T RodToYottameter(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e-24;
    }


    template<typename T>
    T RodToZettameter(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e-21;
    }

    template<typename T>
    T RodToExameter(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e-18;
    }

    template<typename T>
    T RodToPetameter(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e-15;
    }


    template<typename T>
    T RodToTerameter(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e-12;
    }

    template<typename T>
    T RodToGigameter(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e-9;
    }

    template<typename T>
    T RodToMegameter(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e-6;
    }

    template<typename T>
    T RodToKilometer(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e-3;
    }

    template<typename T>
    T RodToHectometer(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e-2;
    }

    template<typename T>
    T RodToDecameter(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e-1;
    }

    template<typename T>
    T RodToDecimeter(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e1;
    }

    template<typename T>
    T RodToCentimeter(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e2;
    }

    template<typename T>
    T RodToMillimeter(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e3;
    }

    template<typename T>
    T RodToMicrometer(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e6;
    }

    template<typename T>
    T RodToNanometer(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e9;
    }

    template<typename T>
    T RodToPicometer(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e12;
    }

    template<typename T>
    T RodToFemtometer(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e15;
    }

    template<typename T>
    T RodToAttometer(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e18;
    }

    template<typename T>
    T RodToZeptometer(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e21;
    }

    template<typename T>
    T RodToYoctometer(const T lengthInRod) {
        return RodToMeter(lengthInRod) * (T)1e24;
    }




    template<typename T>
    T RodToAngstrom(const T lengthInRod) {
        return RodToPicometer(lengthInRod) * (T)1e-2;
    }

    template<typename T>
    T RodToFermi(const T lengthInRod) {
        return RodToFemtometer(lengthInRod);
    }

    template<typename T>
    T RodToMicron(const T lengthInRod) {
        return RodToMicrometer(lengthInRod);
    }

    template<typename T>
    T RodToCuXUnit(const T lengthInRod) {
        
        return RodToMeter(lengthInRod) / (T)CuXUnit;
    }

    template<typename T>
    T RodToMoXUnit(const T lengthInRod) {
        return RodToMeter(lengthInRod) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T RodToMile(const T lengthInRod) {
        return RodToInch(lengthInRod) / (T)63360.0;
    }

    template<typename T>
    T RodToYard(const T lengthInRod) {
        return RodToInch(lengthInRod) / (T)36.0;
    }

    template<typename T>
    T RodToFoot(const T lengthInRod) {
        return RodToInch(lengthInRod) / (T)12.0;
    }

    template<typename T>
    T RodToInch(const T lengthInRod) {
        return lengthInRod * (T)198.0;
    }

    template<typename T>
    T RodToMil(const T lengthInRod) {
        return RodToInch(lengthInRod) * (T)1000.0;
    }

    template<typename T>
    T RodToThou(const T lengthInRod) {
        return RodToInch(lengthInRod) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T RodToNauticalMile(const T lengthInRod) {
        return RodToMeter(lengthInRod) / (T)1852.0;
    }

    template<typename T>
    T RodToFathom(const T lengthInRod) {
        return RodToInch(lengthInRod) / (T)72.0;
    }

    template<typename T>
    T RodToChain(const T lengthInRod) {
        return RodToInch(lengthInRod) / (T)792.0;
    }

}//namespace EGXPhys
