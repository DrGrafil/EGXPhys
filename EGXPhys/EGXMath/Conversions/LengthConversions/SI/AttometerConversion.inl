/// @file EGXMath/Conversions/LengthConversions/SI/AttometerConversion.inl
///
/// @brief Implimentation of Attometer conversions
/// @author Elliot Grafil (Metex)
/// @date 6/1/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T AttometerToAstronomicalUnit(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) / (T)auInMeters;
    }

    template<typename T>
    T AttometerToLightYear(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) / (T)lightYearInMeters;
    }

    template<typename T>
    T AttometerToParsec(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T AttometerToMeter(const T lengthInAttometer) {
        return lengthInAttometer *(T)1e-18;
    }

    template<typename T>
    T AttometerToYottameter(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e-24;
    }


    template<typename T>
    T AttometerToZettameter(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e-21;
    }

    template<typename T>
    T AttometerToExameter(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e-18;
    }

    template<typename T>
    T AttometerToPetameter(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e-15;
    }


    template<typename T>
    T AttometerToTerameter(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e-12;
    }

    template<typename T>
    T AttometerToGigameter(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e-9;
    }

    template<typename T>
    T AttometerToMegameter(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e-6;
    }

    template<typename T>
    T AttometerToKilometer(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e-3;
    }

    template<typename T>
    T AttometerToHectometer(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e-2;
    }

    template<typename T>
    T AttometerToDecameter(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e-1;
    }

    template<typename T>
    T AttometerToDecimeter(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e1;
    }

    template<typename T>
    T AttometerToCentimeter(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e2;
    }

    template<typename T>
    T AttometerToMillimeter(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e3;
    }

    template<typename T>
    T AttometerToMicrometer(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e6;
    }

    template<typename T>
    T AttometerToNanometer(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e9;
    }

    template<typename T>
    T AttometerToPicometer(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e12;
    }

    template<typename T>
    T AttometerToFemtometer(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e15;
    }

    template<typename T>
    T AttometerToZeptometer(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e21;
    }

    template<typename T>
    T AttometerToYoctometer(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) * (T)1e24;
    }




    template<typename T>
    T AttometerToAngstrom(const T lengthInAttometer) {
        return AttometerToPicometer(lengthInAttometer) * (T)1e-2;
    }

    template<typename T>
    T AttometerToFermi(const T lengthInAttometer) {
        return AttometerToFemtometer(lengthInAttometer);
    }

    template<typename T>
    T AttometerToMicron(const T lengthInAttometer) {
        return AttometerToMicrometer(lengthInAttometer);
    }

    template<typename T>
    T AttometerToCuXUnit(const T lengthInAttometer) {
        
        return AttometerToMeter(lengthInAttometer) / (T)CuXUnit;
    }

    template<typename T>
    T AttometerToMoXUnit(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T AttometerToMile(const T lengthInAttometer) {
        return AttometerToInch(lengthInAttometer) / (T)63360.0;
    }

    template<typename T>
    T AttometerToYard(const T lengthInAttometer) {
        return AttometerToInch(lengthInAttometer) / (T)36.0;
    }

    template<typename T>
    T AttometerToFoot(const T lengthInAttometer) {
        return AttometerToInch(lengthInAttometer) / (T)12.0;
    }

    template<typename T>
    T AttometerToInch(const T lengthInAttometer) {
        return lengthInAttometer / (T)0.0254 * (T)1e-18;
    }

    template<typename T>
    T AttometerToMil(const T lengthInAttometer) {
        return AttometerToInch(lengthInAttometer) * (T)1000.0;
    }

    template<typename T>
    T AttometerToThou(const T lengthInAttometer) {
        return AttometerToInch(lengthInAttometer) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T AttometerToNauticalMile(const T lengthInAttometer) {
        return AttometerToMeter(lengthInAttometer) / (T)1852.0;
    }

    template<typename T>
    T AttometerToFathom(const T lengthInAttometer) {
        return AttometerToInch(lengthInAttometer) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T AttometerToRod(const T lengthInAttometer) {
        return AttometerToInch(lengthInAttometer) / (T)198.0;
    }

    template<typename T>
    T AttometerToChain(const T lengthInAttometer) {
        return AttometerToInch(lengthInAttometer) / (T)792.0;
    }

}//namespace EGXPhys
