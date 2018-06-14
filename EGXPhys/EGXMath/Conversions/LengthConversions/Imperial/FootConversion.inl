/// @file EGXMath/Conversions/LengthConversions/Imperial/FootConversion.inl
///
/// @brief Implimentation of Foot conversions
/// @author Elliot Grafil (Metex)
/// @date 6/11/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T FootToAstronomicalUnit(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) / (T)auInMeters;
    }

    template<typename T>
    T FootToLightYear(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) / (T)lightYearInMeters;
    }

    template<typename T>
    T FootToParsec(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T FootToMeter(const T lengthInFoot) {
        return FootToInch(lengthInFoot) * (T)0.0254;
    }

    template<typename T>
    T FootToYottameter(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e-24;
    }


    template<typename T>
    T FootToZettameter(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e-21;
    }

    template<typename T>
    T FootToExameter(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e-18;
    }

    template<typename T>
    T FootToPetameter(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e-15;
    }


    template<typename T>
    T FootToTerameter(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e-12;
    }

    template<typename T>
    T FootToGigameter(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e-9;
    }

    template<typename T>
    T FootToMegameter(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e-6;
    }

    template<typename T>
    T FootToKilometer(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e-3;
    }

    template<typename T>
    T FootToHectometer(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e-2;
    }

    template<typename T>
    T FootToDecameter(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e-1;
    }

    template<typename T>
    T FootToDecimeter(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e1;
    }

    template<typename T>
    T FootToCentimeter(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e2;
    }

    template<typename T>
    T FootToMillimeter(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e3;
    }

    template<typename T>
    T FootToMicrometer(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e6;
    }

    template<typename T>
    T FootToNanometer(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e9;
    }

    template<typename T>
    T FootToPicometer(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e12;
    }

    template<typename T>
    T FootToFemtometer(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e15;
    }

    template<typename T>
    T FootToAttometer(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e18;
    }

    template<typename T>
    T FootToZeptometer(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e21;
    }

    template<typename T>
    T FootToYoctometer(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) * (T)1e24;
    }


    template<typename T>
    T FootToAngstrom(const T lengthInFoot) {
        return FootToPicometer(lengthInFoot) * (T)1e-2;
    }

    template<typename T>
    T FootToFermi(const T lengthInFoot) {
        return FootToFemtometer(lengthInFoot);
    }

    template<typename T>
    T FootToMicron(const T lengthInFoot) {
        return FootToMicrometer(lengthInFoot);
    }

    template<typename T>
    T FootToCuXUnit(const T lengthInFoot) {
        
        return FootToMeter(lengthInFoot) / (T)CuXUnit;
    }

    template<typename T>
    T FootToMoXUnit(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T FootToMile(const T lengthInFoot) {
        return FootToInch(lengthInFoot) / (T)63360.0;
    }

    template<typename T>
    T FootToYard(const T lengthInFoot) {
        return FootToInch(lengthInFoot) / (T)36.0;
    }

    template<typename T>
    T FootToInch(const T lengthInFoot) {
        return lengthInFoot * (T)12.0;
    }

    template<typename T>
    T FootToMil(const T lengthInFoot) {
        return FootToInch(lengthInFoot) * (T)1000.0;
    }

    template<typename T>
    T FootToThou(const T lengthInFoot) {
        return FootToInch(lengthInFoot) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T FootToNauticalMile(const T lengthInFoot) {
        return FootToMeter(lengthInFoot) / (T)1852.0;
    }

    template<typename T>
    T FootToFathom(const T lengthInFoot) {
        return FootToInch(lengthInFoot) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T FootToRod(const T lengthInFoot) {
        return FootToInch(lengthInFoot) / (T)198.0;
    }

    template<typename T>
    T FootToChain(const T lengthInFoot) {
        return FootToInch(lengthInFoot) / (T)792.0;
    }

}//namespace EGXPhys
