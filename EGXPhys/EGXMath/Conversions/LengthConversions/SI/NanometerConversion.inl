/// @file EGXMath/Conversions/LengthConversions/SI/NanometerConversion.inl
///
/// @brief Implimentation of Nanometer conversions
/// @author Elliot Grafil 
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T NanometerToAstronomicalUnit(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) / (T)auInMeters;
    }

    template<typename T>
    T NanometerToLightYear(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) / (T)lightYearInMeters;
    }

    template<typename T>
    T NanometerToParsec(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T NanometerToMeter(const T lengthInNanometer) {
        return lengthInNanometer * (T)1e-9;
    }

    template<typename T>
    T NanometerToYottameter(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e-24;
    }


    template<typename T>
    T NanometerToZettameter(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e-21;
    }

    template<typename T>
    T NanometerToExameter(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e-18;
    }

    template<typename T>
    T NanometerToPetameter(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e-15;
    }


    template<typename T>
    T NanometerToTerameter(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e-12;
    }

    template<typename T>
    T NanometerToGigameter(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e-9;
    }

    template<typename T>
    T NanometerToMegameter(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e-6;
    }

    template<typename T>
    T NanometerToKilometer(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e-3;
    }

    template<typename T>
    T NanometerToHectometer(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e-2;
    }

    template<typename T>
    T NanometerToDecameter(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e-1;
    }

    template<typename T>
    T NanometerToDecimeter(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e1;
    }

    template<typename T>
    T NanometerToCentimeter(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e2;
    }

    template<typename T>
    T NanometerToMillimeter(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e3;
    }

    template<typename T>
    T NanometerToMicrometer(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e6;
    }

    template<typename T>
    T NanometerToPicometer(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e12;
    }

    template<typename T>
    T NanometerToFemtometer(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e15;
    }

    template<typename T>
    T NanometerToAttometer(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e18;
    }

    template<typename T>
    T NanometerToZeptometer(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e21;
    }

    template<typename T>
    T NanometerToYoctometer(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) * (T)1e24;
    }




    template<typename T>
    T NanometerToAngstrom(const T lengthInNanometer) {
        return NanometerToPicometer(lengthInNanometer) * (T)1e-2;
    }

    template<typename T>
    T NanometerToFermi(const T lengthInNanometer) {
        return NanometerToFemtometer(lengthInNanometer);
    }

    template<typename T>
    T NanometerToMicron(const T lengthInNanometer) {
        return NanometerToMicrometer(lengthInNanometer);
    }

    template<typename T>
    T NanometerToCuXUnit(const T lengthInNanometer) {
        
        return NanometerToMeter(lengthInNanometer) / (T)CuXUnit;
    }

    template<typename T>
    T NanometerToMoXUnit(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T NanometerToMile(const T lengthInNanometer) {
        return NanometerToInch(lengthInNanometer) / (T)63360.0;
    }

    template<typename T>
    T NanometerToYard(const T lengthInNanometer) {
        return NanometerToInch(lengthInNanometer) / (T)36.0;
    }

    template<typename T>
    T NanometerToFoot(const T lengthInNanometer) {
        return NanometerToInch(lengthInNanometer) / (T)12.0;
    }

    template<typename T>
    T NanometerToInch(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) / (T)0.0254;
    }

    template<typename T>
    T NanometerToMil(const T lengthInNanometer) {
        return NanometerToInch(lengthInNanometer) * (T)1000.0;
    }

    template<typename T>
    T NanometerToThou(const T lengthInNanometer) {
        return NanometerToInch(lengthInNanometer) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T NanometerToNauticalMile(const T lengthInNanometer) {
        return NanometerToMeter(lengthInNanometer) / (T)1852.0;
    }

    template<typename T>
    T NanometerToFathom(const T lengthInNanometer) {
        return NanometerToInch(lengthInNanometer) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T NanometerToRod(const T lengthInNanometer) {
        return NanometerToInch(lengthInNanometer) / (T)198.0;
    }

    template<typename T>
    T NanometerToChain(const T lengthInNanometer) {
        return NanometerToInch(lengthInNanometer) / (T)792.0;
    }

}//namespace EGXPhys
