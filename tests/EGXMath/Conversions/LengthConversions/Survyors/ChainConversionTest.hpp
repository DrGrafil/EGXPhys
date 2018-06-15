#pragma once

TEST_CASE("Chain Length Conversion"){

	//Zero
        //AU
    CHECK(ChainToAstronomicalUnit(0.0) == 0.0);
    CHECK(ChainToLightYear(0.0) == 0.0);
    CHECK(ChainToParsec(0.0) == 0.0);

        //SI
    CHECK(ChainToMeter(0.0) == 0.0);
    CHECK(ChainToYottameter(0.0) == 0.0);
    CHECK(ChainToZettameter(0.0) == 0.0);
    CHECK(ChainToExameter(0.0) == 0.0);
    CHECK(ChainToPetameter(0.0) == 0.0);
    CHECK(ChainToTerameter(0.0) == 0.0);
    CHECK(ChainToGigameter(0.0) == 0.0);
    CHECK(ChainToMegameter(0.0) == 0.0);
    CHECK(ChainToKilometer(0.0) == 0.0);
    CHECK(ChainToHectometer(0.0) == 0.0);
    CHECK(ChainToDecameter(0.0) == 0.0);
    CHECK(ChainToDecimeter(0.0) == 0.0);
    CHECK(ChainToCentimeter(0.0) == 0.0);
    CHECK(ChainToMillimeter(0.0) == 0.0);
    CHECK(ChainToMicrometer(0.0) == 0.0);
    CHECK(ChainToNanometer(0.0) == 0.0);
    CHECK(ChainToPicometer(0.0) == 0.0);
    CHECK(ChainToFemtometer(0.0) == 0.0);
    CHECK(ChainToAttometer(0.0) == 0.0);
    CHECK(ChainToZeptometer(0.0) == 0.0);
    CHECK(ChainToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(ChainToAngstrom(0.0) == 0.0);
    CHECK(ChainToFermi(0.0) == 0.0);
    CHECK(ChainToMicron(0.0) == 0.0);
    CHECK(ChainToCuXUnit(0.0) == 0.0);
    CHECK(ChainToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(ChainToMile(0.0) == 0.0);
    CHECK(ChainToYard(0.0) == 0.0);
    CHECK(ChainToFoot(0.0) == 0.0);
    CHECK(ChainToInch(0.0) == 0.0);
    CHECK(ChainToMil(0.0) == 0.0);
    CHECK(ChainToThou(0.0) == 0.0);

        //Nautical
    CHECK(ChainToNauticalMile(0.0) == 0.0);
    CHECK(ChainToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(ChainToRod(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToChain(ChainToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToChain(ChainToLightYear(0.0) )== 0.0);
    CHECK(ParsecToChain(ChainToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToChain(ChainToMeter(0.0) )== 0.0);
    CHECK(YottameterToChain(ChainToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToChain(ChainToZettameter(0.0) )== 0.0);
    CHECK(ExameterToChain(ChainToExameter(0.0) )== 0.0);
    CHECK(PetameterToChain(ChainToPetameter(0.0) )== 0.0);
    CHECK(TerameterToChain(ChainToTerameter(0.0) )== 0.0);
    CHECK(GigameterToChain(ChainToGigameter(0.0) )== 0.0);
    CHECK(MegameterToChain(ChainToMegameter(0.0) )== 0.0);
    CHECK(KilometerToChain(ChainToKilometer(0.0) )== 0.0);
    CHECK(HectometerToChain(ChainToHectometer(0.0) )== 0.0);
    CHECK(DecameterToChain(ChainToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToChain(ChainToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToChain(ChainToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToChain(ChainToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToChain(ChainToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToChain(ChainToNanometer(0.0) )== 0.0);
    CHECK(PicometerToChain(ChainToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToChain(ChainToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToChain(ChainToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToChain(ChainToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToChain(ChainToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToChain(ChainToAngstrom(0.0) )== 0.0);
    CHECK(FermiToChain(ChainToFermi(0.0) )== 0.0);
    CHECK(MicronToChain(ChainToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToChain(ChainToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToChain(ChainToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToChain(ChainToMile(0.0) )== 0.0);
    CHECK(YardToChain(ChainToYard(0.0) )== 0.0);
    CHECK(FootToChain(ChainToFoot(0.0) )== 0.0);
    CHECK(InchToChain(ChainToInch(0.0) )== 0.0);
    CHECK(MilToChain(ChainToMil(0.0) )== 0.0);
    CHECK(ThouToChain(ChainToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToChain(ChainToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToChain(ChainToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToChain(ChainToRod(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToChain(ChainToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToChain(ChainToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToChain(ChainToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToChain(ChainToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToChain(ChainToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToChain(ChainToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToChain(ChainToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToChain(ChainToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToChain(ChainToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToChain(ChainToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToChain(ChainToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToChain(ChainToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToChain(ChainToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToChain(ChainToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToChain(ChainToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToChain(ChainToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToChain(ChainToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToChain(ChainToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToChain(ChainToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToChain(ChainToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToChain(ChainToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToChain(ChainToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToChain(ChainToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToChain(ChainToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToChain(ChainToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToChain(ChainToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToChain(ChainToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToChain(ChainToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToChain(ChainToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToChain(ChainToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToChain(ChainToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToChain(ChainToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToChain(ChainToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToChain(ChainToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToChain(ChainToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToChain(ChainToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToChain(ChainToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToChain(ChainToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
