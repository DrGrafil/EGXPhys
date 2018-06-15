#pragma once

TEST_CASE("LightYear Length Conversion"){

	//Zero
        //AU
    CHECK(LightYearToAstronomicalUnit(0.0) == 0.0);
    CHECK(LightYearToParsec(0.0) == 0.0);

        //SI
    CHECK(LightYearToMeter(0.0) == 0.0);
    CHECK(LightYearToYottameter(0.0) == 0.0);
    CHECK(LightYearToZettameter(0.0) == 0.0);
    CHECK(LightYearToExameter(0.0) == 0.0);
    CHECK(LightYearToPetameter(0.0) == 0.0);
    CHECK(LightYearToTerameter(0.0) == 0.0);
    CHECK(LightYearToGigameter(0.0) == 0.0);
    CHECK(LightYearToMegameter(0.0) == 0.0);
    CHECK(LightYearToKilometer(0.0) == 0.0);
    CHECK(LightYearToHectometer(0.0) == 0.0);
    CHECK(LightYearToDecameter(0.0) == 0.0);
    CHECK(LightYearToDecimeter(0.0) == 0.0);
    CHECK(LightYearToCentimeter(0.0) == 0.0);
    CHECK(LightYearToMillimeter(0.0) == 0.0);
    CHECK(LightYearToMicrometer(0.0) == 0.0);
    CHECK(LightYearToNanometer(0.0) == 0.0);
    CHECK(LightYearToPicometer(0.0) == 0.0);
    CHECK(LightYearToFemtometer(0.0) == 0.0);
    CHECK(LightYearToAttometer(0.0) == 0.0);
    CHECK(LightYearToZeptometer(0.0) == 0.0);
    CHECK(LightYearToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(LightYearToAngstrom(0.0) == 0.0);
    CHECK(LightYearToFermi(0.0) == 0.0);
    CHECK(LightYearToMicron(0.0) == 0.0);
    CHECK(LightYearToCuXUnit(0.0) == 0.0);
    CHECK(LightYearToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(LightYearToMile(0.0) == 0.0);
    CHECK(LightYearToYard(0.0) == 0.0);
    CHECK(LightYearToFoot(0.0) == 0.0);
    CHECK(LightYearToInch(0.0) == 0.0);
    CHECK(LightYearToMil(0.0) == 0.0);
    CHECK(LightYearToThou(0.0) == 0.0);

        //Nautical
    CHECK(LightYearToNauticalMile(0.0) == 0.0);
    CHECK(LightYearToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(LightYearToRod(0.0) == 0.0);
    CHECK(LightYearToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToLightYear(LightYearToAstronomicalUnit(0.0) )== 0.0);
    CHECK(ParsecToLightYear(LightYearToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToLightYear(LightYearToMeter(0.0) )== 0.0);
    CHECK(YottameterToLightYear(LightYearToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToLightYear(LightYearToZettameter(0.0) )== 0.0);
    CHECK(ExameterToLightYear(LightYearToExameter(0.0) )== 0.0);
    CHECK(PetameterToLightYear(LightYearToPetameter(0.0) )== 0.0);
    CHECK(TerameterToLightYear(LightYearToTerameter(0.0) )== 0.0);
    CHECK(GigameterToLightYear(LightYearToGigameter(0.0) )== 0.0);
    CHECK(MegameterToLightYear(LightYearToMegameter(0.0) )== 0.0);
    CHECK(KilometerToLightYear(LightYearToKilometer(0.0) )== 0.0);
    CHECK(HectometerToLightYear(LightYearToHectometer(0.0) )== 0.0);
    CHECK(DecameterToLightYear(LightYearToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToLightYear(LightYearToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToLightYear(LightYearToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToLightYear(LightYearToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToLightYear(LightYearToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToLightYear(LightYearToNanometer(0.0) )== 0.0);
    CHECK(PicometerToLightYear(LightYearToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToLightYear(LightYearToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToLightYear(LightYearToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToLightYear(LightYearToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToLightYear(LightYearToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToLightYear(LightYearToAngstrom(0.0) )== 0.0);
    CHECK(FermiToLightYear(LightYearToFermi(0.0) )== 0.0);
    CHECK(MicronToLightYear(LightYearToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToLightYear(LightYearToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToLightYear(LightYearToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToLightYear(LightYearToMile(0.0) )== 0.0);
    CHECK(YardToLightYear(LightYearToYard(0.0) )== 0.0);
    CHECK(FootToLightYear(LightYearToFoot(0.0) )== 0.0);
    CHECK(InchToLightYear(LightYearToInch(0.0) )== 0.0);
    CHECK(MilToLightYear(LightYearToMil(0.0) )== 0.0);
    CHECK(ThouToLightYear(LightYearToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToLightYear(LightYearToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToLightYear(LightYearToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToLightYear(LightYearToRod(0.0) )== 0.0);
    CHECK(ChainToLightYear(LightYearToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToLightYear(LightYearToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToLightYear(LightYearToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToLightYear(LightYearToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToLightYear(LightYearToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToLightYear(LightYearToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToLightYear(LightYearToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToLightYear(LightYearToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToLightYear(LightYearToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToLightYear(LightYearToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToLightYear(LightYearToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToLightYear(LightYearToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToLightYear(LightYearToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToLightYear(LightYearToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToLightYear(LightYearToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToLightYear(LightYearToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToLightYear(LightYearToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToLightYear(LightYearToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToLightYear(LightYearToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToLightYear(LightYearToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToLightYear(LightYearToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToLightYear(LightYearToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToLightYear(LightYearToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToLightYear(LightYearToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToLightYear(LightYearToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToLightYear(LightYearToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToLightYear(LightYearToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToLightYear(LightYearToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToLightYear(LightYearToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToLightYear(LightYearToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToLightYear(LightYearToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToLightYear(LightYearToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToLightYear(LightYearToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToLightYear(LightYearToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToLightYear(LightYearToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToLightYear(LightYearToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToLightYear(LightYearToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToLightYear(LightYearToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToLightYear(LightYearToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
