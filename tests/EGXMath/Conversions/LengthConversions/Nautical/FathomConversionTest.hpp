#pragma once

TEST_CASE("Fathom Length Conversion"){

	//Zero
        //AU
    CHECK(FathomToAstronomicalUnit(0.0) == 0.0);
    CHECK(FathomToLightYear(0.0) == 0.0);
    CHECK(FathomToParsec(0.0) == 0.0);

        //SI
    CHECK(FathomToMeter(0.0) == 0.0);
    CHECK(FathomToYottameter(0.0) == 0.0);
    CHECK(FathomToZettameter(0.0) == 0.0);
    CHECK(FathomToExameter(0.0) == 0.0);
    CHECK(FathomToPetameter(0.0) == 0.0);
    CHECK(FathomToTerameter(0.0) == 0.0);
    CHECK(FathomToGigameter(0.0) == 0.0);
    CHECK(FathomToMegameter(0.0) == 0.0);
    CHECK(FathomToKilometer(0.0) == 0.0);
    CHECK(FathomToHectometer(0.0) == 0.0);
    CHECK(FathomToDecameter(0.0) == 0.0);
    CHECK(FathomToDecimeter(0.0) == 0.0);
    CHECK(FathomToCentimeter(0.0) == 0.0);
    CHECK(FathomToMillimeter(0.0) == 0.0);
    CHECK(FathomToMicrometer(0.0) == 0.0);
    CHECK(FathomToNanometer(0.0) == 0.0);
    CHECK(FathomToPicometer(0.0) == 0.0);
    CHECK(FathomToFemtometer(0.0) == 0.0);
    CHECK(FathomToAttometer(0.0) == 0.0);
    CHECK(FathomToZeptometer(0.0) == 0.0);
    CHECK(FathomToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(FathomToAngstrom(0.0) == 0.0);
    CHECK(FathomToFermi(0.0) == 0.0);
    CHECK(FathomToMicron(0.0) == 0.0);
    CHECK(FathomToCuXUnit(0.0) == 0.0);
    CHECK(FathomToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(FathomToMile(0.0) == 0.0);
    CHECK(FathomToYard(0.0) == 0.0);
    CHECK(FathomToFoot(0.0) == 0.0);
    CHECK(FathomToInch(0.0) == 0.0);
    CHECK(FathomToMil(0.0) == 0.0);
    CHECK(FathomToThou(0.0) == 0.0);

        //Nautical
    CHECK(FathomToNauticalMile(0.0) == 0.0);
    
        //Surveyors
    CHECK(FathomToRod(0.0) == 0.0);
    CHECK(FathomToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToFathom(FathomToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToFathom(FathomToLightYear(0.0) )== 0.0);
    CHECK(ParsecToFathom(FathomToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToFathom(FathomToMeter(0.0) )== 0.0);
    CHECK(YottameterToFathom(FathomToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToFathom(FathomToZettameter(0.0) )== 0.0);
    CHECK(ExameterToFathom(FathomToExameter(0.0) )== 0.0);
    CHECK(PetameterToFathom(FathomToPetameter(0.0) )== 0.0);
    CHECK(TerameterToFathom(FathomToTerameter(0.0) )== 0.0);
    CHECK(GigameterToFathom(FathomToGigameter(0.0) )== 0.0);
    CHECK(MegameterToFathom(FathomToMegameter(0.0) )== 0.0);
    CHECK(KilometerToFathom(FathomToKilometer(0.0) )== 0.0);
    CHECK(HectometerToFathom(FathomToHectometer(0.0) )== 0.0);
    CHECK(DecameterToFathom(FathomToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToFathom(FathomToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToFathom(FathomToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToFathom(FathomToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToFathom(FathomToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToFathom(FathomToNanometer(0.0) )== 0.0);
    CHECK(PicometerToFathom(FathomToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToFathom(FathomToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToFathom(FathomToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToFathom(FathomToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToFathom(FathomToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToFathom(FathomToAngstrom(0.0) )== 0.0);
    CHECK(FermiToFathom(FathomToFermi(0.0) )== 0.0);
    CHECK(MicronToFathom(FathomToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToFathom(FathomToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToFathom(FathomToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToFathom(FathomToMile(0.0) )== 0.0);
    CHECK(YardToFathom(FathomToYard(0.0) )== 0.0);
    CHECK(FootToFathom(FathomToFoot(0.0) )== 0.0);
    CHECK(InchToFathom(FathomToInch(0.0) )== 0.0);
    CHECK(MilToFathom(FathomToMil(0.0) )== 0.0);
    CHECK(ThouToFathom(FathomToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToFathom(FathomToNauticalMile(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToFathom(FathomToRod(0.0) )== 0.0);
    CHECK(ChainToFathom(FathomToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToFathom(FathomToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToFathom(FathomToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToFathom(FathomToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToFathom(FathomToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToFathom(FathomToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToFathom(FathomToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToFathom(FathomToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToFathom(FathomToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToFathom(FathomToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToFathom(FathomToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToFathom(FathomToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToFathom(FathomToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToFathom(FathomToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToFathom(FathomToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToFathom(FathomToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToFathom(FathomToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToFathom(FathomToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToFathom(FathomToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToFathom(FathomToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToFathom(FathomToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToFathom(FathomToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToFathom(FathomToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToFathom(FathomToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToFathom(FathomToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToFathom(FathomToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToFathom(FathomToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToFathom(FathomToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToFathom(FathomToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToFathom(FathomToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToFathom(FathomToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToFathom(FathomToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToFathom(FathomToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToFathom(FathomToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToFathom(FathomToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToFathom(FathomToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToFathom(FathomToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Surveyors
    CHECK(RodToFathom(FathomToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToFathom(FathomToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
