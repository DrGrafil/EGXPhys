/// @file EGXMath/Conversions/LengthConversions/SI/DecimeterConversion.inl
///
/// @brief Implimentation of Decimeter conversions
/// @author Elliot Grafil 
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T DecimeterToAstronomicalUnit(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) / (T)auInMeters;
    }

    template<typename T>
    T DecimeterToLightYear(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) / (T)lightYearInMeters;
    }

    template<typename T>
    T DecimeterToParsec(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T DecimeterToMeter(const T lengthInDecimeter) {
        return lengthInDecimeter * (T)1e-1;
    }

    template<typename T>
    T DecimeterToYottameter(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e-24;
    }


    template<typename T>
    T DecimeterToZettameter(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e-21;
    }

    template<typename T>
    T DecimeterToExameter(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e-18;
    }

    template<typename T>
    T DecimeterToPetameter(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e-15;
    }


    template<typename T>
    T DecimeterToTerameter(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e-12;
    }

    template<typename T>
    T DecimeterToGigameter(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e-9;
    }

    template<typename T>
    T DecimeterToMegameter(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e-6;
    }

    template<typename T>
    T DecimeterToKilometer(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e-3;
    }

    template<typename T>
    T DecimeterToHectometer(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e-2;
    }

    template<typename T>
    T DecimeterToDecameter(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e-1;
    }

    template<typename T>
    T DecimeterToCentimeter(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e2;
    }

    template<typename T>
    T DecimeterToMillimeter(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e3;
    }

    template<typename T>
    T DecimeterToMicrometer(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e6;
    }

    template<typename T>
    T DecimeterToNanometer(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e9;
    }

    template<typename T>
    T DecimeterToPicometer(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e12;
    }

    template<typename T>
    T DecimeterToFemtometer(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e15;
    }

    template<typename T>
    T DecimeterToAttometer(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e18;
    }

    template<typename T>
    T DecimeterToZeptometer(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e21;
    }

    template<typename T>
    T DecimeterToYoctometer(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) * (T)1e24;
    }




    template<typename T>
    T DecimeterToAngstrom(const T lengthInDecimeter) {
        return DecimeterToPicometer(lengthInDecimeter) * (T)1e-2;
    }

    template<typename T>
    T DecimeterToFermi(const T lengthInDecimeter) {
        return DecimeterToFemtometer(lengthInDecimeter);
    }

    template<typename T>
    T DecimeterToMicron(const T lengthInDecimeter) {
        return DecimeterToMicrometer(lengthInDecimeter);
    }

    template<typename T>
    T DecimeterToCuXUnit(const T lengthInDecimeter) {
        
        return DecimeterToMeter(lengthInDecimeter) / (T)CuXUnit;
    }

    template<typename T>
    T DecimeterToMoXUnit(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T DecimeterToMile(const T lengthInDecimeter) {
        return DecimeterToInch(lengthInDecimeter) / (T)63360.0;
    }

    template<typename T>
    T DecimeterToYard(const T lengthInDecimeter) {
        return DecimeterToInch(lengthInDecimeter) / (T)36.0;
    }

    template<typename T>
    T DecimeterToFoot(const T lengthInDecimeter) {
        return DecimeterToInch(lengthInDecimeter) / (T)12.0;
    }

    template<typename T>
    T DecimeterToInch(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) / (T)0.0254;
    }

    template<typename T>
    T DecimeterToMil(const T lengthInDecimeter) {
        return DecimeterToInch(lengthInDecimeter) * (T)1000.0;
    }

    template<typename T>
    T DecimeterToThou(const T lengthInDecimeter) {
        return DecimeterToInch(lengthInDecimeter) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T DecimeterToNauticalMile(const T lengthInDecimeter) {
        return DecimeterToMeter(lengthInDecimeter) / (T)1852.0;
    }

    template<typename T>
    T DecimeterToFathom(const T lengthInDecimeter) {
        return DecimeterToInch(lengthInDecimeter) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T DecimeterToRod(const T lengthInDecimeter) {
        return DecimeterToInch(lengthInDecimeter) / (T)198.0;
    }

    template<typename T>
    T DecimeterToChain(const T lengthInDecimeter) {
        return DecimeterToInch(lengthInDecimeter) / (T)792.0;
    }

}//namespace EGXPhys
