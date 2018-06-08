/// @file EGXMath/Conversions/DistanceConversions/ExameterConversion.inl
///
/// @brief Implimentation of Exameter conversions
/// @author Elliot Grafil (Metex)
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T ExameterToAstronomicalUnit(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) / (T)auInMeters;
    }

    template<typename T>
    T ExameterToLightYear(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) / (T)lightYearInMeters;
    }

    template<typename T>
    T ExameterToParsec(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T ExameterToMeter(const T lengthInExameter) {
        return lengthInExameter * (T)1e18;
    }

    template<typename T>
    T ExameterToYottameter(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e-24;
    }


    template<typename T>
    T ExameterToZettameter(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e-21;
    }

    template<typename T>
    T ExameterToPetameter(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e-15;
    }


    template<typename T>
    T ExameterToTerameter(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e-12;
    }

    template<typename T>
    T ExameterToGigameter(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e-9;
    }

    template<typename T>
    T ExameterToMegameter(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e-6;
    }

    template<typename T>
    T ExameterToKilometer(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e-3;
    }

    template<typename T>
    T ExameterToHectometer(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e-2;
    }

    template<typename T>
    T ExameterToDecameter(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e-1;
    }

    template<typename T>
    T ExameterToDecimeter(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e1;
    }

    template<typename T>
    T ExameterToCentimeter(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e2;
    }

    template<typename T>
    T ExameterToMillimeter(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e3;
    }

    template<typename T>
    T ExameterToMicrometer(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e6;
    }

    template<typename T>
    T ExameterToNanometer(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e9;
    }

    template<typename T>
    T ExameterToPicometer(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e12;
    }

    template<typename T>
    T ExameterToFemtometer(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e15;
    }

    template<typename T>
    T ExameterToAttometer(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e18;
    }

    template<typename T>
    T ExameterToZeptometer(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e21;
    }

    template<typename T>
    T ExameterToYoctometer(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) * (T)1e24;
    }




    template<typename T>
    T ExameterToAngstrom(const T lengthInExameter) {
        return ExameterToPicometer(lengthInExameter) * (T)1e-2;
    }

    template<typename T>
    T ExameterToFermi(const T lengthInExameter) {
        return ExameterTofemtometer(lengthInExameter);
    }

    template<typename T>
    T ExameterToMicron(const T lengthInExameter) {
        return ExameterToMicrometer(lengthInExameter);
    }

    template<typename T>
    T ExameterToCuXUnit(const T lengthInExameter) {
        
        return ExameterToMeter(lengthInExameter) / (T)CuXUnit;
    }

    template<typename T>
    T ExameterToMoXUnit(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T ExameterToMile(const T lengthInExameter) {
        return ExameterToInch(lengthInExameter) / (T)63360.0;
    }

    template<typename T>
    T ExameterToYard(const T lengthInExameter) {
        return ExameterToInch(lengthInExameter) / (T)36.0;
    }

    template<typename T>
    T ExameterToFoot(const T lengthInExameter) {
        return ExameterToInch(lengthInExameter) / (T)12.0;
    }

    template<typename T>
    T ExameterToInch(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) / (T)0.0254;
    }

    template<typename T>
    T ExameterToMil(const T lengthInExameter) {
        return ExameterToInch(lengthInExameter) * (T)1000.0;
    }

    template<typename T>
    T ExameterToThou(const T lengthInExameter) {
        return ExameterToInch(lengthInExameter) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T ExameterToNauticalMile(const T lengthInExameter) {
        return ExameterToMeter(lengthInExameter) / (T)1852.0;
    }

    template<typename T>
    T ExameterToFathom(const T lengthInExameter) {
        return ExameterToInch(lengthInExameter) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T ExameterToRod(const T lengthInExameter) {
        return ExameterToInch(lengthInExameter) / (T)198.0;
    }

    template<typename T>
    T ExameterToChain(const T lengthInExameter) {
        return ExameterToInch(lengthInExameter) / (T)792.0;
    }

}//namespace EGXPhys
