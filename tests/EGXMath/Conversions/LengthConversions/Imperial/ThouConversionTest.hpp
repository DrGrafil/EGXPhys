#pragma once

TEST_CASE("Thou Length Conversion"){

	//Zero
        //AU
    CHECK(ThouToAstronomicalUnit(0.0) == 0.0);
    CHECK(ThouToLightYear(0.0) == 0.0);
    CHECK(ThouToParsec(0.0) == 0.0);

        //SI
    CHECK(ThouToMeter(0.0) == 0.0);
    CHECK(ThouToYottameter(0.0) == 0.0);
    CHECK(ThouToZettameter(0.0) == 0.0);
    CHECK(ThouToExameter(0.0) == 0.0);
    CHECK(ThouToPetameter(0.0) == 0.0);
    CHECK(ThouToTerameter(0.0) == 0.0);
    CHECK(ThouToGigameter(0.0) == 0.0);
    CHECK(ThouToMegameter(0.0) == 0.0);
    CHECK(ThouToKilometer(0.0) == 0.0);
    CHECK(ThouToHectometer(0.0) == 0.0);
    CHECK(ThouToDecameter(0.0) == 0.0);
    CHECK(ThouToDecimeter(0.0) == 0.0);
    CHECK(ThouToCentimeter(0.0) == 0.0);
    CHECK(ThouToMillimeter(0.0) == 0.0);
    CHECK(ThouToMicrometer(0.0) == 0.0);
    CHECK(ThouToNanometer(0.0) == 0.0);
    CHECK(ThouToPicometer(0.0) == 0.0);
    CHECK(ThouToFemtometer(0.0) == 0.0);
    CHECK(ThouToAttometer(0.0) == 0.0);
    CHECK(ThouToZeptometer(0.0) == 0.0);
    CHECK(ThouToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(ThouToAngstrom(0.0) == 0.0);
    CHECK(ThouToFermi(0.0) == 0.0);
    CHECK(ThouToMicron(0.0) == 0.0);
    CHECK(ThouToCuXUnit(0.0) == 0.0);
    CHECK(ThouToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(ThouToMile(0.0) == 0.0);
    CHECK(ThouToYard(0.0) == 0.0);
    CHECK(ThouToFoot(0.0) == 0.0);
    CHECK(ThouToInch(0.0) == 0.0);
    CHECK(ThouToMil(0.0) == 0.0);

        //Nautical
    CHECK(ThouToNauticalMile(0.0) == 0.0);
    CHECK(ThouToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(ThouToRod(0.0) == 0.0);
    CHECK(ThouToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToThou(ThouToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToThou(ThouToLightYear(0.0) )== 0.0);
    CHECK(ParsecToThou(ThouToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToThou(ThouToMeter(0.0) )== 0.0);
    CHECK(YottameterToThou(ThouToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToThou(ThouToZettameter(0.0) )== 0.0);
    CHECK(ExameterToThou(ThouToExameter(0.0) )== 0.0);
    CHECK(PetameterToThou(ThouToPetameter(0.0) )== 0.0);
    CHECK(TerameterToThou(ThouToTerameter(0.0) )== 0.0);
    CHECK(GigameterToThou(ThouToGigameter(0.0) )== 0.0);
    CHECK(MegameterToThou(ThouToMegameter(0.0) )== 0.0);
    CHECK(KilometerToThou(ThouToKilometer(0.0) )== 0.0);
    CHECK(HectometerToThou(ThouToHectometer(0.0) )== 0.0);
    CHECK(DecameterToThou(ThouToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToThou(ThouToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToThou(ThouToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToThou(ThouToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToThou(ThouToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToThou(ThouToNanometer(0.0) )== 0.0);
    CHECK(PicometerToThou(ThouToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToThou(ThouToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToThou(ThouToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToThou(ThouToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToThou(ThouToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToThou(ThouToAngstrom(0.0) )== 0.0);
    CHECK(FermiToThou(ThouToFermi(0.0) )== 0.0);
    CHECK(MicronToThou(ThouToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToThou(ThouToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToThou(ThouToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToThou(ThouToMile(0.0) )== 0.0);
    CHECK(YardToThou(ThouToYard(0.0) )== 0.0);
    CHECK(FootToThou(ThouToFoot(0.0) )== 0.0);
    CHECK(InchToThou(ThouToInch(0.0) )== 0.0);
    CHECK(MilToThou(ThouToMil(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToThou(ThouToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToThou(ThouToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToThou(ThouToRod(0.0) )== 0.0);
    CHECK(ChainToThou(ThouToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToThou(ThouToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToThou(ThouToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToThou(ThouToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToThou(ThouToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToThou(ThouToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToThou(ThouToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToThou(ThouToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToThou(ThouToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToThou(ThouToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToThou(ThouToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToThou(ThouToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToThou(ThouToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToThou(ThouToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToThou(ThouToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToThou(ThouToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToThou(ThouToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToThou(ThouToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToThou(ThouToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToThou(ThouToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToThou(ThouToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToThou(ThouToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToThou(ThouToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToThou(ThouToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToThou(ThouToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToThou(ThouToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToThou(ThouToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToThou(ThouToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToThou(ThouToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToThou(ThouToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToThou(ThouToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToThou(ThouToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToThou(ThouToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToThou(ThouToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToThou(ThouToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToThou(ThouToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToThou(ThouToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToThou(ThouToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToThou(ThouToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
