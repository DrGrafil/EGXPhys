/// @file EGXMath/Conversions/DistanceConversions/CentimeterConversion.inl
///
/// @brief Implimentation of Centimeter conversions
/// @author Elliot Grafil (Metex)
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T CentimeterToAstronomicalUnit(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) / (T)auInMeters;
    }

    template<typename T>
    T CentimeterToLightYear(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) / (T)lightYearInMeters;
    }

    template<typename T>
    T CentimeterToParsec(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T CentimeterToMeter(const T lengthInCentimeter) {
        return lengthInCentimeter * (T)1e-2;
    }

    template<typename T>
    T CentimeterToYottameter(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e-24;
    }


    template<typename T>
    T CentimeterToZettameter(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e-21;
    }

    template<typename T>
    T CentimeterToExameter(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e-18;
    }

    template<typename T>
    T CentimeterToPetameter(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e-15;
    }


    template<typename T>
    T CentimeterToTerameter(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e-12;
    }

    template<typename T>
    T CentimeterToGigameter(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e-9;
    }

    template<typename T>
    T CentimeterToMegameter(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e-6;
    }

    template<typename T>
    T CentimeterToKilometer(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e-3;
    }

    template<typename T>
    T CentimeterToHectometer(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e-2;
    }

    template<typename T>
    T CentimeterToDecameter(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e-1;
    }

    template<typename T>
    T CentimeterToDecimeter(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e1;
    }

    template<typename T>
    T CentimeterToMillimeter(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e3;
    }

    template<typename T>
    T CentimeterToMicrometer(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e6;
    }

    template<typename T>
    T CentimeterToNanometer(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e9;
    }

    template<typename T>
    T CentimeterToPicometer(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e12;
    }

    template<typename T>
    T CentimeterToFemtometer(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e15;
    }

    template<typename T>
    T CentimeterToAttometer(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e18;
    }

    template<typename T>
    T CentimeterToZeptometer(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e21;
    }

    template<typename T>
    T CentimeterToYoctometer(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) * (T)1e24;
    }




    template<typename T>
    T CentimeterToAngstrom(const T lengthInCentimeter) {
        return CentimeterToPicometer(lengthInCentimeter) * (T)1e-2;
    }

    template<typename T>
    T CentimeterToFermi(const T lengthInCentimeter) {
        return CentimeterTofemtometer(lengthInCentimeter);
    }

    template<typename T>
    T CentimeterToMicron(const T lengthInCentimeter) {
        return CentimeterToMicrometer(lengthInCentimeter);
    }

    template<typename T>
    T CentimeterToCuXUnit(const T lengthInCentimeter) {
        
        return CentimeterToMeter(lengthInCentimeter) / (T)CuXUnit;
    }

    template<typename T>
    T CentimeterToMoXUnit(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T CentimeterToMile(const T lengthInCentimeter) {
        return CentimeterToInch(lengthInCentimeter) / (T)63360.0;
    }

    template<typename T>
    T CentimeterToYard(const T lengthInCentimeter) {
        return CentimeterToInch(lengthInCentimeter) / (T)36.0;
    }

    template<typename T>
    T CentimeterToFoot(const T lengthInCentimeter) {
        return CentimeterToInch(lengthInCentimeter) / (T)12.0;
    }

    template<typename T>
    T CentimeterToInch(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) / (T)0.0254;
    }

    template<typename T>
    T CentimeterToMil(const T lengthInCentimeter) {
        return CentimeterToInch(lengthInCentimeter) * (T)1000.0;
    }

    template<typename T>
    T CentimeterToThou(const T lengthInCentimeter) {
        return CentimeterToInch(lengthInCentimeter) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T CentimeterToNauticalMile(const T lengthInCentimeter) {
        return CentimeterToMeter(lengthInCentimeter) / (T)1852.0;
    }

    template<typename T>
    T CentimeterToFathom(const T lengthInCentimeter) {
        return CentimeterToInch(lengthInCentimeter) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T CentimeterToRod(const T lengthInCentimeter) {
        return CentimeterToInch(lengthInCentimeter) / (T)198.0;
    }

    template<typename T>
    T CentimeterToChain(const T lengthInCentimeter) {
        return CentimeterToInch(lengthInCentimeter) / (T)792.0;
    }

}//namespace EGXPhys
