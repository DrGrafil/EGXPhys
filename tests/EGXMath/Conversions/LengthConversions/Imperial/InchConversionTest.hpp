#pragma once

TEST_CASE("Inch Length Conversion"){

	//Zero
        //AU
    CHECK(InchToAstronomicalUnit(0.0) == 0.0);
    CHECK(InchToLightYear(0.0) == 0.0);
    CHECK(InchToParsec(0.0) == 0.0);

        //SI
    CHECK(InchToMeter(0.0) == 0.0);
    CHECK(InchToYottameter(0.0) == 0.0);
    CHECK(InchToZettameter(0.0) == 0.0);
    CHECK(InchToExameter(0.0) == 0.0);
    CHECK(InchToPetameter(0.0) == 0.0);
    CHECK(InchToTerameter(0.0) == 0.0);
    CHECK(InchToGigameter(0.0) == 0.0);
    CHECK(InchToMegameter(0.0) == 0.0);
    CHECK(InchToKilometer(0.0) == 0.0);
    CHECK(InchToHectometer(0.0) == 0.0);
    CHECK(InchToDecameter(0.0) == 0.0);
    CHECK(InchToDecimeter(0.0) == 0.0);
    CHECK(InchToCentimeter(0.0) == 0.0);
    CHECK(InchToMillimeter(0.0) == 0.0);
    CHECK(InchToMicrometer(0.0) == 0.0);
    CHECK(InchToNanometer(0.0) == 0.0);
    CHECK(InchToPicometer(0.0) == 0.0);
    CHECK(InchToFemtometer(0.0) == 0.0);
    CHECK(InchToAttometer(0.0) == 0.0);
    CHECK(InchToZeptometer(0.0) == 0.0);
    CHECK(InchToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(InchToAngstrom(0.0) == 0.0);
    CHECK(InchToFermi(0.0) == 0.0);
    CHECK(InchToMicron(0.0) == 0.0);
    CHECK(InchToCuXUnit(0.0) == 0.0);
    CHECK(InchToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(InchToMile(0.0) == 0.0);
    CHECK(InchToYard(0.0) == 0.0);
    CHECK(InchToFoot(0.0) == 0.0);
    CHECK(InchToMil(0.0) == 0.0);
    CHECK(InchToThou(0.0) == 0.0);

        //Nautical
    CHECK(InchToNauticalMile(0.0) == 0.0);
    CHECK(InchToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(InchToRod(0.0) == 0.0);
    CHECK(InchToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToInch(InchToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToInch(InchToLightYear(0.0) )== 0.0);
    CHECK(ParsecToInch(InchToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToInch(InchToMeter(0.0) )== 0.0);
    CHECK(YottameterToInch(InchToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToInch(InchToZettameter(0.0) )== 0.0);
    CHECK(ExameterToInch(InchToExameter(0.0) )== 0.0);
    CHECK(PetameterToInch(InchToPetameter(0.0) )== 0.0);
    CHECK(TerameterToInch(InchToTerameter(0.0) )== 0.0);
    CHECK(GigameterToInch(InchToGigameter(0.0) )== 0.0);
    CHECK(MegameterToInch(InchToMegameter(0.0) )== 0.0);
    CHECK(KilometerToInch(InchToKilometer(0.0) )== 0.0);
    CHECK(HectometerToInch(InchToHectometer(0.0) )== 0.0);
    CHECK(DecameterToInch(InchToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToInch(InchToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToInch(InchToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToInch(InchToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToInch(InchToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToInch(InchToNanometer(0.0) )== 0.0);
    CHECK(PicometerToInch(InchToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToInch(InchToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToInch(InchToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToInch(InchToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToInch(InchToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToInch(InchToAngstrom(0.0) )== 0.0);
    CHECK(FermiToInch(InchToFermi(0.0) )== 0.0);
    CHECK(MicronToInch(InchToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToInch(InchToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToInch(InchToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToInch(InchToMile(0.0) )== 0.0);
    CHECK(YardToInch(InchToYard(0.0) )== 0.0);
    CHECK(FootToInch(InchToFoot(0.0) )== 0.0);
    CHECK(MilToInch(InchToMil(0.0) )== 0.0);
    CHECK(ThouToInch(InchToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToInch(InchToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToInch(InchToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToInch(InchToRod(0.0) )== 0.0);
    CHECK(ChainToInch(InchToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToInch(InchToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToInch(InchToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToInch(InchToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToInch(InchToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToInch(InchToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToInch(InchToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToInch(InchToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToInch(InchToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToInch(InchToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToInch(InchToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToInch(InchToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToInch(InchToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToInch(InchToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToInch(InchToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToInch(InchToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToInch(InchToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToInch(InchToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToInch(InchToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToInch(InchToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToInch(InchToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToInch(InchToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToInch(InchToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToInch(InchToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToInch(InchToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToInch(InchToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToInch(InchToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToInch(InchToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToInch(InchToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToInch(InchToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToInch(InchToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToInch(InchToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToInch(InchToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToInch(InchToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToInch(InchToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToInch(InchToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToInch(InchToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToInch(InchToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToInch(InchToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
