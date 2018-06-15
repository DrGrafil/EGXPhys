#pragma once

TEST_CASE("Micrometer Length Conversion"){

	//Zero
        //AU
    CHECK(MicrometerToAstronomicalUnit(0.0) == 0.0);
    CHECK(MicrometerToLightYear(0.0) == 0.0);
    CHECK(MicrometerToParsec(0.0) == 0.0);

        //SI
    CHECK(MicrometerToMeter(0.0) == 0.0);
    CHECK(MicrometerToYottameter(0.0) == 0.0);
    CHECK(MicrometerToZettameter(0.0) == 0.0);
    CHECK(MicrometerToExameter(0.0) == 0.0);
    CHECK(MicrometerToPetameter(0.0) == 0.0);
    CHECK(MicrometerToTerameter(0.0) == 0.0);
    CHECK(MicrometerToGigameter(0.0) == 0.0);
    CHECK(MicrometerToMegameter(0.0) == 0.0);
    CHECK(MicrometerToKilometer(0.0) == 0.0);
    CHECK(MicrometerToHectometer(0.0) == 0.0);
    CHECK(MicrometerToDecameter(0.0) == 0.0);
    CHECK(MicrometerToDecimeter(0.0) == 0.0);
    CHECK(MicrometerToCentimeter(0.0) == 0.0);
    CHECK(MicrometerToMillimeter(0.0) == 0.0);
    CHECK(MicrometerToNanometer(0.0) == 0.0);
    CHECK(MicrometerToPicometer(0.0) == 0.0);
    CHECK(MicrometerToFemtometer(0.0) == 0.0);
    CHECK(MicrometerToAttometer(0.0) == 0.0);
    CHECK(MicrometerToZeptometer(0.0) == 0.0);
    CHECK(MicrometerToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(MicrometerToAngstrom(0.0) == 0.0);
    CHECK(MicrometerToFermi(0.0) == 0.0);
    CHECK(MicrometerToMicron(0.0) == 0.0);
    CHECK(MicrometerToCuXUnit(0.0) == 0.0);
    CHECK(MicrometerToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(MicrometerToMile(0.0) == 0.0);
    CHECK(MicrometerToYard(0.0) == 0.0);
    CHECK(MicrometerToFoot(0.0) == 0.0);
    CHECK(MicrometerToInch(0.0) == 0.0);
    CHECK(MicrometerToMil(0.0) == 0.0);
    CHECK(MicrometerToThou(0.0) == 0.0);

        //Nautical
    CHECK(MicrometerToNauticalMile(0.0) == 0.0);
    CHECK(MicrometerToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(MicrometerToRod(0.0) == 0.0);
    CHECK(MicrometerToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToMicrometer(MicrometerToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToMicrometer(MicrometerToLightYear(0.0) )== 0.0);
    CHECK(ParsecToMicrometer(MicrometerToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToMicrometer(MicrometerToMeter(0.0) )== 0.0);
    CHECK(YottameterToMicrometer(MicrometerToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToMicrometer(MicrometerToZettameter(0.0) )== 0.0);
    CHECK(ExameterToMicrometer(MicrometerToExameter(0.0) )== 0.0);
    CHECK(PetameterToMicrometer(MicrometerToPetameter(0.0) )== 0.0);
    CHECK(TerameterToMicrometer(MicrometerToTerameter(0.0) )== 0.0);
    CHECK(GigameterToMicrometer(MicrometerToGigameter(0.0) )== 0.0);
    CHECK(MegameterToMicrometer(MicrometerToMegameter(0.0) )== 0.0);
    CHECK(KilometerToMicrometer(MicrometerToKilometer(0.0) )== 0.0);
    CHECK(HectometerToMicrometer(MicrometerToHectometer(0.0) )== 0.0);
    CHECK(DecameterToMicrometer(MicrometerToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToMicrometer(MicrometerToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToMicrometer(MicrometerToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToMicrometer(MicrometerToMillimeter(0.0) )== 0.0);
    CHECK(NanometerToMicrometer(MicrometerToNanometer(0.0) )== 0.0);
    CHECK(PicometerToMicrometer(MicrometerToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToMicrometer(MicrometerToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToMicrometer(MicrometerToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToMicrometer(MicrometerToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToMicrometer(MicrometerToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToMicrometer(MicrometerToAngstrom(0.0) )== 0.0);
    CHECK(FermiToMicrometer(MicrometerToFermi(0.0) )== 0.0);
    CHECK(MicronToMicrometer(MicrometerToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToMicrometer(MicrometerToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToMicrometer(MicrometerToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToMicrometer(MicrometerToMile(0.0) )== 0.0);
    CHECK(YardToMicrometer(MicrometerToYard(0.0) )== 0.0);
    CHECK(FootToMicrometer(MicrometerToFoot(0.0) )== 0.0);
    CHECK(InchToMicrometer(MicrometerToInch(0.0) )== 0.0);
    CHECK(MilToMicrometer(MicrometerToMil(0.0) )== 0.0);
    CHECK(ThouToMicrometer(MicrometerToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToMicrometer(MicrometerToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToMicrometer(MicrometerToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToMicrometer(MicrometerToRod(0.0) )== 0.0);
    CHECK(ChainToMicrometer(MicrometerToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToMicrometer(MicrometerToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToMicrometer(MicrometerToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToMicrometer(MicrometerToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToMicrometer(MicrometerToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToMicrometer(MicrometerToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToMicrometer(MicrometerToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToMicrometer(MicrometerToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToMicrometer(MicrometerToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToMicrometer(MicrometerToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToMicrometer(MicrometerToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToMicrometer(MicrometerToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToMicrometer(MicrometerToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToMicrometer(MicrometerToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToMicrometer(MicrometerToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToMicrometer(MicrometerToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToMicrometer(MicrometerToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToMicrometer(MicrometerToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToMicrometer(MicrometerToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToMicrometer(MicrometerToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToMicrometer(MicrometerToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToMicrometer(MicrometerToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToMicrometer(MicrometerToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToMicrometer(MicrometerToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToMicrometer(MicrometerToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToMicrometer(MicrometerToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToMicrometer(MicrometerToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToMicrometer(MicrometerToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToMicrometer(MicrometerToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToMicrometer(MicrometerToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToMicrometer(MicrometerToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToMicrometer(MicrometerToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToMicrometer(MicrometerToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToMicrometer(MicrometerToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToMicrometer(MicrometerToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToMicrometer(MicrometerToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToMicrometer(MicrometerToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToMicrometer(MicrometerToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToMicrometer(MicrometerToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
