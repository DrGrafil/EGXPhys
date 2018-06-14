/// @file EGXMath/Conversions/LengthConversions/SI/PetameterConversion.inl
///
/// @brief Implimentation of Petameter conversions
/// @author Elliot Grafil (Metex)
/// @date 6/8/18


namespace EGXMath {

    //Astronomical

    template<typename T>
    T PetameterToAstronomicalUnit(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) / (T)auInMeters;
    }

    template<typename T>
    T PetameterToLightYear(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) / (T)lightYearInMeters;
    }

    template<typename T>
    T PetameterToParsec(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) / (T)parsecInMeters;
    }


    //SI

    template<typename T>
    T PetameterToMeter(const T lengthInPetameter) {
        return lengthInPetameter * (T)1e15;
    }

    template<typename T>
    T PetameterToYottameter(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e-24;
    }


    template<typename T>
    T PetameterToZettameter(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e-21;
    }

    template<typename T>
    T PetameterToExameter(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e-18;
    }

    template<typename T>
    T PetameterToTerameter(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e-12;
    }

    template<typename T>
    T PetameterToGigameter(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e-9;
    }

    template<typename T>
    T PetameterToMegameter(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e-6;
    }

    template<typename T>
    T PetameterToKilometer(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e-3;
    }

    template<typename T>
    T PetameterToHectometer(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e-2;
    }

    template<typename T>
    T PetameterToDecameter(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e-1;
    }

    template<typename T>
    T PetameterToDecimeter(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e1;
    }

    template<typename T>
    T PetameterToCentimeter(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e2;
    }

    template<typename T>
    T PetameterToMillimeter(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e3;
    }

    template<typename T>
    T PetameterToMicrometer(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e6;
    }

    template<typename T>
    T PetameterToNanometer(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e9;
    }

    template<typename T>
    T PetameterToPicometer(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e12;
    }

    template<typename T>
    T PetameterToFemtometer(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e15;
    }

    template<typename T>
    T PetameterToAttometer(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e18;
    }

    template<typename T>
    T PetameterToZeptometer(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e21;
    }

    template<typename T>
    T PetameterToYoctometer(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) * (T)1e24;
    }




    template<typename T>
    T PetameterToAngstrom(const T lengthInPetameter) {
        return PetameterToPicometer(lengthInPetameter) * (T)1e-2;
    }

    template<typename T>
    T PetameterToFermi(const T lengthInPetameter) {
        return PetameterToFemtometer(lengthInPetameter);
    }

    template<typename T>
    T PetameterToMicron(const T lengthInPetameter) {
        return PetameterToMicrometer(lengthInPetameter);
    }

    template<typename T>
    T PetameterToCuXUnit(const T lengthInPetameter) {
        
        return PetameterToMeter(lengthInPetameter) / (T)CuXUnit;
    }

    template<typename T>
    T PetameterToMoXUnit(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) / (T)MoXUnit;
    }


    //Imperial

    template<typename T>
    T PetameterToMile(const T lengthInPetameter) {
        return PetameterToInch(lengthInPetameter) / (T)63360.0;
    }

    template<typename T>
    T PetameterToYard(const T lengthInPetameter) {
        return PetameterToInch(lengthInPetameter) / (T)36.0;
    }

    template<typename T>
    T PetameterToFoot(const T lengthInPetameter) {
        return PetameterToInch(lengthInPetameter) / (T)12.0;
    }

    template<typename T>
    T PetameterToInch(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) / (T)0.0254;
    }

    template<typename T>
    T PetameterToMil(const T lengthInPetameter) {
        return PetameterToInch(lengthInPetameter) * (T)1000.0;
    }

    template<typename T>
    T PetameterToThou(const T lengthInPetameter) {
        return PetameterToInch(lengthInPetameter) * (T)1000.0;
    }

    //Nautical

    template<typename T>
    T PetameterToNauticalMile(const T lengthInPetameter) {
        return PetameterToMeter(lengthInPetameter) / (T)1852.0;
    }

    template<typename T>
    T PetameterToFathom(const T lengthInPetameter) {
        return PetameterToInch(lengthInPetameter) / (T)72.0;
    }

    //Survyors
    template<typename T>
    T PetameterToRod(const T lengthInPetameter) {
        return PetameterToInch(lengthInPetameter) / (T)198.0;
    }

    template<typename T>
    T PetameterToChain(const T lengthInPetameter) {
        return PetameterToInch(lengthInPetameter) / (T)792.0;
    }

}//namespace EGXPhys
