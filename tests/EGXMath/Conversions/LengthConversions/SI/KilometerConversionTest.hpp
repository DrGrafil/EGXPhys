#pragma once

TEST_CASE("Kilometer Length Conversion"){

	//Zero
        //AU
    CHECK(KilometerToAstronomicalUnit(0.0) == 0.0);
    CHECK(KilometerToLightYear(0.0) == 0.0);
    CHECK(KilometerToParsec(0.0) == 0.0);

        //SI
    CHECK(KilometerToMeter(0.0) == 0.0);
    CHECK(KilometerToYottameter(0.0) == 0.0);
    CHECK(KilometerToZettameter(0.0) == 0.0);
    CHECK(KilometerToExameter(0.0) == 0.0);
    CHECK(KilometerToPetameter(0.0) == 0.0);
    CHECK(KilometerToTerameter(0.0) == 0.0);
    CHECK(KilometerToGigameter(0.0) == 0.0);
    CHECK(KilometerToMegameter(0.0) == 0.0);
    CHECK(KilometerToHectometer(0.0) == 0.0);
    CHECK(KilometerToDecameter(0.0) == 0.0);
    CHECK(KilometerToDecimeter(0.0) == 0.0);
    CHECK(KilometerToCentimeter(0.0) == 0.0);
    CHECK(KilometerToMillimeter(0.0) == 0.0);
    CHECK(KilometerToMicrometer(0.0) == 0.0);
    CHECK(KilometerToNanometer(0.0) == 0.0);
    CHECK(KilometerToPicometer(0.0) == 0.0);
    CHECK(KilometerToFemtometer(0.0) == 0.0);
    CHECK(KilometerToAttometer(0.0) == 0.0);
    CHECK(KilometerToZeptometer(0.0) == 0.0);
    CHECK(KilometerToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(KilometerToAngstrom(0.0) == 0.0);
    CHECK(KilometerToFermi(0.0) == 0.0);
    CHECK(KilometerToMicron(0.0) == 0.0);
    CHECK(KilometerToCuXUnit(0.0) == 0.0);
    CHECK(KilometerToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(KilometerToMile(0.0) == 0.0);
    CHECK(KilometerToYard(0.0) == 0.0);
    CHECK(KilometerToFoot(0.0) == 0.0);
    CHECK(KilometerToInch(0.0) == 0.0);
    CHECK(KilometerToMil(0.0) == 0.0);
    CHECK(KilometerToThou(0.0) == 0.0);

        //Nautical
    CHECK(KilometerToNauticalMile(0.0) == 0.0);
    CHECK(KilometerToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(KilometerToRod(0.0) == 0.0);
    CHECK(KilometerToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToKilometer(KilometerToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToKilometer(KilometerToLightYear(0.0) )== 0.0);
    CHECK(ParsecToKilometer(KilometerToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToKilometer(KilometerToMeter(0.0) )== 0.0);
    CHECK(YottameterToKilometer(KilometerToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToKilometer(KilometerToZettameter(0.0) )== 0.0);
    CHECK(ExameterToKilometer(KilometerToExameter(0.0) )== 0.0);
    CHECK(PetameterToKilometer(KilometerToPetameter(0.0) )== 0.0);
    CHECK(TerameterToKilometer(KilometerToTerameter(0.0) )== 0.0);
    CHECK(GigameterToKilometer(KilometerToGigameter(0.0) )== 0.0);
    CHECK(MegameterToKilometer(KilometerToMegameter(0.0) )== 0.0);
    CHECK(HectometerToKilometer(KilometerToHectometer(0.0) )== 0.0);
    CHECK(DecameterToKilometer(KilometerToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToKilometer(KilometerToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToKilometer(KilometerToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToKilometer(KilometerToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToKilometer(KilometerToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToKilometer(KilometerToNanometer(0.0) )== 0.0);
    CHECK(PicometerToKilometer(KilometerToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToKilometer(KilometerToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToKilometer(KilometerToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToKilometer(KilometerToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToKilometer(KilometerToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToKilometer(KilometerToAngstrom(0.0) )== 0.0);
    CHECK(FermiToKilometer(KilometerToFermi(0.0) )== 0.0);
    CHECK(MicronToKilometer(KilometerToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToKilometer(KilometerToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToKilometer(KilometerToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToKilometer(KilometerToMile(0.0) )== 0.0);
    CHECK(YardToKilometer(KilometerToYard(0.0) )== 0.0);
    CHECK(FootToKilometer(KilometerToFoot(0.0) )== 0.0);
    CHECK(InchToKilometer(KilometerToInch(0.0) )== 0.0);
    CHECK(MilToKilometer(KilometerToMil(0.0) )== 0.0);
    CHECK(ThouToKilometer(KilometerToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToKilometer(KilometerToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToKilometer(KilometerToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToKilometer(KilometerToRod(0.0) )== 0.0);
    CHECK(ChainToKilometer(KilometerToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToKilometer(KilometerToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToKilometer(KilometerToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToKilometer(KilometerToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToKilometer(KilometerToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToKilometer(KilometerToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToKilometer(KilometerToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToKilometer(KilometerToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToKilometer(KilometerToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToKilometer(KilometerToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToKilometer(KilometerToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToKilometer(KilometerToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToKilometer(KilometerToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToKilometer(KilometerToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToKilometer(KilometerToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToKilometer(KilometerToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToKilometer(KilometerToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToKilometer(KilometerToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToKilometer(KilometerToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToKilometer(KilometerToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToKilometer(KilometerToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToKilometer(KilometerToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToKilometer(KilometerToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToKilometer(KilometerToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToKilometer(KilometerToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToKilometer(KilometerToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToKilometer(KilometerToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToKilometer(KilometerToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToKilometer(KilometerToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToKilometer(KilometerToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToKilometer(KilometerToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToKilometer(KilometerToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToKilometer(KilometerToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToKilometer(KilometerToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToKilometer(KilometerToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToKilometer(KilometerToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToKilometer(KilometerToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToKilometer(KilometerToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToKilometer(KilometerToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
