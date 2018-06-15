#pragma once

TEST_CASE("AstronomicalUnit Length Conversion"){

	//Zero
        //AU
    CHECK(AstronomicalUnitToLightYear(0.0) == 0.0);
    CHECK(AstronomicalUnitToParsec(0.0) == 0.0);

        //SI
    CHECK(AstronomicalUnitToMeter(0.0) == 0.0);
    CHECK(AstronomicalUnitToYottameter(0.0) == 0.0);
    CHECK(AstronomicalUnitToZettameter(0.0) == 0.0);
    CHECK(AstronomicalUnitToExameter(0.0) == 0.0);
    CHECK(AstronomicalUnitToPetameter(0.0) == 0.0);
    CHECK(AstronomicalUnitToTerameter(0.0) == 0.0);
    CHECK(AstronomicalUnitToGigameter(0.0) == 0.0);
    CHECK(AstronomicalUnitToMegameter(0.0) == 0.0);
    CHECK(AstronomicalUnitToKilometer(0.0) == 0.0);
    CHECK(AstronomicalUnitToHectometer(0.0) == 0.0);
    CHECK(AstronomicalUnitToDecameter(0.0) == 0.0);
    CHECK(AstronomicalUnitToDecimeter(0.0) == 0.0);
    CHECK(AstronomicalUnitToCentimeter(0.0) == 0.0);
    CHECK(AstronomicalUnitToMillimeter(0.0) == 0.0);
    CHECK(AstronomicalUnitToMicrometer(0.0) == 0.0);
    CHECK(AstronomicalUnitToNanometer(0.0) == 0.0);
    CHECK(AstronomicalUnitToPicometer(0.0) == 0.0);
    CHECK(AstronomicalUnitToFemtometer(0.0) == 0.0);
    CHECK(AstronomicalUnitToAttometer(0.0) == 0.0);
    CHECK(AstronomicalUnitToZeptometer(0.0) == 0.0);
    CHECK(AstronomicalUnitToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(AstronomicalUnitToAngstrom(0.0) == 0.0);
    CHECK(AstronomicalUnitToFermi(0.0) == 0.0);
    CHECK(AstronomicalUnitToMicron(0.0) == 0.0);
    CHECK(AstronomicalUnitToCuXUnit(0.0) == 0.0);
    CHECK(AstronomicalUnitToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(AstronomicalUnitToMile(0.0) == 0.0);
    CHECK(AstronomicalUnitToYard(0.0) == 0.0);
    CHECK(AstronomicalUnitToFoot(0.0) == 0.0);
    CHECK(AstronomicalUnitToInch(0.0) == 0.0);
    CHECK(AstronomicalUnitToMil(0.0) == 0.0);
    CHECK(AstronomicalUnitToThou(0.0) == 0.0);

        //Nautical
    CHECK(AstronomicalUnitToNauticalMile(0.0) == 0.0);
    CHECK(AstronomicalUnitToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(AstronomicalUnitToRod(0.0) == 0.0);
    CHECK(AstronomicalUnitToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(LightYearToAstronomicalUnit(AstronomicalUnitToLightYear(0.0) )== 0.0);
    CHECK(ParsecToAstronomicalUnit(AstronomicalUnitToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToAstronomicalUnit(AstronomicalUnitToMeter(0.0) )== 0.0);
    CHECK(YottameterToAstronomicalUnit(AstronomicalUnitToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToAstronomicalUnit(AstronomicalUnitToZettameter(0.0) )== 0.0);
    CHECK(ExameterToAstronomicalUnit(AstronomicalUnitToExameter(0.0) )== 0.0);
    CHECK(PetameterToAstronomicalUnit(AstronomicalUnitToPetameter(0.0) )== 0.0);
    CHECK(TerameterToAstronomicalUnit(AstronomicalUnitToTerameter(0.0) )== 0.0);
    CHECK(GigameterToAstronomicalUnit(AstronomicalUnitToGigameter(0.0) )== 0.0);
    CHECK(MegameterToAstronomicalUnit(AstronomicalUnitToMegameter(0.0) )== 0.0);
    CHECK(KilometerToAstronomicalUnit(AstronomicalUnitToKilometer(0.0) )== 0.0);
    CHECK(HectometerToAstronomicalUnit(AstronomicalUnitToHectometer(0.0) )== 0.0);
    CHECK(DecameterToAstronomicalUnit(AstronomicalUnitToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToAstronomicalUnit(AstronomicalUnitToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToAstronomicalUnit(AstronomicalUnitToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToAstronomicalUnit(AstronomicalUnitToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToAstronomicalUnit(AstronomicalUnitToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToAstronomicalUnit(AstronomicalUnitToNanometer(0.0) )== 0.0);
    CHECK(PicometerToAstronomicalUnit(AstronomicalUnitToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToAstronomicalUnit(AstronomicalUnitToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToAstronomicalUnit(AstronomicalUnitToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToAstronomicalUnit(AstronomicalUnitToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToAstronomicalUnit(AstronomicalUnitToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToAstronomicalUnit(AstronomicalUnitToAngstrom(0.0) )== 0.0);
    CHECK(FermiToAstronomicalUnit(AstronomicalUnitToFermi(0.0) )== 0.0);
    CHECK(MicronToAstronomicalUnit(AstronomicalUnitToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToAstronomicalUnit(AstronomicalUnitToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToAstronomicalUnit(AstronomicalUnitToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToAstronomicalUnit(AstronomicalUnitToMile(0.0) )== 0.0);
    CHECK(YardToAstronomicalUnit(AstronomicalUnitToYard(0.0) )== 0.0);
    CHECK(FootToAstronomicalUnit(AstronomicalUnitToFoot(0.0) )== 0.0);
    CHECK(InchToAstronomicalUnit(AstronomicalUnitToInch(0.0) )== 0.0);
    CHECK(MilToAstronomicalUnit(AstronomicalUnitToMil(0.0) )== 0.0);
    CHECK(ThouToAstronomicalUnit(AstronomicalUnitToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToAstronomicalUnit(AstronomicalUnitToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToAstronomicalUnit(AstronomicalUnitToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToAstronomicalUnit(AstronomicalUnitToRod(0.0) )== 0.0);
    CHECK(ChainToAstronomicalUnit(AstronomicalUnitToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(LightYearToAstronomicalUnit(AstronomicalUnitToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToAstronomicalUnit(AstronomicalUnitToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToAstronomicalUnit(AstronomicalUnitToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToAstronomicalUnit(AstronomicalUnitToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToAstronomicalUnit(AstronomicalUnitToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToAstronomicalUnit(AstronomicalUnitToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToAstronomicalUnit(AstronomicalUnitToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToAstronomicalUnit(AstronomicalUnitToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToAstronomicalUnit(AstronomicalUnitToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToAstronomicalUnit(AstronomicalUnitToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToAstronomicalUnit(AstronomicalUnitToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToAstronomicalUnit(AstronomicalUnitToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToAstronomicalUnit(AstronomicalUnitToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToAstronomicalUnit(AstronomicalUnitToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToAstronomicalUnit(AstronomicalUnitToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToAstronomicalUnit(AstronomicalUnitToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToAstronomicalUnit(AstronomicalUnitToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToAstronomicalUnit(AstronomicalUnitToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToAstronomicalUnit(AstronomicalUnitToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToAstronomicalUnit(AstronomicalUnitToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToAstronomicalUnit(AstronomicalUnitToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToAstronomicalUnit(AstronomicalUnitToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToAstronomicalUnit(AstronomicalUnitToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToAstronomicalUnit(AstronomicalUnitToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToAstronomicalUnit(AstronomicalUnitToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToAstronomicalUnit(AstronomicalUnitToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToAstronomicalUnit(AstronomicalUnitToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToAstronomicalUnit(AstronomicalUnitToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToAstronomicalUnit(AstronomicalUnitToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToAstronomicalUnit(AstronomicalUnitToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToAstronomicalUnit(AstronomicalUnitToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToAstronomicalUnit(AstronomicalUnitToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToAstronomicalUnit(AstronomicalUnitToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToAstronomicalUnit(AstronomicalUnitToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToAstronomicalUnit(AstronomicalUnitToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToAstronomicalUnit(AstronomicalUnitToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToAstronomicalUnit(AstronomicalUnitToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToAstronomicalUnit(AstronomicalUnitToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
