#pragma once

TEST_CASE("Mile Length Conversion"){

	//Zero
        //AU
    CHECK(MileToAstronomicalUnit(0.0) == 0.0);
    CHECK(MileToLightYear(0.0) == 0.0);
    CHECK(MileToParsec(0.0) == 0.0);

        //SI
    CHECK(MileToMeter(0.0) == 0.0);
    CHECK(MileToYottameter(0.0) == 0.0);
    CHECK(MileToZettameter(0.0) == 0.0);
    CHECK(MileToExameter(0.0) == 0.0);
    CHECK(MileToPetameter(0.0) == 0.0);
    CHECK(MileToTerameter(0.0) == 0.0);
    CHECK(MileToGigameter(0.0) == 0.0);
    CHECK(MileToMegameter(0.0) == 0.0);
    CHECK(MileToKilometer(0.0) == 0.0);
    CHECK(MileToHectometer(0.0) == 0.0);
    CHECK(MileToDecameter(0.0) == 0.0);
    CHECK(MileToDecimeter(0.0) == 0.0);
    CHECK(MileToCentimeter(0.0) == 0.0);
    CHECK(MileToMillimeter(0.0) == 0.0);
    CHECK(MileToMicrometer(0.0) == 0.0);
    CHECK(MileToNanometer(0.0) == 0.0);
    CHECK(MileToPicometer(0.0) == 0.0);
    CHECK(MileToFemtometer(0.0) == 0.0);
    CHECK(MileToAttometer(0.0) == 0.0);
    CHECK(MileToZeptometer(0.0) == 0.0);
    CHECK(MileToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(MileToAngstrom(0.0) == 0.0);
    CHECK(MileToFermi(0.0) == 0.0);
    CHECK(MileToMicron(0.0) == 0.0);
    CHECK(MileToCuXUnit(0.0) == 0.0);
    CHECK(MileToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(MileToYard(0.0) == 0.0);
    CHECK(MileToFoot(0.0) == 0.0);
    CHECK(MileToInch(0.0) == 0.0);
    CHECK(MileToMil(0.0) == 0.0);
    CHECK(MileToThou(0.0) == 0.0);

        //Nautical
    CHECK(MileToNauticalMile(0.0) == 0.0);
    CHECK(MileToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(MileToRod(0.0) == 0.0);
    CHECK(MileToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToMile(MileToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToMile(MileToLightYear(0.0) )== 0.0);
    CHECK(ParsecToMile(MileToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToMile(MileToMeter(0.0) )== 0.0);
    CHECK(YottameterToMile(MileToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToMile(MileToZettameter(0.0) )== 0.0);
    CHECK(ExameterToMile(MileToExameter(0.0) )== 0.0);
    CHECK(PetameterToMile(MileToPetameter(0.0) )== 0.0);
    CHECK(TerameterToMile(MileToTerameter(0.0) )== 0.0);
    CHECK(GigameterToMile(MileToGigameter(0.0) )== 0.0);
    CHECK(MegameterToMile(MileToMegameter(0.0) )== 0.0);
    CHECK(KilometerToMile(MileToKilometer(0.0) )== 0.0);
    CHECK(HectometerToMile(MileToHectometer(0.0) )== 0.0);
    CHECK(DecameterToMile(MileToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToMile(MileToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToMile(MileToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToMile(MileToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToMile(MileToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToMile(MileToNanometer(0.0) )== 0.0);
    CHECK(PicometerToMile(MileToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToMile(MileToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToMile(MileToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToMile(MileToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToMile(MileToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToMile(MileToAngstrom(0.0) )== 0.0);
    CHECK(FermiToMile(MileToFermi(0.0) )== 0.0);
    CHECK(MicronToMile(MileToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToMile(MileToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToMile(MileToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(YardToMile(MileToYard(0.0) )== 0.0);
    CHECK(FootToMile(MileToFoot(0.0) )== 0.0);
    CHECK(InchToMile(MileToInch(0.0) )== 0.0);
    CHECK(MilToMile(MileToMil(0.0) )== 0.0);
    CHECK(ThouToMile(MileToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToMile(MileToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToMile(MileToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToMile(MileToRod(0.0) )== 0.0);
    CHECK(ChainToMile(MileToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToMile(MileToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToMile(MileToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToMile(MileToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToMile(MileToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToMile(MileToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToMile(MileToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToMile(MileToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToMile(MileToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToMile(MileToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToMile(MileToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToMile(MileToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToMile(MileToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToMile(MileToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToMile(MileToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToMile(MileToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToMile(MileToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToMile(MileToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToMile(MileToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToMile(MileToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToMile(MileToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToMile(MileToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToMile(MileToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToMile(MileToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToMile(MileToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToMile(MileToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToMile(MileToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToMile(MileToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToMile(MileToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToMile(MileToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(YardToMile(MileToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToMile(MileToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToMile(MileToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToMile(MileToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToMile(MileToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToMile(MileToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToMile(MileToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToMile(MileToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToMile(MileToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
