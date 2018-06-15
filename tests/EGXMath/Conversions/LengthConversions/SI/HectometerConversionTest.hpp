#pragma once

TEST_CASE("Hectometer Length Conversion"){

	//Zero
        //AU
    CHECK(HectometerToAstronomicalUnit(0.0) == 0.0);
    CHECK(HectometerToLightYear(0.0) == 0.0);
    CHECK(HectometerToParsec(0.0) == 0.0);

        //SI
    CHECK(HectometerToMeter(0.0) == 0.0);
    CHECK(HectometerToYottameter(0.0) == 0.0);
    CHECK(HectometerToZettameter(0.0) == 0.0);
    CHECK(HectometerToExameter(0.0) == 0.0);
    CHECK(HectometerToPetameter(0.0) == 0.0);
    CHECK(HectometerToTerameter(0.0) == 0.0);
    CHECK(HectometerToGigameter(0.0) == 0.0);
    CHECK(HectometerToMegameter(0.0) == 0.0);
    CHECK(HectometerToKilometer(0.0) == 0.0);
    CHECK(HectometerToDecameter(0.0) == 0.0);
    CHECK(HectometerToDecimeter(0.0) == 0.0);
    CHECK(HectometerToCentimeter(0.0) == 0.0);
    CHECK(HectometerToMillimeter(0.0) == 0.0);
    CHECK(HectometerToMicrometer(0.0) == 0.0);
    CHECK(HectometerToNanometer(0.0) == 0.0);
    CHECK(HectometerToPicometer(0.0) == 0.0);
    CHECK(HectometerToFemtometer(0.0) == 0.0);
    CHECK(HectometerToAttometer(0.0) == 0.0);
    CHECK(HectometerToZeptometer(0.0) == 0.0);
    CHECK(HectometerToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(HectometerToAngstrom(0.0) == 0.0);
    CHECK(HectometerToFermi(0.0) == 0.0);
    CHECK(HectometerToMicron(0.0) == 0.0);
    CHECK(HectometerToCuXUnit(0.0) == 0.0);
    CHECK(HectometerToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(HectometerToMile(0.0) == 0.0);
    CHECK(HectometerToYard(0.0) == 0.0);
    CHECK(HectometerToFoot(0.0) == 0.0);
    CHECK(HectometerToInch(0.0) == 0.0);
    CHECK(HectometerToMil(0.0) == 0.0);
    CHECK(HectometerToThou(0.0) == 0.0);

        //Nautical
    CHECK(HectometerToNauticalMile(0.0) == 0.0);
    CHECK(HectometerToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(HectometerToRod(0.0) == 0.0);
    CHECK(HectometerToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToHectometer(HectometerToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToHectometer(HectometerToLightYear(0.0) )== 0.0);
    CHECK(ParsecToHectometer(HectometerToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToHectometer(HectometerToMeter(0.0) )== 0.0);
    CHECK(YottameterToHectometer(HectometerToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToHectometer(HectometerToZettameter(0.0) )== 0.0);
    CHECK(ExameterToHectometer(HectometerToExameter(0.0) )== 0.0);
    CHECK(PetameterToHectometer(HectometerToPetameter(0.0) )== 0.0);
    CHECK(TerameterToHectometer(HectometerToTerameter(0.0) )== 0.0);
    CHECK(GigameterToHectometer(HectometerToGigameter(0.0) )== 0.0);
    CHECK(MegameterToHectometer(HectometerToMegameter(0.0) )== 0.0);
    CHECK(KilometerToHectometer(HectometerToKilometer(0.0) )== 0.0);
    CHECK(DecameterToHectometer(HectometerToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToHectometer(HectometerToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToHectometer(HectometerToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToHectometer(HectometerToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToHectometer(HectometerToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToHectometer(HectometerToNanometer(0.0) )== 0.0);
    CHECK(PicometerToHectometer(HectometerToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToHectometer(HectometerToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToHectometer(HectometerToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToHectometer(HectometerToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToHectometer(HectometerToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToHectometer(HectometerToAngstrom(0.0) )== 0.0);
    CHECK(FermiToHectometer(HectometerToFermi(0.0) )== 0.0);
    CHECK(MicronToHectometer(HectometerToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToHectometer(HectometerToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToHectometer(HectometerToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToHectometer(HectometerToMile(0.0) )== 0.0);
    CHECK(YardToHectometer(HectometerToYard(0.0) )== 0.0);
    CHECK(FootToHectometer(HectometerToFoot(0.0) )== 0.0);
    CHECK(InchToHectometer(HectometerToInch(0.0) )== 0.0);
    CHECK(MilToHectometer(HectometerToMil(0.0) )== 0.0);
    CHECK(ThouToHectometer(HectometerToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToHectometer(HectometerToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToHectometer(HectometerToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToHectometer(HectometerToRod(0.0) )== 0.0);
    CHECK(ChainToHectometer(HectometerToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToHectometer(HectometerToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToHectometer(HectometerToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToHectometer(HectometerToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToHectometer(HectometerToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToHectometer(HectometerToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToHectometer(HectometerToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToHectometer(HectometerToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToHectometer(HectometerToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToHectometer(HectometerToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToHectometer(HectometerToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToHectometer(HectometerToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToHectometer(HectometerToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToHectometer(HectometerToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToHectometer(HectometerToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToHectometer(HectometerToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToHectometer(HectometerToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToHectometer(HectometerToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToHectometer(HectometerToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToHectometer(HectometerToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToHectometer(HectometerToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToHectometer(HectometerToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToHectometer(HectometerToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToHectometer(HectometerToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToHectometer(HectometerToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToHectometer(HectometerToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToHectometer(HectometerToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToHectometer(HectometerToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToHectometer(HectometerToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToHectometer(HectometerToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToHectometer(HectometerToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToHectometer(HectometerToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToHectometer(HectometerToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToHectometer(HectometerToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToHectometer(HectometerToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToHectometer(HectometerToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToHectometer(HectometerToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToHectometer(HectometerToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToHectometer(HectometerToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
