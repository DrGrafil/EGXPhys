#pragma once

TEST_CASE("Femtometer Length Conversion"){

	//Zero
        //AU
    CHECK(FemtometerToAstronomicalUnit(0.0) == 0.0);
    CHECK(FemtometerToLightYear(0.0) == 0.0);
    CHECK(FemtometerToParsec(0.0) == 0.0);

        //SI
    CHECK(FemtometerToMeter(0.0) == 0.0);
    CHECK(FemtometerToYottameter(0.0) == 0.0);
    CHECK(FemtometerToZettameter(0.0) == 0.0);
    CHECK(FemtometerToExameter(0.0) == 0.0);
    CHECK(FemtometerToPetameter(0.0) == 0.0);
    CHECK(FemtometerToTerameter(0.0) == 0.0);
    CHECK(FemtometerToGigameter(0.0) == 0.0);
    CHECK(FemtometerToMegameter(0.0) == 0.0);
    CHECK(FemtometerToKilometer(0.0) == 0.0);
    CHECK(FemtometerToHectometer(0.0) == 0.0);
    CHECK(FemtometerToDecameter(0.0) == 0.0);
    CHECK(FemtometerToDecimeter(0.0) == 0.0);
    CHECK(FemtometerToCentimeter(0.0) == 0.0);
    CHECK(FemtometerToMillimeter(0.0) == 0.0);
    CHECK(FemtometerToMicrometer(0.0) == 0.0);
    CHECK(FemtometerToNanometer(0.0) == 0.0);
    CHECK(FemtometerToPicometer(0.0) == 0.0);
    CHECK(FemtometerToAttometer(0.0) == 0.0);
    CHECK(FemtometerToZeptometer(0.0) == 0.0);
    CHECK(FemtometerToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(FemtometerToAngstrom(0.0) == 0.0);
    CHECK(FemtometerToFermi(0.0) == 0.0);
    CHECK(FemtometerToMicron(0.0) == 0.0);
    CHECK(FemtometerToCuXUnit(0.0) == 0.0);
    CHECK(FemtometerToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(FemtometerToMile(0.0) == 0.0);
    CHECK(FemtometerToYard(0.0) == 0.0);
    CHECK(FemtometerToFoot(0.0) == 0.0);
    CHECK(FemtometerToInch(0.0) == 0.0);
    CHECK(FemtometerToMil(0.0) == 0.0);
    CHECK(FemtometerToThou(0.0) == 0.0);

        //Nautical
    CHECK(FemtometerToNauticalMile(0.0) == 0.0);
    CHECK(FemtometerToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(FemtometerToRod(0.0) == 0.0);
    CHECK(FemtometerToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToFemtometer(FemtometerToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToFemtometer(FemtometerToLightYear(0.0) )== 0.0);
    CHECK(ParsecToFemtometer(FemtometerToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToFemtometer(FemtometerToMeter(0.0) )== 0.0);
    CHECK(YottameterToFemtometer(FemtometerToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToFemtometer(FemtometerToZettameter(0.0) )== 0.0);
    CHECK(ExameterToFemtometer(FemtometerToExameter(0.0) )== 0.0);
    CHECK(PetameterToFemtometer(FemtometerToPetameter(0.0) )== 0.0);
    CHECK(TerameterToFemtometer(FemtometerToTerameter(0.0) )== 0.0);
    CHECK(GigameterToFemtometer(FemtometerToGigameter(0.0) )== 0.0);
    CHECK(MegameterToFemtometer(FemtometerToMegameter(0.0) )== 0.0);
    CHECK(KilometerToFemtometer(FemtometerToKilometer(0.0) )== 0.0);
    CHECK(HectometerToFemtometer(FemtometerToHectometer(0.0) )== 0.0);
    CHECK(DecameterToFemtometer(FemtometerToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToFemtometer(FemtometerToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToFemtometer(FemtometerToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToFemtometer(FemtometerToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToFemtometer(FemtometerToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToFemtometer(FemtometerToNanometer(0.0) )== 0.0);
    CHECK(PicometerToFemtometer(FemtometerToPicometer(0.0) )== 0.0);
    CHECK(AttometerToFemtometer(FemtometerToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToFemtometer(FemtometerToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToFemtometer(FemtometerToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToFemtometer(FemtometerToAngstrom(0.0) )== 0.0);
    CHECK(FermiToFemtometer(FemtometerToFermi(0.0) )== 0.0);
    CHECK(MicronToFemtometer(FemtometerToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToFemtometer(FemtometerToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToFemtometer(FemtometerToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToFemtometer(FemtometerToMile(0.0) )== 0.0);
    CHECK(YardToFemtometer(FemtometerToYard(0.0) )== 0.0);
    CHECK(FootToFemtometer(FemtometerToFoot(0.0) )== 0.0);
    CHECK(InchToFemtometer(FemtometerToInch(0.0) )== 0.0);
    CHECK(MilToFemtometer(FemtometerToMil(0.0) )== 0.0);
    CHECK(ThouToFemtometer(FemtometerToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToFemtometer(FemtometerToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToFemtometer(FemtometerToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToFemtometer(FemtometerToRod(0.0) )== 0.0);
    CHECK(ChainToFemtometer(FemtometerToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToFemtometer(FemtometerToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToFemtometer(FemtometerToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToFemtometer(FemtometerToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToFemtometer(FemtometerToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToFemtometer(FemtometerToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToFemtometer(FemtometerToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToFemtometer(FemtometerToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToFemtometer(FemtometerToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToFemtometer(FemtometerToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToFemtometer(FemtometerToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToFemtometer(FemtometerToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToFemtometer(FemtometerToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToFemtometer(FemtometerToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToFemtometer(FemtometerToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToFemtometer(FemtometerToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToFemtometer(FemtometerToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToFemtometer(FemtometerToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToFemtometer(FemtometerToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToFemtometer(FemtometerToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToFemtometer(FemtometerToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToFemtometer(FemtometerToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToFemtometer(FemtometerToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToFemtometer(FemtometerToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToFemtometer(FemtometerToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToFemtometer(FemtometerToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToFemtometer(FemtometerToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToFemtometer(FemtometerToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToFemtometer(FemtometerToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToFemtometer(FemtometerToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToFemtometer(FemtometerToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToFemtometer(FemtometerToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToFemtometer(FemtometerToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToFemtometer(FemtometerToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToFemtometer(FemtometerToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToFemtometer(FemtometerToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToFemtometer(FemtometerToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToFemtometer(FemtometerToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToFemtometer(FemtometerToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
