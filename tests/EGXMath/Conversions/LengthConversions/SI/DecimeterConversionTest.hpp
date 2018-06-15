#pragma once

TEST_CASE("Decimeter Length Conversion"){

	//Zero
        //AU
    CHECK(DecimeterToAstronomicalUnit(0.0) == 0.0);
    CHECK(DecimeterToLightYear(0.0) == 0.0);
    CHECK(DecimeterToParsec(0.0) == 0.0);

        //SI
    CHECK(DecimeterToMeter(0.0) == 0.0);
    CHECK(DecimeterToYottameter(0.0) == 0.0);
    CHECK(DecimeterToZettameter(0.0) == 0.0);
    CHECK(DecimeterToExameter(0.0) == 0.0);
    CHECK(DecimeterToPetameter(0.0) == 0.0);
    CHECK(DecimeterToTerameter(0.0) == 0.0);
    CHECK(DecimeterToGigameter(0.0) == 0.0);
    CHECK(DecimeterToMegameter(0.0) == 0.0);
    CHECK(DecimeterToKilometer(0.0) == 0.0);
    CHECK(DecimeterToHectometer(0.0) == 0.0);
    CHECK(DecimeterToDecameter(0.0) == 0.0);
    CHECK(DecimeterToCentimeter(0.0) == 0.0);
    CHECK(DecimeterToMillimeter(0.0) == 0.0);
    CHECK(DecimeterToMicrometer(0.0) == 0.0);
    CHECK(DecimeterToNanometer(0.0) == 0.0);
    CHECK(DecimeterToPicometer(0.0) == 0.0);
    CHECK(DecimeterToFemtometer(0.0) == 0.0);
    CHECK(DecimeterToAttometer(0.0) == 0.0);
    CHECK(DecimeterToZeptometer(0.0) == 0.0);
    CHECK(DecimeterToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(DecimeterToAngstrom(0.0) == 0.0);
    CHECK(DecimeterToFermi(0.0) == 0.0);
    CHECK(DecimeterToMicron(0.0) == 0.0);
    CHECK(DecimeterToCuXUnit(0.0) == 0.0);
    CHECK(DecimeterToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(DecimeterToMile(0.0) == 0.0);
    CHECK(DecimeterToYard(0.0) == 0.0);
    CHECK(DecimeterToFoot(0.0) == 0.0);
    CHECK(DecimeterToInch(0.0) == 0.0);
    CHECK(DecimeterToMil(0.0) == 0.0);
    CHECK(DecimeterToThou(0.0) == 0.0);

        //Nautical
    CHECK(DecimeterToNauticalMile(0.0) == 0.0);
    CHECK(DecimeterToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(DecimeterToRod(0.0) == 0.0);
    CHECK(DecimeterToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToDecimeter(DecimeterToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToDecimeter(DecimeterToLightYear(0.0) )== 0.0);
    CHECK(ParsecToDecimeter(DecimeterToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToDecimeter(DecimeterToMeter(0.0) )== 0.0);
    CHECK(YottameterToDecimeter(DecimeterToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToDecimeter(DecimeterToZettameter(0.0) )== 0.0);
    CHECK(ExameterToDecimeter(DecimeterToExameter(0.0) )== 0.0);
    CHECK(PetameterToDecimeter(DecimeterToPetameter(0.0) )== 0.0);
    CHECK(TerameterToDecimeter(DecimeterToTerameter(0.0) )== 0.0);
    CHECK(GigameterToDecimeter(DecimeterToGigameter(0.0) )== 0.0);
    CHECK(MegameterToDecimeter(DecimeterToMegameter(0.0) )== 0.0);
    CHECK(KilometerToDecimeter(DecimeterToKilometer(0.0) )== 0.0);
    CHECK(HectometerToDecimeter(DecimeterToHectometer(0.0) )== 0.0);
    CHECK(DecameterToDecimeter(DecimeterToDecameter(0.0) )== 0.0);
    CHECK(CentimeterToDecimeter(DecimeterToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToDecimeter(DecimeterToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToDecimeter(DecimeterToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToDecimeter(DecimeterToNanometer(0.0) )== 0.0);
    CHECK(PicometerToDecimeter(DecimeterToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToDecimeter(DecimeterToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToDecimeter(DecimeterToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToDecimeter(DecimeterToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToDecimeter(DecimeterToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToDecimeter(DecimeterToAngstrom(0.0) )== 0.0);
    CHECK(FermiToDecimeter(DecimeterToFermi(0.0) )== 0.0);
    CHECK(MicronToDecimeter(DecimeterToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToDecimeter(DecimeterToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToDecimeter(DecimeterToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToDecimeter(DecimeterToMile(0.0) )== 0.0);
    CHECK(YardToDecimeter(DecimeterToYard(0.0) )== 0.0);
    CHECK(FootToDecimeter(DecimeterToFoot(0.0) )== 0.0);
    CHECK(InchToDecimeter(DecimeterToInch(0.0) )== 0.0);
    CHECK(MilToDecimeter(DecimeterToMil(0.0) )== 0.0);
    CHECK(ThouToDecimeter(DecimeterToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToDecimeter(DecimeterToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToDecimeter(DecimeterToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToDecimeter(DecimeterToRod(0.0) )== 0.0);
    CHECK(ChainToDecimeter(DecimeterToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToDecimeter(DecimeterToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToDecimeter(DecimeterToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToDecimeter(DecimeterToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToDecimeter(DecimeterToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToDecimeter(DecimeterToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToDecimeter(DecimeterToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToDecimeter(DecimeterToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToDecimeter(DecimeterToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToDecimeter(DecimeterToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToDecimeter(DecimeterToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToDecimeter(DecimeterToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToDecimeter(DecimeterToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToDecimeter(DecimeterToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToDecimeter(DecimeterToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToDecimeter(DecimeterToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToDecimeter(DecimeterToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToDecimeter(DecimeterToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToDecimeter(DecimeterToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToDecimeter(DecimeterToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToDecimeter(DecimeterToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToDecimeter(DecimeterToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToDecimeter(DecimeterToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToDecimeter(DecimeterToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToDecimeter(DecimeterToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToDecimeter(DecimeterToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToDecimeter(DecimeterToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToDecimeter(DecimeterToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToDecimeter(DecimeterToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToDecimeter(DecimeterToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToDecimeter(DecimeterToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToDecimeter(DecimeterToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToDecimeter(DecimeterToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToDecimeter(DecimeterToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToDecimeter(DecimeterToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToDecimeter(DecimeterToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToDecimeter(DecimeterToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToDecimeter(DecimeterToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToDecimeter(DecimeterToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
