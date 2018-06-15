#pragma once

TEST_CASE("MoXUnit Length Conversion"){

	//Zero
        //AU
    CHECK(MoXUnitToAstronomicalUnit(0.0) == 0.0);
    CHECK(MoXUnitToLightYear(0.0) == 0.0);
    CHECK(MoXUnitToParsec(0.0) == 0.0);

        //SI
    CHECK(MoXUnitToMeter(0.0) == 0.0);
    CHECK(MoXUnitToYottameter(0.0) == 0.0);
    CHECK(MoXUnitToZettameter(0.0) == 0.0);
    CHECK(MoXUnitToExameter(0.0) == 0.0);
    CHECK(MoXUnitToPetameter(0.0) == 0.0);
    CHECK(MoXUnitToTerameter(0.0) == 0.0);
    CHECK(MoXUnitToGigameter(0.0) == 0.0);
    CHECK(MoXUnitToMegameter(0.0) == 0.0);
    CHECK(MoXUnitToKilometer(0.0) == 0.0);
    CHECK(MoXUnitToHectometer(0.0) == 0.0);
    CHECK(MoXUnitToDecameter(0.0) == 0.0);
    CHECK(MoXUnitToDecimeter(0.0) == 0.0);
    CHECK(MoXUnitToCentimeter(0.0) == 0.0);
    CHECK(MoXUnitToMillimeter(0.0) == 0.0);
    CHECK(MoXUnitToMicrometer(0.0) == 0.0);
    CHECK(MoXUnitToNanometer(0.0) == 0.0);
    CHECK(MoXUnitToPicometer(0.0) == 0.0);
    CHECK(MoXUnitToFemtometer(0.0) == 0.0);
    CHECK(MoXUnitToAttometer(0.0) == 0.0);
    CHECK(MoXUnitToZeptometer(0.0) == 0.0);
    CHECK(MoXUnitToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(MoXUnitToAngstrom(0.0) == 0.0);
    CHECK(MoXUnitToFermi(0.0) == 0.0);
    CHECK(MoXUnitToMicron(0.0) == 0.0);
    CHECK(MoXUnitToCuXUnit(0.0) == 0.0);

        //Imperial
    CHECK(MoXUnitToMile(0.0) == 0.0);
    CHECK(MoXUnitToYard(0.0) == 0.0);
    CHECK(MoXUnitToFoot(0.0) == 0.0);
    CHECK(MoXUnitToInch(0.0) == 0.0);
    CHECK(MoXUnitToMil(0.0) == 0.0);
    CHECK(MoXUnitToThou(0.0) == 0.0);

        //Nautical
    CHECK(MoXUnitToNauticalMile(0.0) == 0.0);
    CHECK(MoXUnitToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(MoXUnitToRod(0.0) == 0.0);
    CHECK(MoXUnitToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToMoXUnit(MoXUnitToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToMoXUnit(MoXUnitToLightYear(0.0) )== 0.0);
    CHECK(ParsecToMoXUnit(MoXUnitToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToMoXUnit(MoXUnitToMeter(0.0) )== 0.0);
    CHECK(YottameterToMoXUnit(MoXUnitToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToMoXUnit(MoXUnitToZettameter(0.0) )== 0.0);
    CHECK(ExameterToMoXUnit(MoXUnitToExameter(0.0) )== 0.0);
    CHECK(PetameterToMoXUnit(MoXUnitToPetameter(0.0) )== 0.0);
    CHECK(TerameterToMoXUnit(MoXUnitToTerameter(0.0) )== 0.0);
    CHECK(GigameterToMoXUnit(MoXUnitToGigameter(0.0) )== 0.0);
    CHECK(MegameterToMoXUnit(MoXUnitToMegameter(0.0) )== 0.0);
    CHECK(KilometerToMoXUnit(MoXUnitToKilometer(0.0) )== 0.0);
    CHECK(HectometerToMoXUnit(MoXUnitToHectometer(0.0) )== 0.0);
    CHECK(DecameterToMoXUnit(MoXUnitToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToMoXUnit(MoXUnitToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToMoXUnit(MoXUnitToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToMoXUnit(MoXUnitToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToMoXUnit(MoXUnitToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToMoXUnit(MoXUnitToNanometer(0.0) )== 0.0);
    CHECK(PicometerToMoXUnit(MoXUnitToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToMoXUnit(MoXUnitToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToMoXUnit(MoXUnitToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToMoXUnit(MoXUnitToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToMoXUnit(MoXUnitToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToMoXUnit(MoXUnitToAngstrom(0.0) )== 0.0);
    CHECK(FermiToMoXUnit(MoXUnitToFermi(0.0) )== 0.0);
    CHECK(MicronToMoXUnit(MoXUnitToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToMoXUnit(MoXUnitToCuXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToMoXUnit(MoXUnitToMile(0.0) )== 0.0);
    CHECK(YardToMoXUnit(MoXUnitToYard(0.0) )== 0.0);
    CHECK(FootToMoXUnit(MoXUnitToFoot(0.0) )== 0.0);
    CHECK(InchToMoXUnit(MoXUnitToInch(0.0) )== 0.0);
    CHECK(MilToMoXUnit(MoXUnitToMil(0.0) )== 0.0);
    CHECK(ThouToMoXUnit(MoXUnitToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToMoXUnit(MoXUnitToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToMoXUnit(MoXUnitToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToMoXUnit(MoXUnitToRod(0.0) )== 0.0);
    CHECK(ChainToMoXUnit(MoXUnitToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToMoXUnit(MoXUnitToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToMoXUnit(MoXUnitToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToMoXUnit(MoXUnitToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToMoXUnit(MoXUnitToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToMoXUnit(MoXUnitToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToMoXUnit(MoXUnitToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToMoXUnit(MoXUnitToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToMoXUnit(MoXUnitToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToMoXUnit(MoXUnitToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToMoXUnit(MoXUnitToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToMoXUnit(MoXUnitToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToMoXUnit(MoXUnitToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToMoXUnit(MoXUnitToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToMoXUnit(MoXUnitToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToMoXUnit(MoXUnitToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToMoXUnit(MoXUnitToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToMoXUnit(MoXUnitToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToMoXUnit(MoXUnitToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToMoXUnit(MoXUnitToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToMoXUnit(MoXUnitToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToMoXUnit(MoXUnitToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToMoXUnit(MoXUnitToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToMoXUnit(MoXUnitToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToMoXUnit(MoXUnitToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToMoXUnit(MoXUnitToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToMoXUnit(MoXUnitToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToMoXUnit(MoXUnitToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToMoXUnit(MoXUnitToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToMoXUnit(MoXUnitToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToMoXUnit(MoXUnitToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToMoXUnit(MoXUnitToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToMoXUnit(MoXUnitToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToMoXUnit(MoXUnitToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToMoXUnit(MoXUnitToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToMoXUnit(MoXUnitToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToMoXUnit(MoXUnitToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToMoXUnit(MoXUnitToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToMoXUnit(MoXUnitToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
