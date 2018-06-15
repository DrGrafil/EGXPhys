#pragma once

TEST_CASE("Zeptometer Length Conversion"){

	//Zero
        //AU
    CHECK(ZeptometerToAstronomicalUnit(0.0) == 0.0);
    CHECK(ZeptometerToLightYear(0.0) == 0.0);
    CHECK(ZeptometerToParsec(0.0) == 0.0);

        //SI
    CHECK(ZeptometerToMeter(0.0) == 0.0);
    CHECK(ZeptometerToYottameter(0.0) == 0.0);
    CHECK(ZeptometerToZettameter(0.0) == 0.0);
    CHECK(ZeptometerToExameter(0.0) == 0.0);
    CHECK(ZeptometerToPetameter(0.0) == 0.0);
    CHECK(ZeptometerToTerameter(0.0) == 0.0);
    CHECK(ZeptometerToGigameter(0.0) == 0.0);
    CHECK(ZeptometerToMegameter(0.0) == 0.0);
    CHECK(ZeptometerToKilometer(0.0) == 0.0);
    CHECK(ZeptometerToHectometer(0.0) == 0.0);
    CHECK(ZeptometerToDecameter(0.0) == 0.0);
    CHECK(ZeptometerToDecimeter(0.0) == 0.0);
    CHECK(ZeptometerToCentimeter(0.0) == 0.0);
    CHECK(ZeptometerToMillimeter(0.0) == 0.0);
    CHECK(ZeptometerToMicrometer(0.0) == 0.0);
    CHECK(ZeptometerToNanometer(0.0) == 0.0);
    CHECK(ZeptometerToPicometer(0.0) == 0.0);
    CHECK(ZeptometerToFemtometer(0.0) == 0.0);
    CHECK(ZeptometerToAttometer(0.0) == 0.0);
    CHECK(ZeptometerToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(ZeptometerToAngstrom(0.0) == 0.0);
    CHECK(ZeptometerToFermi(0.0) == 0.0);
    CHECK(ZeptometerToMicron(0.0) == 0.0);
    CHECK(ZeptometerToCuXUnit(0.0) == 0.0);
    CHECK(ZeptometerToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(ZeptometerToMile(0.0) == 0.0);
    CHECK(ZeptometerToYard(0.0) == 0.0);
    CHECK(ZeptometerToFoot(0.0) == 0.0);
    CHECK(ZeptometerToInch(0.0) == 0.0);
    CHECK(ZeptometerToMil(0.0) == 0.0);
    CHECK(ZeptometerToThou(0.0) == 0.0);

        //Nautical
    CHECK(ZeptometerToNauticalMile(0.0) == 0.0);
    CHECK(ZeptometerToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(ZeptometerToRod(0.0) == 0.0);
    CHECK(ZeptometerToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToZeptometer(ZeptometerToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToZeptometer(ZeptometerToLightYear(0.0) )== 0.0);
    CHECK(ParsecToZeptometer(ZeptometerToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToZeptometer(ZeptometerToMeter(0.0) )== 0.0);
    CHECK(YottameterToZeptometer(ZeptometerToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToZeptometer(ZeptometerToZettameter(0.0) )== 0.0);
    CHECK(ExameterToZeptometer(ZeptometerToExameter(0.0) )== 0.0);
    CHECK(PetameterToZeptometer(ZeptometerToPetameter(0.0) )== 0.0);
    CHECK(TerameterToZeptometer(ZeptometerToTerameter(0.0) )== 0.0);
    CHECK(GigameterToZeptometer(ZeptometerToGigameter(0.0) )== 0.0);
    CHECK(MegameterToZeptometer(ZeptometerToMegameter(0.0) )== 0.0);
    CHECK(KilometerToZeptometer(ZeptometerToKilometer(0.0) )== 0.0);
    CHECK(HectometerToZeptometer(ZeptometerToHectometer(0.0) )== 0.0);
    CHECK(DecameterToZeptometer(ZeptometerToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToZeptometer(ZeptometerToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToZeptometer(ZeptometerToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToZeptometer(ZeptometerToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToZeptometer(ZeptometerToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToZeptometer(ZeptometerToNanometer(0.0) )== 0.0);
    CHECK(PicometerToZeptometer(ZeptometerToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToZeptometer(ZeptometerToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToZeptometer(ZeptometerToAttometer(0.0) )== 0.0);
    CHECK(YoctometerToZeptometer(ZeptometerToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToZeptometer(ZeptometerToAngstrom(0.0) )== 0.0);
    CHECK(FermiToZeptometer(ZeptometerToFermi(0.0) )== 0.0);
    CHECK(MicronToZeptometer(ZeptometerToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToZeptometer(ZeptometerToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToZeptometer(ZeptometerToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToZeptometer(ZeptometerToMile(0.0) )== 0.0);
    CHECK(YardToZeptometer(ZeptometerToYard(0.0) )== 0.0);
    CHECK(FootToZeptometer(ZeptometerToFoot(0.0) )== 0.0);
    CHECK(InchToZeptometer(ZeptometerToInch(0.0) )== 0.0);
    CHECK(MilToZeptometer(ZeptometerToMil(0.0) )== 0.0);
    CHECK(ThouToZeptometer(ZeptometerToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToZeptometer(ZeptometerToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToZeptometer(ZeptometerToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToZeptometer(ZeptometerToRod(0.0) )== 0.0);
    CHECK(ChainToZeptometer(ZeptometerToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToZeptometer(ZeptometerToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToZeptometer(ZeptometerToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToZeptometer(ZeptometerToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToZeptometer(ZeptometerToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToZeptometer(ZeptometerToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToZeptometer(ZeptometerToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToZeptometer(ZeptometerToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToZeptometer(ZeptometerToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToZeptometer(ZeptometerToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToZeptometer(ZeptometerToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToZeptometer(ZeptometerToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToZeptometer(ZeptometerToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToZeptometer(ZeptometerToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToZeptometer(ZeptometerToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToZeptometer(ZeptometerToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToZeptometer(ZeptometerToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToZeptometer(ZeptometerToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToZeptometer(ZeptometerToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToZeptometer(ZeptometerToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToZeptometer(ZeptometerToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToZeptometer(ZeptometerToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToZeptometer(ZeptometerToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToZeptometer(ZeptometerToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToZeptometer(ZeptometerToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToZeptometer(ZeptometerToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToZeptometer(ZeptometerToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToZeptometer(ZeptometerToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToZeptometer(ZeptometerToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToZeptometer(ZeptometerToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToZeptometer(ZeptometerToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToZeptometer(ZeptometerToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToZeptometer(ZeptometerToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToZeptometer(ZeptometerToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToZeptometer(ZeptometerToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToZeptometer(ZeptometerToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToZeptometer(ZeptometerToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToZeptometer(ZeptometerToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToZeptometer(ZeptometerToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
