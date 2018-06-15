#pragma once

TEST_CASE("Rod Length Conversion"){

	//Zero
        //AU
    CHECK(RodToAstronomicalUnit(0.0) == 0.0);
    CHECK(RodToLightYear(0.0) == 0.0);
    CHECK(RodToParsec(0.0) == 0.0);

        //SI
    CHECK(RodToMeter(0.0) == 0.0);
    CHECK(RodToYottameter(0.0) == 0.0);
    CHECK(RodToZettameter(0.0) == 0.0);
    CHECK(RodToExameter(0.0) == 0.0);
    CHECK(RodToPetameter(0.0) == 0.0);
    CHECK(RodToTerameter(0.0) == 0.0);
    CHECK(RodToGigameter(0.0) == 0.0);
    CHECK(RodToMegameter(0.0) == 0.0);
    CHECK(RodToKilometer(0.0) == 0.0);
    CHECK(RodToHectometer(0.0) == 0.0);
    CHECK(RodToDecameter(0.0) == 0.0);
    CHECK(RodToDecimeter(0.0) == 0.0);
    CHECK(RodToCentimeter(0.0) == 0.0);
    CHECK(RodToMillimeter(0.0) == 0.0);
    CHECK(RodToMicrometer(0.0) == 0.0);
    CHECK(RodToNanometer(0.0) == 0.0);
    CHECK(RodToPicometer(0.0) == 0.0);
    CHECK(RodToFemtometer(0.0) == 0.0);
    CHECK(RodToAttometer(0.0) == 0.0);
    CHECK(RodToZeptometer(0.0) == 0.0);
    CHECK(RodToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(RodToAngstrom(0.0) == 0.0);
    CHECK(RodToFermi(0.0) == 0.0);
    CHECK(RodToMicron(0.0) == 0.0);
    CHECK(RodToCuXUnit(0.0) == 0.0);
    CHECK(RodToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(RodToMile(0.0) == 0.0);
    CHECK(RodToYard(0.0) == 0.0);
    CHECK(RodToFoot(0.0) == 0.0);
    CHECK(RodToInch(0.0) == 0.0);
    CHECK(RodToMil(0.0) == 0.0);
    CHECK(RodToThou(0.0) == 0.0);

        //Nautical
    CHECK(RodToNauticalMile(0.0) == 0.0);
    CHECK(RodToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(RodToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToRod(RodToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToRod(RodToLightYear(0.0) )== 0.0);
    CHECK(ParsecToRod(RodToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToRod(RodToMeter(0.0) )== 0.0);
    CHECK(YottameterToRod(RodToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToRod(RodToZettameter(0.0) )== 0.0);
    CHECK(ExameterToRod(RodToExameter(0.0) )== 0.0);
    CHECK(PetameterToRod(RodToPetameter(0.0) )== 0.0);
    CHECK(TerameterToRod(RodToTerameter(0.0) )== 0.0);
    CHECK(GigameterToRod(RodToGigameter(0.0) )== 0.0);
    CHECK(MegameterToRod(RodToMegameter(0.0) )== 0.0);
    CHECK(KilometerToRod(RodToKilometer(0.0) )== 0.0);
    CHECK(HectometerToRod(RodToHectometer(0.0) )== 0.0);
    CHECK(DecameterToRod(RodToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToRod(RodToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToRod(RodToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToRod(RodToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToRod(RodToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToRod(RodToNanometer(0.0) )== 0.0);
    CHECK(PicometerToRod(RodToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToRod(RodToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToRod(RodToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToRod(RodToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToRod(RodToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToRod(RodToAngstrom(0.0) )== 0.0);
    CHECK(FermiToRod(RodToFermi(0.0) )== 0.0);
    CHECK(MicronToRod(RodToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToRod(RodToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToRod(RodToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToRod(RodToMile(0.0) )== 0.0);
    CHECK(YardToRod(RodToYard(0.0) )== 0.0);
    CHECK(FootToRod(RodToFoot(0.0) )== 0.0);
    CHECK(InchToRod(RodToInch(0.0) )== 0.0);
    CHECK(MilToRod(RodToMil(0.0) )== 0.0);
    CHECK(ThouToRod(RodToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToRod(RodToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToRod(RodToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(ChainToRod(RodToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToRod(RodToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToRod(RodToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToRod(RodToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToRod(RodToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToRod(RodToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToRod(RodToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToRod(RodToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToRod(RodToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToRod(RodToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToRod(RodToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToRod(RodToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToRod(RodToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToRod(RodToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToRod(RodToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToRod(RodToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToRod(RodToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToRod(RodToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToRod(RodToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToRod(RodToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToRod(RodToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToRod(RodToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToRod(RodToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToRod(RodToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToRod(RodToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToRod(RodToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToRod(RodToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToRod(RodToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToRod(RodToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToRod(RodToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToRod(RodToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToRod(RodToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToRod(RodToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToRod(RodToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToRod(RodToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToRod(RodToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToRod(RodToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToRod(RodToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(ChainToRod(RodToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
