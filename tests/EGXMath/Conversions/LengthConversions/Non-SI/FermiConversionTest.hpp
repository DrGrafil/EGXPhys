#pragma once

TEST_CASE("Fermi Length Conversion"){

	//Zero
        //AU
    CHECK(FermiToAstronomicalUnit(0.0) == 0.0);
    CHECK(FermiToLightYear(0.0) == 0.0);
    CHECK(FermiToParsec(0.0) == 0.0);

        //SI
    CHECK(FermiToMeter(0.0) == 0.0);
    CHECK(FermiToYottameter(0.0) == 0.0);
    CHECK(FermiToZettameter(0.0) == 0.0);
    CHECK(FermiToExameter(0.0) == 0.0);
    CHECK(FermiToPetameter(0.0) == 0.0);
    CHECK(FermiToTerameter(0.0) == 0.0);
    CHECK(FermiToGigameter(0.0) == 0.0);
    CHECK(FermiToMegameter(0.0) == 0.0);
    CHECK(FermiToKilometer(0.0) == 0.0);
    CHECK(FermiToHectometer(0.0) == 0.0);
    CHECK(FermiToDecameter(0.0) == 0.0);
    CHECK(FermiToDecimeter(0.0) == 0.0);
    CHECK(FermiToCentimeter(0.0) == 0.0);
    CHECK(FermiToMillimeter(0.0) == 0.0);
    CHECK(FermiToMicrometer(0.0) == 0.0);
    CHECK(FermiToNanometer(0.0) == 0.0);
    CHECK(FermiToPicometer(0.0) == 0.0);
    CHECK(FermiToFemtometer(0.0) == 0.0);
    CHECK(FermiToAttometer(0.0) == 0.0);
    CHECK(FermiToZeptometer(0.0) == 0.0);
    CHECK(FermiToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(FermiToAngstrom(0.0) == 0.0);
    CHECK(FermiToMicron(0.0) == 0.0);
    CHECK(FermiToCuXUnit(0.0) == 0.0);
    CHECK(FermiToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(FermiToMile(0.0) == 0.0);
    CHECK(FermiToYard(0.0) == 0.0);
    CHECK(FermiToFoot(0.0) == 0.0);
    CHECK(FermiToInch(0.0) == 0.0);
    CHECK(FermiToMil(0.0) == 0.0);
    CHECK(FermiToThou(0.0) == 0.0);

        //Nautical
    CHECK(FermiToNauticalMile(0.0) == 0.0);
    CHECK(FermiToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(FermiToRod(0.0) == 0.0);
    CHECK(FermiToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToFermi(FermiToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToFermi(FermiToLightYear(0.0) )== 0.0);
    CHECK(ParsecToFermi(FermiToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToFermi(FermiToMeter(0.0) )== 0.0);
    CHECK(YottameterToFermi(FermiToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToFermi(FermiToZettameter(0.0) )== 0.0);
    CHECK(ExameterToFermi(FermiToExameter(0.0) )== 0.0);
    CHECK(PetameterToFermi(FermiToPetameter(0.0) )== 0.0);
    CHECK(TerameterToFermi(FermiToTerameter(0.0) )== 0.0);
    CHECK(GigameterToFermi(FermiToGigameter(0.0) )== 0.0);
    CHECK(MegameterToFermi(FermiToMegameter(0.0) )== 0.0);
    CHECK(KilometerToFermi(FermiToKilometer(0.0) )== 0.0);
    CHECK(HectometerToFermi(FermiToHectometer(0.0) )== 0.0);
    CHECK(DecameterToFermi(FermiToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToFermi(FermiToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToFermi(FermiToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToFermi(FermiToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToFermi(FermiToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToFermi(FermiToNanometer(0.0) )== 0.0);
    CHECK(PicometerToFermi(FermiToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToFermi(FermiToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToFermi(FermiToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToFermi(FermiToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToFermi(FermiToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToFermi(FermiToAngstrom(0.0) )== 0.0);
    CHECK(MicronToFermi(FermiToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToFermi(FermiToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToFermi(FermiToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToFermi(FermiToMile(0.0) )== 0.0);
    CHECK(YardToFermi(FermiToYard(0.0) )== 0.0);
    CHECK(FootToFermi(FermiToFoot(0.0) )== 0.0);
    CHECK(InchToFermi(FermiToInch(0.0) )== 0.0);
    CHECK(MilToFermi(FermiToMil(0.0) )== 0.0);
    CHECK(ThouToFermi(FermiToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToFermi(FermiToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToFermi(FermiToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToFermi(FermiToRod(0.0) )== 0.0);
    CHECK(ChainToFermi(FermiToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToFermi(FermiToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToFermi(FermiToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToFermi(FermiToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToFermi(FermiToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToFermi(FermiToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToFermi(FermiToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToFermi(FermiToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToFermi(FermiToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToFermi(FermiToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToFermi(FermiToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToFermi(FermiToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToFermi(FermiToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToFermi(FermiToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToFermi(FermiToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToFermi(FermiToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToFermi(FermiToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToFermi(FermiToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToFermi(FermiToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToFermi(FermiToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToFermi(FermiToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToFermi(FermiToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToFermi(FermiToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToFermi(FermiToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToFermi(FermiToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToFermi(FermiToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToFermi(FermiToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToFermi(FermiToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToFermi(FermiToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToFermi(FermiToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToFermi(FermiToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToFermi(FermiToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToFermi(FermiToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToFermi(FermiToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToFermi(FermiToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToFermi(FermiToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToFermi(FermiToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToFermi(FermiToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToFermi(FermiToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
