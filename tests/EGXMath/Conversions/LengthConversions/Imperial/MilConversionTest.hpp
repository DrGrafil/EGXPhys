#pragma once

TEST_CASE("Mil Length Conversion"){

	//Zero
        //AU
    CHECK(MilToAstronomicalUnit(0.0) == 0.0);
    CHECK(MilToLightYear(0.0) == 0.0);
    CHECK(MilToParsec(0.0) == 0.0);

        //SI
    CHECK(MilToMeter(0.0) == 0.0);
    CHECK(MilToYottameter(0.0) == 0.0);
    CHECK(MilToZettameter(0.0) == 0.0);
    CHECK(MilToExameter(0.0) == 0.0);
    CHECK(MilToPetameter(0.0) == 0.0);
    CHECK(MilToTerameter(0.0) == 0.0);
    CHECK(MilToGigameter(0.0) == 0.0);
    CHECK(MilToMegameter(0.0) == 0.0);
    CHECK(MilToKilometer(0.0) == 0.0);
    CHECK(MilToHectometer(0.0) == 0.0);
    CHECK(MilToDecameter(0.0) == 0.0);
    CHECK(MilToDecimeter(0.0) == 0.0);
    CHECK(MilToCentimeter(0.0) == 0.0);
    CHECK(MilToMillimeter(0.0) == 0.0);
    CHECK(MilToMicrometer(0.0) == 0.0);
    CHECK(MilToNanometer(0.0) == 0.0);
    CHECK(MilToPicometer(0.0) == 0.0);
    CHECK(MilToFemtometer(0.0) == 0.0);
    CHECK(MilToAttometer(0.0) == 0.0);
    CHECK(MilToZeptometer(0.0) == 0.0);
    CHECK(MilToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(MilToAngstrom(0.0) == 0.0);
    CHECK(MilToFermi(0.0) == 0.0);
    CHECK(MilToMicron(0.0) == 0.0);
    CHECK(MilToCuXUnit(0.0) == 0.0);
    CHECK(MilToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(MilToMile(0.0) == 0.0);
    CHECK(MilToYard(0.0) == 0.0);
    CHECK(MilToFoot(0.0) == 0.0);
    CHECK(MilToInch(0.0) == 0.0);
    CHECK(MilToThou(0.0) == 0.0);

        //Nautical
    CHECK(MilToNauticalMile(0.0) == 0.0);
    CHECK(MilToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(MilToRod(0.0) == 0.0);
    CHECK(MilToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToMil(MilToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToMil(MilToLightYear(0.0) )== 0.0);
    CHECK(ParsecToMil(MilToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToMil(MilToMeter(0.0) )== 0.0);
    CHECK(YottameterToMil(MilToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToMil(MilToZettameter(0.0) )== 0.0);
    CHECK(ExameterToMil(MilToExameter(0.0) )== 0.0);
    CHECK(PetameterToMil(MilToPetameter(0.0) )== 0.0);
    CHECK(TerameterToMil(MilToTerameter(0.0) )== 0.0);
    CHECK(GigameterToMil(MilToGigameter(0.0) )== 0.0);
    CHECK(MegameterToMil(MilToMegameter(0.0) )== 0.0);
    CHECK(KilometerToMil(MilToKilometer(0.0) )== 0.0);
    CHECK(HectometerToMil(MilToHectometer(0.0) )== 0.0);
    CHECK(DecameterToMil(MilToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToMil(MilToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToMil(MilToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToMil(MilToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToMil(MilToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToMil(MilToNanometer(0.0) )== 0.0);
    CHECK(PicometerToMil(MilToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToMil(MilToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToMil(MilToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToMil(MilToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToMil(MilToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToMil(MilToAngstrom(0.0) )== 0.0);
    CHECK(FermiToMil(MilToFermi(0.0) )== 0.0);
    CHECK(MicronToMil(MilToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToMil(MilToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToMil(MilToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToMil(MilToMile(0.0) )== 0.0);
    CHECK(YardToMil(MilToYard(0.0) )== 0.0);
    CHECK(FootToMil(MilToFoot(0.0) )== 0.0);
    CHECK(InchToMil(MilToInch(0.0) )== 0.0);
    CHECK(ThouToMil(MilToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToMil(MilToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToMil(MilToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToMil(MilToRod(0.0) )== 0.0);
    CHECK(ChainToMil(MilToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToMil(MilToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToMil(MilToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToMil(MilToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToMil(MilToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToMil(MilToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToMil(MilToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToMil(MilToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToMil(MilToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToMil(MilToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToMil(MilToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToMil(MilToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToMil(MilToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToMil(MilToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToMil(MilToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToMil(MilToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToMil(MilToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToMil(MilToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToMil(MilToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToMil(MilToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToMil(MilToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToMil(MilToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToMil(MilToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToMil(MilToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToMil(MilToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToMil(MilToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToMil(MilToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToMil(MilToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToMil(MilToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToMil(MilToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToMil(MilToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToMil(MilToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToMil(MilToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToMil(MilToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToMil(MilToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToMil(MilToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToMil(MilToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToMil(MilToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToMil(MilToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
