#pragma once

TEST_CASE("Yoctometer Length Conversion"){

	//Zero
        //AU
    CHECK(YoctometerToAstronomicalUnit(0.0) == 0.0);
    CHECK(YoctometerToLightYear(0.0) == 0.0);
    CHECK(YoctometerToParsec(0.0) == 0.0);

        //SI
    CHECK(YoctometerToMeter(0.0) == 0.0);
    CHECK(YoctometerToYottameter(0.0) == 0.0);
    CHECK(YoctometerToZettameter(0.0) == 0.0);
    CHECK(YoctometerToExameter(0.0) == 0.0);
    CHECK(YoctometerToPetameter(0.0) == 0.0);
    CHECK(YoctometerToTerameter(0.0) == 0.0);
    CHECK(YoctometerToGigameter(0.0) == 0.0);
    CHECK(YoctometerToMegameter(0.0) == 0.0);
    CHECK(YoctometerToKilometer(0.0) == 0.0);
    CHECK(YoctometerToHectometer(0.0) == 0.0);
    CHECK(YoctometerToDecameter(0.0) == 0.0);
    CHECK(YoctometerToDecimeter(0.0) == 0.0);
    CHECK(YoctometerToCentimeter(0.0) == 0.0);
    CHECK(YoctometerToMillimeter(0.0) == 0.0);
    CHECK(YoctometerToMicrometer(0.0) == 0.0);
    CHECK(YoctometerToNanometer(0.0) == 0.0);
    CHECK(YoctometerToPicometer(0.0) == 0.0);
    CHECK(YoctometerToFemtometer(0.0) == 0.0);
    CHECK(YoctometerToAttometer(0.0) == 0.0);
    CHECK(YoctometerToZeptometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(YoctometerToAngstrom(0.0) == 0.0);
    CHECK(YoctometerToFermi(0.0) == 0.0);
    CHECK(YoctometerToMicron(0.0) == 0.0);
    CHECK(YoctometerToCuXUnit(0.0) == 0.0);
    CHECK(YoctometerToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(YoctometerToMile(0.0) == 0.0);
    CHECK(YoctometerToYard(0.0) == 0.0);
    CHECK(YoctometerToFoot(0.0) == 0.0);
    CHECK(YoctometerToInch(0.0) == 0.0);
    CHECK(YoctometerToMil(0.0) == 0.0);
    CHECK(YoctometerToThou(0.0) == 0.0);

        //Nautical
    CHECK(YoctometerToNauticalMile(0.0) == 0.0);
    CHECK(YoctometerToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(YoctometerToRod(0.0) == 0.0);
    CHECK(YoctometerToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToYoctometer(YoctometerToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToYoctometer(YoctometerToLightYear(0.0) )== 0.0);
    CHECK(ParsecToYoctometer(YoctometerToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToYoctometer(YoctometerToMeter(0.0) )== 0.0);
    CHECK(YottameterToYoctometer(YoctometerToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToYoctometer(YoctometerToZettameter(0.0) )== 0.0);
    CHECK(ExameterToYoctometer(YoctometerToExameter(0.0) )== 0.0);
    CHECK(PetameterToYoctometer(YoctometerToPetameter(0.0) )== 0.0);
    CHECK(TerameterToYoctometer(YoctometerToTerameter(0.0) )== 0.0);
    CHECK(GigameterToYoctometer(YoctometerToGigameter(0.0) )== 0.0);
    CHECK(MegameterToYoctometer(YoctometerToMegameter(0.0) )== 0.0);
    CHECK(KilometerToYoctometer(YoctometerToKilometer(0.0) )== 0.0);
    CHECK(HectometerToYoctometer(YoctometerToHectometer(0.0) )== 0.0);
    CHECK(DecameterToYoctometer(YoctometerToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToYoctometer(YoctometerToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToYoctometer(YoctometerToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToYoctometer(YoctometerToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToYoctometer(YoctometerToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToYoctometer(YoctometerToNanometer(0.0) )== 0.0);
    CHECK(PicometerToYoctometer(YoctometerToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToYoctometer(YoctometerToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToYoctometer(YoctometerToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToYoctometer(YoctometerToZeptometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToYoctometer(YoctometerToAngstrom(0.0) )== 0.0);
    CHECK(FermiToYoctometer(YoctometerToFermi(0.0) )== 0.0);
    CHECK(MicronToYoctometer(YoctometerToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToYoctometer(YoctometerToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToYoctometer(YoctometerToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToYoctometer(YoctometerToMile(0.0) )== 0.0);
    CHECK(YardToYoctometer(YoctometerToYard(0.0) )== 0.0);
    CHECK(FootToYoctometer(YoctometerToFoot(0.0) )== 0.0);
    CHECK(InchToYoctometer(YoctometerToInch(0.0) )== 0.0);
    CHECK(MilToYoctometer(YoctometerToMil(0.0) )== 0.0);
    CHECK(ThouToYoctometer(YoctometerToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToYoctometer(YoctometerToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToYoctometer(YoctometerToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToYoctometer(YoctometerToRod(0.0) )== 0.0);
    CHECK(ChainToYoctometer(YoctometerToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToYoctometer(YoctometerToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToYoctometer(YoctometerToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToYoctometer(YoctometerToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToYoctometer(YoctometerToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToYoctometer(YoctometerToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToYoctometer(YoctometerToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToYoctometer(YoctometerToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToYoctometer(YoctometerToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToYoctometer(YoctometerToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToYoctometer(YoctometerToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToYoctometer(YoctometerToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToYoctometer(YoctometerToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToYoctometer(YoctometerToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToYoctometer(YoctometerToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToYoctometer(YoctometerToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToYoctometer(YoctometerToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToYoctometer(YoctometerToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToYoctometer(YoctometerToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToYoctometer(YoctometerToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToYoctometer(YoctometerToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToYoctometer(YoctometerToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToYoctometer(YoctometerToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToYoctometer(YoctometerToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToYoctometer(YoctometerToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToYoctometer(YoctometerToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToYoctometer(YoctometerToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToYoctometer(YoctometerToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToYoctometer(YoctometerToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToYoctometer(YoctometerToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToYoctometer(YoctometerToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToYoctometer(YoctometerToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToYoctometer(YoctometerToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToYoctometer(YoctometerToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToYoctometer(YoctometerToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToYoctometer(YoctometerToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToYoctometer(YoctometerToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToYoctometer(YoctometerToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToYoctometer(YoctometerToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
