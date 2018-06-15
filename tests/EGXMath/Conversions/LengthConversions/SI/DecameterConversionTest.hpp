#pragma once

TEST_CASE("Decameter Length Conversion"){

	//Zero
        //AU
    CHECK(DecameterToAstronomicalUnit(0.0) == 0.0);
    CHECK(DecameterToLightYear(0.0) == 0.0);
    CHECK(DecameterToParsec(0.0) == 0.0);

        //SI
    CHECK(DecameterToMeter(0.0) == 0.0);
    CHECK(DecameterToYottameter(0.0) == 0.0);
    CHECK(DecameterToZettameter(0.0) == 0.0);
    CHECK(DecameterToExameter(0.0) == 0.0);
    CHECK(DecameterToPetameter(0.0) == 0.0);
    CHECK(DecameterToTerameter(0.0) == 0.0);
    CHECK(DecameterToGigameter(0.0) == 0.0);
    CHECK(DecameterToMegameter(0.0) == 0.0);
    CHECK(DecameterToKilometer(0.0) == 0.0);
    CHECK(DecameterToHectometer(0.0) == 0.0);
    CHECK(DecameterToDecimeter(0.0) == 0.0);
    CHECK(DecameterToCentimeter(0.0) == 0.0);
    CHECK(DecameterToMillimeter(0.0) == 0.0);
    CHECK(DecameterToMicrometer(0.0) == 0.0);
    CHECK(DecameterToNanometer(0.0) == 0.0);
    CHECK(DecameterToPicometer(0.0) == 0.0);
    CHECK(DecameterToFemtometer(0.0) == 0.0);
    CHECK(DecameterToAttometer(0.0) == 0.0);
    CHECK(DecameterToZeptometer(0.0) == 0.0);
    CHECK(DecameterToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(DecameterToAngstrom(0.0) == 0.0);
    CHECK(DecameterToFermi(0.0) == 0.0);
    CHECK(DecameterToMicron(0.0) == 0.0);
    CHECK(DecameterToCuXUnit(0.0) == 0.0);
    CHECK(DecameterToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(DecameterToMile(0.0) == 0.0);
    CHECK(DecameterToYard(0.0) == 0.0);
    CHECK(DecameterToFoot(0.0) == 0.0);
    CHECK(DecameterToInch(0.0) == 0.0);
    CHECK(DecameterToMil(0.0) == 0.0);
    CHECK(DecameterToThou(0.0) == 0.0);

        //Nautical
    CHECK(DecameterToNauticalMile(0.0) == 0.0);
    CHECK(DecameterToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(DecameterToRod(0.0) == 0.0);
    CHECK(DecameterToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToDecameter(DecameterToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToDecameter(DecameterToLightYear(0.0) )== 0.0);
    CHECK(ParsecToDecameter(DecameterToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToDecameter(DecameterToMeter(0.0) )== 0.0);
    CHECK(YottameterToDecameter(DecameterToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToDecameter(DecameterToZettameter(0.0) )== 0.0);
    CHECK(ExameterToDecameter(DecameterToExameter(0.0) )== 0.0);
    CHECK(PetameterToDecameter(DecameterToPetameter(0.0) )== 0.0);
    CHECK(TerameterToDecameter(DecameterToTerameter(0.0) )== 0.0);
    CHECK(GigameterToDecameter(DecameterToGigameter(0.0) )== 0.0);
    CHECK(MegameterToDecameter(DecameterToMegameter(0.0) )== 0.0);
    CHECK(KilometerToDecameter(DecameterToKilometer(0.0) )== 0.0);
    CHECK(HectometerToDecameter(DecameterToHectometer(0.0) )== 0.0);
    CHECK(DecimeterToDecameter(DecameterToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToDecameter(DecameterToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToDecameter(DecameterToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToDecameter(DecameterToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToDecameter(DecameterToNanometer(0.0) )== 0.0);
    CHECK(PicometerToDecameter(DecameterToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToDecameter(DecameterToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToDecameter(DecameterToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToDecameter(DecameterToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToDecameter(DecameterToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToDecameter(DecameterToAngstrom(0.0) )== 0.0);
    CHECK(FermiToDecameter(DecameterToFermi(0.0) )== 0.0);
    CHECK(MicronToDecameter(DecameterToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToDecameter(DecameterToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToDecameter(DecameterToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToDecameter(DecameterToMile(0.0) )== 0.0);
    CHECK(YardToDecameter(DecameterToYard(0.0) )== 0.0);
    CHECK(FootToDecameter(DecameterToFoot(0.0) )== 0.0);
    CHECK(InchToDecameter(DecameterToInch(0.0) )== 0.0);
    CHECK(MilToDecameter(DecameterToMil(0.0) )== 0.0);
    CHECK(ThouToDecameter(DecameterToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToDecameter(DecameterToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToDecameter(DecameterToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToDecameter(DecameterToRod(0.0) )== 0.0);
    CHECK(ChainToDecameter(DecameterToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToDecameter(DecameterToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToDecameter(DecameterToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToDecameter(DecameterToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToDecameter(DecameterToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToDecameter(DecameterToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToDecameter(DecameterToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToDecameter(DecameterToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToDecameter(DecameterToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToDecameter(DecameterToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToDecameter(DecameterToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToDecameter(DecameterToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToDecameter(DecameterToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToDecameter(DecameterToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToDecameter(DecameterToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToDecameter(DecameterToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToDecameter(DecameterToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToDecameter(DecameterToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToDecameter(DecameterToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToDecameter(DecameterToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToDecameter(DecameterToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToDecameter(DecameterToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToDecameter(DecameterToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToDecameter(DecameterToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToDecameter(DecameterToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToDecameter(DecameterToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToDecameter(DecameterToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToDecameter(DecameterToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToDecameter(DecameterToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToDecameter(DecameterToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToDecameter(DecameterToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToDecameter(DecameterToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToDecameter(DecameterToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToDecameter(DecameterToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToDecameter(DecameterToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToDecameter(DecameterToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToDecameter(DecameterToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToDecameter(DecameterToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToDecameter(DecameterToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
