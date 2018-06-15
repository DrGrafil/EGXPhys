#pragma once

TEST_CASE("Nanometer Length Conversion"){

	//Zero
        //AU
    CHECK(NanometerToAstronomicalUnit(0.0) == 0.0);
    CHECK(NanometerToLightYear(0.0) == 0.0);
    CHECK(NanometerToParsec(0.0) == 0.0);

        //SI
    CHECK(NanometerToMeter(0.0) == 0.0);
    CHECK(NanometerToYottameter(0.0) == 0.0);
    CHECK(NanometerToZettameter(0.0) == 0.0);
    CHECK(NanometerToExameter(0.0) == 0.0);
    CHECK(NanometerToPetameter(0.0) == 0.0);
    CHECK(NanometerToTerameter(0.0) == 0.0);
    CHECK(NanometerToGigameter(0.0) == 0.0);
    CHECK(NanometerToMegameter(0.0) == 0.0);
    CHECK(NanometerToKilometer(0.0) == 0.0);
    CHECK(NanometerToHectometer(0.0) == 0.0);
    CHECK(NanometerToDecameter(0.0) == 0.0);
    CHECK(NanometerToDecimeter(0.0) == 0.0);
    CHECK(NanometerToCentimeter(0.0) == 0.0);
    CHECK(NanometerToMillimeter(0.0) == 0.0);
    CHECK(NanometerToMicrometer(0.0) == 0.0);
    CHECK(NanometerToPicometer(0.0) == 0.0);
    CHECK(NanometerToFemtometer(0.0) == 0.0);
    CHECK(NanometerToAttometer(0.0) == 0.0);
    CHECK(NanometerToZeptometer(0.0) == 0.0);
    CHECK(NanometerToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(NanometerToAngstrom(0.0) == 0.0);
    CHECK(NanometerToFermi(0.0) == 0.0);
    CHECK(NanometerToMicron(0.0) == 0.0);
    CHECK(NanometerToCuXUnit(0.0) == 0.0);
    CHECK(NanometerToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(NanometerToMile(0.0) == 0.0);
    CHECK(NanometerToYard(0.0) == 0.0);
    CHECK(NanometerToFoot(0.0) == 0.0);
    CHECK(NanometerToInch(0.0) == 0.0);
    CHECK(NanometerToMil(0.0) == 0.0);
    CHECK(NanometerToThou(0.0) == 0.0);

        //Nautical
    CHECK(NanometerToNauticalMile(0.0) == 0.0);
    CHECK(NanometerToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(NanometerToRod(0.0) == 0.0);
    CHECK(NanometerToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToNanometer(NanometerToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToNanometer(NanometerToLightYear(0.0) )== 0.0);
    CHECK(ParsecToNanometer(NanometerToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToNanometer(NanometerToMeter(0.0) )== 0.0);
    CHECK(YottameterToNanometer(NanometerToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToNanometer(NanometerToZettameter(0.0) )== 0.0);
    CHECK(ExameterToNanometer(NanometerToExameter(0.0) )== 0.0);
    CHECK(PetameterToNanometer(NanometerToPetameter(0.0) )== 0.0);
    CHECK(TerameterToNanometer(NanometerToTerameter(0.0) )== 0.0);
    CHECK(GigameterToNanometer(NanometerToGigameter(0.0) )== 0.0);
    CHECK(MegameterToNanometer(NanometerToMegameter(0.0) )== 0.0);
    CHECK(KilometerToNanometer(NanometerToKilometer(0.0) )== 0.0);
    CHECK(HectometerToNanometer(NanometerToHectometer(0.0) )== 0.0);
    CHECK(DecameterToNanometer(NanometerToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToNanometer(NanometerToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToNanometer(NanometerToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToNanometer(NanometerToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToNanometer(NanometerToMicrometer(0.0) )== 0.0);
    CHECK(PicometerToNanometer(NanometerToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToNanometer(NanometerToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToNanometer(NanometerToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToNanometer(NanometerToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToNanometer(NanometerToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToNanometer(NanometerToAngstrom(0.0) )== 0.0);
    CHECK(FermiToNanometer(NanometerToFermi(0.0) )== 0.0);
    CHECK(MicronToNanometer(NanometerToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToNanometer(NanometerToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToNanometer(NanometerToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToNanometer(NanometerToMile(0.0) )== 0.0);
    CHECK(YardToNanometer(NanometerToYard(0.0) )== 0.0);
    CHECK(FootToNanometer(NanometerToFoot(0.0) )== 0.0);
    CHECK(InchToNanometer(NanometerToInch(0.0) )== 0.0);
    CHECK(MilToNanometer(NanometerToMil(0.0) )== 0.0);
    CHECK(ThouToNanometer(NanometerToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToNanometer(NanometerToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToNanometer(NanometerToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToNanometer(NanometerToRod(0.0) )== 0.0);
    CHECK(ChainToNanometer(NanometerToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToNanometer(NanometerToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToNanometer(NanometerToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToNanometer(NanometerToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToNanometer(NanometerToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToNanometer(NanometerToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToNanometer(NanometerToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToNanometer(NanometerToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToNanometer(NanometerToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToNanometer(NanometerToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToNanometer(NanometerToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToNanometer(NanometerToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToNanometer(NanometerToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToNanometer(NanometerToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToNanometer(NanometerToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToNanometer(NanometerToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToNanometer(NanometerToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToNanometer(NanometerToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToNanometer(NanometerToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToNanometer(NanometerToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToNanometer(NanometerToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToNanometer(NanometerToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToNanometer(NanometerToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToNanometer(NanometerToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToNanometer(NanometerToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToNanometer(NanometerToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToNanometer(NanometerToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToNanometer(NanometerToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToNanometer(NanometerToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToNanometer(NanometerToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToNanometer(NanometerToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToNanometer(NanometerToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToNanometer(NanometerToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToNanometer(NanometerToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToNanometer(NanometerToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToNanometer(NanometerToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToNanometer(NanometerToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToNanometer(NanometerToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToNanometer(NanometerToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
