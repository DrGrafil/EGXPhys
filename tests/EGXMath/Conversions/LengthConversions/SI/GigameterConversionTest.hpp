#pragma once

TEST_CASE("Gigameter Length Conversion"){

	//Zero
        //AU
    CHECK(GigameterToAstronomicalUnit(0.0) == 0.0);
    CHECK(GigameterToLightYear(0.0) == 0.0);
    CHECK(GigameterToParsec(0.0) == 0.0);

        //SI
    CHECK(GigameterToMeter(0.0) == 0.0);
    CHECK(GigameterToYottameter(0.0) == 0.0);
    CHECK(GigameterToZettameter(0.0) == 0.0);
    CHECK(GigameterToExameter(0.0) == 0.0);
    CHECK(GigameterToPetameter(0.0) == 0.0);
    CHECK(GigameterToTerameter(0.0) == 0.0);
    CHECK(GigameterToMegameter(0.0) == 0.0);
    CHECK(GigameterToKilometer(0.0) == 0.0);
    CHECK(GigameterToHectometer(0.0) == 0.0);
    CHECK(GigameterToDecameter(0.0) == 0.0);
    CHECK(GigameterToDecimeter(0.0) == 0.0);
    CHECK(GigameterToCentimeter(0.0) == 0.0);
    CHECK(GigameterToMillimeter(0.0) == 0.0);
    CHECK(GigameterToMicrometer(0.0) == 0.0);
    CHECK(GigameterToNanometer(0.0) == 0.0);
    CHECK(GigameterToPicometer(0.0) == 0.0);
    CHECK(GigameterToFemtometer(0.0) == 0.0);
    CHECK(GigameterToAttometer(0.0) == 0.0);
    CHECK(GigameterToZeptometer(0.0) == 0.0);
    CHECK(GigameterToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(GigameterToAngstrom(0.0) == 0.0);
    CHECK(GigameterToFermi(0.0) == 0.0);
    CHECK(GigameterToMicron(0.0) == 0.0);
    CHECK(GigameterToCuXUnit(0.0) == 0.0);
    CHECK(GigameterToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(GigameterToMile(0.0) == 0.0);
    CHECK(GigameterToYard(0.0) == 0.0);
    CHECK(GigameterToFoot(0.0) == 0.0);
    CHECK(GigameterToInch(0.0) == 0.0);
    CHECK(GigameterToMil(0.0) == 0.0);
    CHECK(GigameterToThou(0.0) == 0.0);

        //Nautical
    CHECK(GigameterToNauticalMile(0.0) == 0.0);
    CHECK(GigameterToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(GigameterToRod(0.0) == 0.0);
    CHECK(GigameterToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToGigameter(GigameterToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToGigameter(GigameterToLightYear(0.0) )== 0.0);
    CHECK(ParsecToGigameter(GigameterToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToGigameter(GigameterToMeter(0.0) )== 0.0);
    CHECK(YottameterToGigameter(GigameterToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToGigameter(GigameterToZettameter(0.0) )== 0.0);
    CHECK(ExameterToGigameter(GigameterToExameter(0.0) )== 0.0);
    CHECK(PetameterToGigameter(GigameterToPetameter(0.0) )== 0.0);
    CHECK(TerameterToGigameter(GigameterToTerameter(0.0) )== 0.0);
    CHECK(MegameterToGigameter(GigameterToMegameter(0.0) )== 0.0);
    CHECK(KilometerToGigameter(GigameterToKilometer(0.0) )== 0.0);
    CHECK(HectometerToGigameter(GigameterToHectometer(0.0) )== 0.0);
    CHECK(DecameterToGigameter(GigameterToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToGigameter(GigameterToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToGigameter(GigameterToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToGigameter(GigameterToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToGigameter(GigameterToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToGigameter(GigameterToNanometer(0.0) )== 0.0);
    CHECK(PicometerToGigameter(GigameterToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToGigameter(GigameterToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToGigameter(GigameterToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToGigameter(GigameterToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToGigameter(GigameterToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToGigameter(GigameterToAngstrom(0.0) )== 0.0);
    CHECK(FermiToGigameter(GigameterToFermi(0.0) )== 0.0);
    CHECK(MicronToGigameter(GigameterToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToGigameter(GigameterToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToGigameter(GigameterToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToGigameter(GigameterToMile(0.0) )== 0.0);
    CHECK(YardToGigameter(GigameterToYard(0.0) )== 0.0);
    CHECK(FootToGigameter(GigameterToFoot(0.0) )== 0.0);
    CHECK(InchToGigameter(GigameterToInch(0.0) )== 0.0);
    CHECK(MilToGigameter(GigameterToMil(0.0) )== 0.0);
    CHECK(ThouToGigameter(GigameterToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToGigameter(GigameterToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToGigameter(GigameterToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToGigameter(GigameterToRod(0.0) )== 0.0);
    CHECK(ChainToGigameter(GigameterToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToGigameter(GigameterToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToGigameter(GigameterToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToGigameter(GigameterToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToGigameter(GigameterToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToGigameter(GigameterToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToGigameter(GigameterToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToGigameter(GigameterToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToGigameter(GigameterToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToGigameter(GigameterToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToGigameter(GigameterToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToGigameter(GigameterToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToGigameter(GigameterToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToGigameter(GigameterToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToGigameter(GigameterToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToGigameter(GigameterToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToGigameter(GigameterToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToGigameter(GigameterToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToGigameter(GigameterToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToGigameter(GigameterToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToGigameter(GigameterToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToGigameter(GigameterToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToGigameter(GigameterToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToGigameter(GigameterToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToGigameter(GigameterToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToGigameter(GigameterToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToGigameter(GigameterToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToGigameter(GigameterToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToGigameter(GigameterToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToGigameter(GigameterToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToGigameter(GigameterToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToGigameter(GigameterToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToGigameter(GigameterToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToGigameter(GigameterToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToGigameter(GigameterToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToGigameter(GigameterToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToGigameter(GigameterToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToGigameter(GigameterToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToGigameter(GigameterToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
