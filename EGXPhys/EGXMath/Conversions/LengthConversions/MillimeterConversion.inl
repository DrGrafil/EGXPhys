/// @file EGXMath/Conversions/LengthConversions/MillimeterConversion.inl
///
/// @brief Implimentation of Millimeter conversions
/// @author Elliot Grafil (Metex)
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T MillimeterToAstronomicalUnit(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) / (T)auInMeters;
    }

    template<typename T>
    T MillimeterToLightYear(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) / (T)lightYearInMeters;
    }

    template<typename T>
    T MillimeterToParsec(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T MillimeterToMeter(const T lengthInMillimeter) {
        return lengthInMillimeter * (T)1e3;
    }

    template<typename T>
    T MillimeterToYottameter(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e-24;
    }


    template<typename T>
    T MillimeterToZettameter(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e-21;
    }

    template<typename T>
    T MillimeterToExameter(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e-18;
    }

    template<typename T>
    T MillimeterToPetameter(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e-15;
    }


    template<typename T>
    T MillimeterToTerameter(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e-12;
    }

    template<typename T>
    T MillimeterToGigameter(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e-9;
    }

    template<typename T>
    T MillimeterToMegameter(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e-6;
    }

    template<typename T>
    T MillimeterToKilometer(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e-3;
    }

    template<typename T>
    T MillimeterToHectometer(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e-2;
    }

    template<typename T>
    T MillimeterToDecameter(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e-1;
    }

    template<typename T>
    T MillimeterToDecimeter(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e1;
    }

    template<typename T>
    T MillimeterToCentimeter(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e2;
    }

    template<typename T>
    T MillimeterToMillimeter(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e3;
    }

    template<typename T>
    T MillimeterToMicrometer(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e6;
    }

    template<typename T>
    T MillimeterToNanometer(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e9;
    }

    template<typename T>
    T MillimeterToPicometer(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e12;
    }

    template<typename T>
    T MillimeterToFemtometer(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e15;
    }

    template<typename T>
    T MillimeterToAttometer(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e18;
    }

    template<typename T>
    T MillimeterToZeptometer(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e21;
    }

    template<typename T>
    T MillimeterToYoctometer(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) * (T)1e24;
    }




    template<typename T>
    T MillimeterToAngstrom(const T lengthInMillimeter) {
        return MillimeterToPicometer(lengthInMillimeter) * (T)1e-2;
    }

    template<typename T>
    T MillimeterToFermi(const T lengthInMillimeter) {
        return MillimeterTofemtometer(lengthInMillimeter);
    }

    template<typename T>
    T MillimeterToMicron(const T lengthInMillimeter) {
        return MillimeterToMicrometer(lengthInMillimeter);
    }

    template<typename T>
    T MillimeterToCuXUnit(const T lengthInMillimeter) {
        
        return MillimeterToMeter(lengthInMillimeter) / (T)CuXUnit;
    }

    template<typename T>
    T MillimeterToMoXUnit(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T MillimeterToMile(const T lengthInMillimeter) {
        return MillimeterToInch(lengthInMillimeter) / (T)63360.0;
    }

    template<typename T>
    T MillimeterToYard(const T lengthInMillimeter) {
        return MillimeterToInch(lengthInMillimeter) / (T)36.0;
    }

    template<typename T>
    T MillimeterToFoot(const T lengthInMillimeter) {
        return MillimeterToInch(lengthInMillimeter) / (T)12.0;
    }

    template<typename T>
    T MillimeterToInch(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) / (T)0.0254;
    }

    template<typename T>
    T MillimeterToMil(const T lengthInMillimeter) {
        return MillimeterToInch(lengthInMillimeter) * (T)1000.0;
    }

    template<typename T>
    T MillimeterToThou(const T lengthInMillimeter) {
        return MillimeterToInch(lengthInMillimeter) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T MillimeterToNauticalMile(const T lengthInMillimeter) {
        return MillimeterToMeter(lengthInMillimeter) / (T)1852.0;
    }

    template<typename T>
    T MillimeterToFathom(const T lengthInMillimeter) {
        return MillimeterToInch(lengthInMillimeter) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T MillimeterToRod(const T lengthInMillimeter) {
        return MillimeterToInch(lengthInMillimeter) / (T)198.0;
    }

    template<typename T>
    T MillimeterToChain(const T lengthInMillimeter) {
        return MillimeterToInch(lengthInMillimeter) / (T)792.0;
    }

}//namespace EGXPhys
