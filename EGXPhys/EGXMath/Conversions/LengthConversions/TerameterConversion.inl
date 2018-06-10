/// @file EGXMath/Conversions/DistanceConversions/TerameterConversion.inl
///
/// @brief Implimentation of Terameter conversions
/// @author Elliot Grafil (Metex)
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T TerameterToAstronomicalUnit(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) / (T)auInMeters;
    }

    template<typename T>
    T TerameterToLightYear(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) / (T)lightYearInMeters;
    }

    template<typename T>
    T TerameterToParsec(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T TerameterToMeter(const T lengthInTerameter) {
        return lengthInTerameter * (T)1e-12;
    }

    template<typename T>
    T TerameterToYottameter(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e-24;
    }


    template<typename T>
    T TerameterToZettameter(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e-21;
    }

    template<typename T>
    T TerameterToExameter(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e-18;
    }

    template<typename T>
    T TerameterToPetameter(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e-15;
    }

    template<typename T>
    T TerameterToGigameter(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e-9;
    }

    template<typename T>
    T TerameterToMegameter(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e-6;
    }

    template<typename T>
    T TerameterToKilometer(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e-3;
    }

    template<typename T>
    T TerameterToHectometer(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e-2;
    }

    template<typename T>
    T TerameterToDecameter(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e-1;
    }

    template<typename T>
    T TerameterToDecimeter(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e1;
    }

    template<typename T>
    T TerameterToCentimeter(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e2;
    }

    template<typename T>
    T TerameterToMillimeter(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e3;
    }

    template<typename T>
    T TerameterToMicrometer(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e6;
    }

    template<typename T>
    T TerameterToNanometer(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e9;
    }

    template<typename T>
    T TerameterToPicometer(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e12;
    }

    template<typename T>
    T TerameterToFemtometer(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e15;
    }

    template<typename T>
    T TerameterToAttometer(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e18;
    }

    template<typename T>
    T TerameterToZeptometer(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e21;
    }

    template<typename T>
    T TerameterToYoctometer(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) * (T)1e24;
    }




    template<typename T>
    T TerameterToAngstrom(const T lengthInTerameter) {
        return TerameterToPicometer(lengthInTerameter) * (T)1e-2;
    }

    template<typename T>
    T TerameterToFermi(const T lengthInTerameter) {
        return TerameterTofemtometer(lengthInTerameter);
    }

    template<typename T>
    T TerameterToMicron(const T lengthInTerameter) {
        return TerameterToMicrometer(lengthInTerameter);
    }

    template<typename T>
    T TerameterToCuXUnit(const T lengthInTerameter) {
        
        return TerameterToMeter(lengthInTerameter) / (T)CuXUnit;
    }

    template<typename T>
    T TerameterToMoXUnit(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T TerameterToMile(const T lengthInTerameter) {
        return TerameterToInch(lengthInTerameter) / (T)63360.0;
    }

    template<typename T>
    T TerameterToYard(const T lengthInTerameter) {
        return TerameterToInch(lengthInTerameter) / (T)36.0;
    }

    template<typename T>
    T TerameterToFoot(const T lengthInTerameter) {
        return TerameterToInch(lengthInTerameter) / (T)12.0;
    }

    template<typename T>
    T TerameterToInch(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) / (T)0.0254;
    }

    template<typename T>
    T TerameterToMil(const T lengthInTerameter) {
        return TerameterToInch(lengthInTerameter) * (T)1000.0;
    }

    template<typename T>
    T TerameterToThou(const T lengthInTerameter) {
        return TerameterToInch(lengthInTerameter) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T TerameterToNauticalMile(const T lengthInTerameter) {
        return TerameterToMeter(lengthInTerameter) / (T)1852.0;
    }

    template<typename T>
    T TerameterToFathom(const T lengthInTerameter) {
        return TerameterToInch(lengthInTerameter) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T TerameterToRod(const T lengthInTerameter) {
        return TerameterToInch(lengthInTerameter) / (T)198.0;
    }

    template<typename T>
    T TerameterToChain(const T lengthInTerameter) {
        return TerameterToInch(lengthInTerameter) / (T)792.0;
    }

}//namespace EGXPhys
