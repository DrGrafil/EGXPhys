#pragma once

TEST_CASE("Micron Length Conversion"){

	//Zero
        //AU
    CHECK(MicronToAstronomicalUnit(0.0) == 0.0);
    CHECK(MicronToLightYear(0.0) == 0.0);
    CHECK(MicronToParsec(0.0) == 0.0);

        //SI
    CHECK(MicronToMeter(0.0) == 0.0);
    CHECK(MicronToYottameter(0.0) == 0.0);
    CHECK(MicronToZettameter(0.0) == 0.0);
    CHECK(MicronToExameter(0.0) == 0.0);
    CHECK(MicronToPetameter(0.0) == 0.0);
    CHECK(MicronToTerameter(0.0) == 0.0);
    CHECK(MicronToGigameter(0.0) == 0.0);
    CHECK(MicronToMegameter(0.0) == 0.0);
    CHECK(MicronToKilometer(0.0) == 0.0);
    CHECK(MicronToHectometer(0.0) == 0.0);
    CHECK(MicronToDecameter(0.0) == 0.0);
    CHECK(MicronToDecimeter(0.0) == 0.0);
    CHECK(MicronToCentimeter(0.0) == 0.0);
    CHECK(MicronToMillimeter(0.0) == 0.0);
    CHECK(MicronToMicrometer(0.0) == 0.0);
    CHECK(MicronToNanometer(0.0) == 0.0);
    CHECK(MicronToPicometer(0.0) == 0.0);
    CHECK(MicronToFemtometer(0.0) == 0.0);
    CHECK(MicronToAttometer(0.0) == 0.0);
    CHECK(MicronToZeptometer(0.0) == 0.0);
    CHECK(MicronToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(MicronToAngstrom(0.0) == 0.0);
    CHECK(MicronToFermi(0.0) == 0.0);
    CHECK(MicronToCuXUnit(0.0) == 0.0);
    CHECK(MicronToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(MicronToMile(0.0) == 0.0);
    CHECK(MicronToYard(0.0) == 0.0);
    CHECK(MicronToFoot(0.0) == 0.0);
    CHECK(MicronToInch(0.0) == 0.0);
    CHECK(MicronToMil(0.0) == 0.0);
    CHECK(MicronToThou(0.0) == 0.0);

        //Nautical
    CHECK(MicronToNauticalMile(0.0) == 0.0);
    CHECK(MicronToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(MicronToRod(0.0) == 0.0);
    CHECK(MicronToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToMicron(MicronToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToMicron(MicronToLightYear(0.0) )== 0.0);
    CHECK(ParsecToMicron(MicronToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToMicron(MicronToMeter(0.0) )== 0.0);
    CHECK(YottameterToMicron(MicronToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToMicron(MicronToZettameter(0.0) )== 0.0);
    CHECK(ExameterToMicron(MicronToExameter(0.0) )== 0.0);
    CHECK(PetameterToMicron(MicronToPetameter(0.0) )== 0.0);
    CHECK(TerameterToMicron(MicronToTerameter(0.0) )== 0.0);
    CHECK(GigameterToMicron(MicronToGigameter(0.0) )== 0.0);
    CHECK(MegameterToMicron(MicronToMegameter(0.0) )== 0.0);
    CHECK(KilometerToMicron(MicronToKilometer(0.0) )== 0.0);
    CHECK(HectometerToMicron(MicronToHectometer(0.0) )== 0.0);
    CHECK(DecameterToMicron(MicronToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToMicron(MicronToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToMicron(MicronToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToMicron(MicronToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToMicron(MicronToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToMicron(MicronToNanometer(0.0) )== 0.0);
    CHECK(PicometerToMicron(MicronToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToMicron(MicronToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToMicron(MicronToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToMicron(MicronToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToMicron(MicronToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToMicron(MicronToAngstrom(0.0) )== 0.0);
    CHECK(FermiToMicron(MicronToFermi(0.0) )== 0.0);
    CHECK(CuXUnitToMicron(MicronToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToMicron(MicronToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToMicron(MicronToMile(0.0) )== 0.0);
    CHECK(YardToMicron(MicronToYard(0.0) )== 0.0);
    CHECK(FootToMicron(MicronToFoot(0.0) )== 0.0);
    CHECK(InchToMicron(MicronToInch(0.0) )== 0.0);
    CHECK(MilToMicron(MicronToMil(0.0) )== 0.0);
    CHECK(ThouToMicron(MicronToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToMicron(MicronToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToMicron(MicronToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToMicron(MicronToRod(0.0) )== 0.0);
    CHECK(ChainToMicron(MicronToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToMicron(MicronToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToMicron(MicronToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToMicron(MicronToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToMicron(MicronToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToMicron(MicronToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToMicron(MicronToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToMicron(MicronToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToMicron(MicronToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToMicron(MicronToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToMicron(MicronToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToMicron(MicronToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToMicron(MicronToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToMicron(MicronToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToMicron(MicronToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToMicron(MicronToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToMicron(MicronToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToMicron(MicronToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToMicron(MicronToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToMicron(MicronToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToMicron(MicronToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToMicron(MicronToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToMicron(MicronToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToMicron(MicronToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToMicron(MicronToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToMicron(MicronToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToMicron(MicronToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToMicron(MicronToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToMicron(MicronToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToMicron(MicronToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToMicron(MicronToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToMicron(MicronToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToMicron(MicronToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToMicron(MicronToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToMicron(MicronToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToMicron(MicronToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToMicron(MicronToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToMicron(MicronToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToMicron(MicronToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
