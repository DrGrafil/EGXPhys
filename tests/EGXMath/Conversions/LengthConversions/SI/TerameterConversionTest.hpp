#pragma once

TEST_CASE("Terameter Length Conversion"){

	//Zero
        //AU
    CHECK(TerameterToAstronomicalUnit(0.0) == 0.0);
    CHECK(TerameterToLightYear(0.0) == 0.0);
    CHECK(TerameterToParsec(0.0) == 0.0);

        //SI
    CHECK(TerameterToMeter(0.0) == 0.0);
    CHECK(TerameterToYottameter(0.0) == 0.0);
    CHECK(TerameterToZettameter(0.0) == 0.0);
    CHECK(TerameterToExameter(0.0) == 0.0);
    CHECK(TerameterToPetameter(0.0) == 0.0);
    CHECK(TerameterToGigameter(0.0) == 0.0);
    CHECK(TerameterToMegameter(0.0) == 0.0);
    CHECK(TerameterToKilometer(0.0) == 0.0);
    CHECK(TerameterToHectometer(0.0) == 0.0);
    CHECK(TerameterToDecameter(0.0) == 0.0);
    CHECK(TerameterToDecimeter(0.0) == 0.0);
    CHECK(TerameterToCentimeter(0.0) == 0.0);
    CHECK(TerameterToMillimeter(0.0) == 0.0);
    CHECK(TerameterToMicrometer(0.0) == 0.0);
    CHECK(TerameterToNanometer(0.0) == 0.0);
    CHECK(TerameterToPicometer(0.0) == 0.0);
    CHECK(TerameterToFemtometer(0.0) == 0.0);
    CHECK(TerameterToAttometer(0.0) == 0.0);
    CHECK(TerameterToZeptometer(0.0) == 0.0);
    CHECK(TerameterToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(TerameterToAngstrom(0.0) == 0.0);
    CHECK(TerameterToFermi(0.0) == 0.0);
    CHECK(TerameterToMicron(0.0) == 0.0);
    CHECK(TerameterToCuXUnit(0.0) == 0.0);
    CHECK(TerameterToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(TerameterToMile(0.0) == 0.0);
    CHECK(TerameterToYard(0.0) == 0.0);
    CHECK(TerameterToFoot(0.0) == 0.0);
    CHECK(TerameterToInch(0.0) == 0.0);
    CHECK(TerameterToMil(0.0) == 0.0);
    CHECK(TerameterToThou(0.0) == 0.0);

        //Nautical
    CHECK(TerameterToNauticalMile(0.0) == 0.0);
    CHECK(TerameterToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(TerameterToRod(0.0) == 0.0);
    CHECK(TerameterToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToTerameter(TerameterToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToTerameter(TerameterToLightYear(0.0) )== 0.0);
    CHECK(ParsecToTerameter(TerameterToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToTerameter(TerameterToMeter(0.0) )== 0.0);
    CHECK(YottameterToTerameter(TerameterToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToTerameter(TerameterToZettameter(0.0) )== 0.0);
    CHECK(ExameterToTerameter(TerameterToExameter(0.0) )== 0.0);
    CHECK(PetameterToTerameter(TerameterToPetameter(0.0) )== 0.0);
    CHECK(GigameterToTerameter(TerameterToGigameter(0.0) )== 0.0);
    CHECK(MegameterToTerameter(TerameterToMegameter(0.0) )== 0.0);
    CHECK(KilometerToTerameter(TerameterToKilometer(0.0) )== 0.0);
    CHECK(HectometerToTerameter(TerameterToHectometer(0.0) )== 0.0);
    CHECK(DecameterToTerameter(TerameterToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToTerameter(TerameterToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToTerameter(TerameterToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToTerameter(TerameterToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToTerameter(TerameterToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToTerameter(TerameterToNanometer(0.0) )== 0.0);
    CHECK(PicometerToTerameter(TerameterToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToTerameter(TerameterToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToTerameter(TerameterToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToTerameter(TerameterToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToTerameter(TerameterToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToTerameter(TerameterToAngstrom(0.0) )== 0.0);
    CHECK(FermiToTerameter(TerameterToFermi(0.0) )== 0.0);
    CHECK(MicronToTerameter(TerameterToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToTerameter(TerameterToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToTerameter(TerameterToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToTerameter(TerameterToMile(0.0) )== 0.0);
    CHECK(YardToTerameter(TerameterToYard(0.0) )== 0.0);
    CHECK(FootToTerameter(TerameterToFoot(0.0) )== 0.0);
    CHECK(InchToTerameter(TerameterToInch(0.0) )== 0.0);
    CHECK(MilToTerameter(TerameterToMil(0.0) )== 0.0);
    CHECK(ThouToTerameter(TerameterToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToTerameter(TerameterToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToTerameter(TerameterToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToTerameter(TerameterToRod(0.0) )== 0.0);
    CHECK(ChainToTerameter(TerameterToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToTerameter(TerameterToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToTerameter(TerameterToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToTerameter(TerameterToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToTerameter(TerameterToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToTerameter(TerameterToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToTerameter(TerameterToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToTerameter(TerameterToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToTerameter(TerameterToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToTerameter(TerameterToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToTerameter(TerameterToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToTerameter(TerameterToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToTerameter(TerameterToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToTerameter(TerameterToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToTerameter(TerameterToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToTerameter(TerameterToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToTerameter(TerameterToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToTerameter(TerameterToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToTerameter(TerameterToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToTerameter(TerameterToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToTerameter(TerameterToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToTerameter(TerameterToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToTerameter(TerameterToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToTerameter(TerameterToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToTerameter(TerameterToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToTerameter(TerameterToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToTerameter(TerameterToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToTerameter(TerameterToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToTerameter(TerameterToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToTerameter(TerameterToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToTerameter(TerameterToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToTerameter(TerameterToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToTerameter(TerameterToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToTerameter(TerameterToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToTerameter(TerameterToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToTerameter(TerameterToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToTerameter(TerameterToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToTerameter(TerameterToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToTerameter(TerameterToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
