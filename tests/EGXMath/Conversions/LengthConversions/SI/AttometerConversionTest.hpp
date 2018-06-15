#pragma once

TEST_CASE("Attometer Length Conversion"){

	//Zero
        //AU
    CHECK(AttometerToAstronomicalUnit(0.0) == 0.0);
    CHECK(AttometerToLightYear(0.0) == 0.0);
    CHECK(AttometerToParsec(0.0) == 0.0);

        //SI
    CHECK(AttometerToMeter(0.0) == 0.0);
    CHECK(AttometerToYottameter(0.0) == 0.0);
    CHECK(AttometerToZettameter(0.0) == 0.0);
    CHECK(AttometerToExameter(0.0) == 0.0);
    CHECK(AttometerToPetameter(0.0) == 0.0);
    CHECK(AttometerToTerameter(0.0) == 0.0);
    CHECK(AttometerToGigameter(0.0) == 0.0);
    CHECK(AttometerToMegameter(0.0) == 0.0);
    CHECK(AttometerToKilometer(0.0) == 0.0);
    CHECK(AttometerToHectometer(0.0) == 0.0);
    CHECK(AttometerToDecameter(0.0) == 0.0);
    CHECK(AttometerToDecimeter(0.0) == 0.0);
    CHECK(AttometerToCentimeter(0.0) == 0.0);
    CHECK(AttometerToMillimeter(0.0) == 0.0);
    CHECK(AttometerToMicrometer(0.0) == 0.0);
    CHECK(AttometerToNanometer(0.0) == 0.0);
    CHECK(AttometerToPicometer(0.0) == 0.0);
    CHECK(AttometerToFemtometer(0.0) == 0.0);
    CHECK(AttometerToZeptometer(0.0) == 0.0);
    CHECK(AttometerToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(AttometerToAngstrom(0.0) == 0.0);
    CHECK(AttometerToFermi(0.0) == 0.0);
    CHECK(AttometerToMicron(0.0) == 0.0);
    CHECK(AttometerToCuXUnit(0.0) == 0.0);
    CHECK(AttometerToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(AttometerToMile(0.0) == 0.0);
    CHECK(AttometerToYard(0.0) == 0.0);
    CHECK(AttometerToFoot(0.0) == 0.0);
    CHECK(AttometerToInch(0.0) == 0.0);
    CHECK(AttometerToMil(0.0) == 0.0);
    CHECK(AttometerToThou(0.0) == 0.0);

        //Nautical
    CHECK(AttometerToNauticalMile(0.0) == 0.0);
    CHECK(AttometerToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(AttometerToRod(0.0) == 0.0);
    CHECK(AttometerToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToAttometer(AttometerToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToAttometer(AttometerToLightYear(0.0) )== 0.0);
    CHECK(ParsecToAttometer(AttometerToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToAttometer(AttometerToMeter(0.0) )== 0.0);
    CHECK(YottameterToAttometer(AttometerToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToAttometer(AttometerToZettameter(0.0) )== 0.0);
    CHECK(ExameterToAttometer(AttometerToExameter(0.0) )== 0.0);
    CHECK(PetameterToAttometer(AttometerToPetameter(0.0) )== 0.0);
    CHECK(TerameterToAttometer(AttometerToTerameter(0.0) )== 0.0);
    CHECK(GigameterToAttometer(AttometerToGigameter(0.0) )== 0.0);
    CHECK(MegameterToAttometer(AttometerToMegameter(0.0) )== 0.0);
    CHECK(KilometerToAttometer(AttometerToKilometer(0.0) )== 0.0);
    CHECK(HectometerToAttometer(AttometerToHectometer(0.0) )== 0.0);
    CHECK(DecameterToAttometer(AttometerToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToAttometer(AttometerToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToAttometer(AttometerToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToAttometer(AttometerToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToAttometer(AttometerToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToAttometer(AttometerToNanometer(0.0) )== 0.0);
    CHECK(PicometerToAttometer(AttometerToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToAttometer(AttometerToFemtometer(0.0) )== 0.0);
    CHECK(ZeptometerToAttometer(AttometerToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToAttometer(AttometerToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToAttometer(AttometerToAngstrom(0.0) )== 0.0);
    CHECK(FermiToAttometer(AttometerToFermi(0.0) )== 0.0);
    CHECK(MicronToAttometer(AttometerToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToAttometer(AttometerToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToAttometer(AttometerToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToAttometer(AttometerToMile(0.0) )== 0.0);
    CHECK(YardToAttometer(AttometerToYard(0.0) )== 0.0);
    CHECK(FootToAttometer(AttometerToFoot(0.0) )== 0.0);
    CHECK(InchToAttometer(AttometerToInch(0.0) )== 0.0);
    CHECK(MilToAttometer(AttometerToMil(0.0) )== 0.0);
    CHECK(ThouToAttometer(AttometerToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToAttometer(AttometerToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToAttometer(AttometerToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToAttometer(AttometerToRod(0.0) )== 0.0);
    CHECK(ChainToAttometer(AttometerToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToAttometer(AttometerToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToAttometer(AttometerToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToAttometer(AttometerToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToAttometer(AttometerToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToAttometer(AttometerToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToAttometer(AttometerToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToAttometer(AttometerToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToAttometer(AttometerToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToAttometer(AttometerToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToAttometer(AttometerToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToAttometer(AttometerToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToAttometer(AttometerToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToAttometer(AttometerToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToAttometer(AttometerToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToAttometer(AttometerToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToAttometer(AttometerToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToAttometer(AttometerToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToAttometer(AttometerToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToAttometer(AttometerToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToAttometer(AttometerToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToAttometer(AttometerToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToAttometer(AttometerToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToAttometer(AttometerToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToAttometer(AttometerToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToAttometer(AttometerToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToAttometer(AttometerToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToAttometer(AttometerToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToAttometer(AttometerToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToAttometer(AttometerToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToAttometer(AttometerToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToAttometer(AttometerToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToAttometer(AttometerToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToAttometer(AttometerToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToAttometer(AttometerToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToAttometer(AttometerToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToAttometer(AttometerToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToAttometer(AttometerToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToAttometer(AttometerToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
