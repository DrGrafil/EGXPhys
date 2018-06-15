#pragma once

TEST_CASE("Yard Length Conversion"){

	//Zero
        //AU
    CHECK(YardToAstronomicalUnit(0.0) == 0.0);
    CHECK(YardToLightYear(0.0) == 0.0);
    CHECK(YardToParsec(0.0) == 0.0);

        //SI
    CHECK(YardToMeter(0.0) == 0.0);
    CHECK(YardToYottameter(0.0) == 0.0);
    CHECK(YardToZettameter(0.0) == 0.0);
    CHECK(YardToExameter(0.0) == 0.0);
    CHECK(YardToPetameter(0.0) == 0.0);
    CHECK(YardToTerameter(0.0) == 0.0);
    CHECK(YardToGigameter(0.0) == 0.0);
    CHECK(YardToMegameter(0.0) == 0.0);
    CHECK(YardToKilometer(0.0) == 0.0);
    CHECK(YardToHectometer(0.0) == 0.0);
    CHECK(YardToDecameter(0.0) == 0.0);
    CHECK(YardToDecimeter(0.0) == 0.0);
    CHECK(YardToCentimeter(0.0) == 0.0);
    CHECK(YardToMillimeter(0.0) == 0.0);
    CHECK(YardToMicrometer(0.0) == 0.0);
    CHECK(YardToNanometer(0.0) == 0.0);
    CHECK(YardToPicometer(0.0) == 0.0);
    CHECK(YardToFemtometer(0.0) == 0.0);
    CHECK(YardToAttometer(0.0) == 0.0);
    CHECK(YardToZeptometer(0.0) == 0.0);
    CHECK(YardToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(YardToAngstrom(0.0) == 0.0);
    CHECK(YardToFermi(0.0) == 0.0);
    CHECK(YardToMicron(0.0) == 0.0);
    CHECK(YardToCuXUnit(0.0) == 0.0);
    CHECK(YardToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(YardToMile(0.0) == 0.0);
    CHECK(YardToFoot(0.0) == 0.0);
    CHECK(YardToInch(0.0) == 0.0);
    CHECK(YardToMil(0.0) == 0.0);
    CHECK(YardToThou(0.0) == 0.0);

        //Nautical
    CHECK(YardToNauticalMile(0.0) == 0.0);
    CHECK(YardToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(YardToRod(0.0) == 0.0);
    CHECK(YardToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToYard(YardToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToYard(YardToLightYear(0.0) )== 0.0);
    CHECK(ParsecToYard(YardToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToYard(YardToMeter(0.0) )== 0.0);
    CHECK(YottameterToYard(YardToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToYard(YardToZettameter(0.0) )== 0.0);
    CHECK(ExameterToYard(YardToExameter(0.0) )== 0.0);
    CHECK(PetameterToYard(YardToPetameter(0.0) )== 0.0);
    CHECK(TerameterToYard(YardToTerameter(0.0) )== 0.0);
    CHECK(GigameterToYard(YardToGigameter(0.0) )== 0.0);
    CHECK(MegameterToYard(YardToMegameter(0.0) )== 0.0);
    CHECK(KilometerToYard(YardToKilometer(0.0) )== 0.0);
    CHECK(HectometerToYard(YardToHectometer(0.0) )== 0.0);
    CHECK(DecameterToYard(YardToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToYard(YardToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToYard(YardToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToYard(YardToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToYard(YardToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToYard(YardToNanometer(0.0) )== 0.0);
    CHECK(PicometerToYard(YardToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToYard(YardToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToYard(YardToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToYard(YardToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToYard(YardToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToYard(YardToAngstrom(0.0) )== 0.0);
    CHECK(FermiToYard(YardToFermi(0.0) )== 0.0);
    CHECK(MicronToYard(YardToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToYard(YardToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToYard(YardToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToYard(YardToMile(0.0) )== 0.0);
    CHECK(FootToYard(YardToFoot(0.0) )== 0.0);
    CHECK(InchToYard(YardToInch(0.0) )== 0.0);
    CHECK(MilToYard(YardToMil(0.0) )== 0.0);
    CHECK(ThouToYard(YardToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToYard(YardToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToYard(YardToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToYard(YardToRod(0.0) )== 0.0);
    CHECK(ChainToYard(YardToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToYard(YardToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToYard(YardToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToYard(YardToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToYard(YardToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToYard(YardToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToYard(YardToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToYard(YardToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToYard(YardToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToYard(YardToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToYard(YardToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToYard(YardToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToYard(YardToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToYard(YardToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToYard(YardToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToYard(YardToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToYard(YardToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToYard(YardToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToYard(YardToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToYard(YardToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToYard(YardToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToYard(YardToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToYard(YardToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToYard(YardToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToYard(YardToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToYard(YardToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToYard(YardToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToYard(YardToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToYard(YardToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToYard(YardToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToYard(YardToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToYard(YardToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToYard(YardToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToYard(YardToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToYard(YardToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToYard(YardToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToYard(YardToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToYard(YardToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToYard(YardToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
