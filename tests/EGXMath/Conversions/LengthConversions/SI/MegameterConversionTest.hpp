#pragma once

TEST_CASE("Megameter Length Conversion"){

	//Zero
        //AU
    CHECK(MegameterToAstronomicalUnit(0.0) == 0.0);
    CHECK(MegameterToLightYear(0.0) == 0.0);
    CHECK(MegameterToParsec(0.0) == 0.0);

        //SI
    CHECK(MegameterToMeter(0.0) == 0.0);
    CHECK(MegameterToYottameter(0.0) == 0.0);
    CHECK(MegameterToZettameter(0.0) == 0.0);
    CHECK(MegameterToExameter(0.0) == 0.0);
    CHECK(MegameterToPetameter(0.0) == 0.0);
    CHECK(MegameterToTerameter(0.0) == 0.0);
    CHECK(MegameterToGigameter(0.0) == 0.0);
    CHECK(MegameterToKilometer(0.0) == 0.0);
    CHECK(MegameterToHectometer(0.0) == 0.0);
    CHECK(MegameterToDecameter(0.0) == 0.0);
    CHECK(MegameterToDecimeter(0.0) == 0.0);
    CHECK(MegameterToCentimeter(0.0) == 0.0);
    CHECK(MegameterToMillimeter(0.0) == 0.0);
    CHECK(MegameterToMicrometer(0.0) == 0.0);
    CHECK(MegameterToNanometer(0.0) == 0.0);
    CHECK(MegameterToPicometer(0.0) == 0.0);
    CHECK(MegameterToFemtometer(0.0) == 0.0);
    CHECK(MegameterToAttometer(0.0) == 0.0);
    CHECK(MegameterToZeptometer(0.0) == 0.0);
    CHECK(MegameterToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(MegameterToAngstrom(0.0) == 0.0);
    CHECK(MegameterToFermi(0.0) == 0.0);
    CHECK(MegameterToMicron(0.0) == 0.0);
    CHECK(MegameterToCuXUnit(0.0) == 0.0);
    CHECK(MegameterToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(MegameterToMile(0.0) == 0.0);
    CHECK(MegameterToYard(0.0) == 0.0);
    CHECK(MegameterToFoot(0.0) == 0.0);
    CHECK(MegameterToInch(0.0) == 0.0);
    CHECK(MegameterToMil(0.0) == 0.0);
    CHECK(MegameterToThou(0.0) == 0.0);

        //Nautical
    CHECK(MegameterToNauticalMile(0.0) == 0.0);
    CHECK(MegameterToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(MegameterToRod(0.0) == 0.0);
    CHECK(MegameterToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToMegameter(MegameterToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToMegameter(MegameterToLightYear(0.0) )== 0.0);
    CHECK(ParsecToMegameter(MegameterToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToMegameter(MegameterToMeter(0.0) )== 0.0);
    CHECK(YottameterToMegameter(MegameterToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToMegameter(MegameterToZettameter(0.0) )== 0.0);
    CHECK(ExameterToMegameter(MegameterToExameter(0.0) )== 0.0);
    CHECK(PetameterToMegameter(MegameterToPetameter(0.0) )== 0.0);
    CHECK(TerameterToMegameter(MegameterToTerameter(0.0) )== 0.0);
    CHECK(GigameterToMegameter(MegameterToGigameter(0.0) )== 0.0);
    CHECK(KilometerToMegameter(MegameterToKilometer(0.0) )== 0.0);
    CHECK(HectometerToMegameter(MegameterToHectometer(0.0) )== 0.0);
    CHECK(DecameterToMegameter(MegameterToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToMegameter(MegameterToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToMegameter(MegameterToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToMegameter(MegameterToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToMegameter(MegameterToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToMegameter(MegameterToNanometer(0.0) )== 0.0);
    CHECK(PicometerToMegameter(MegameterToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToMegameter(MegameterToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToMegameter(MegameterToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToMegameter(MegameterToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToMegameter(MegameterToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToMegameter(MegameterToAngstrom(0.0) )== 0.0);
    CHECK(FermiToMegameter(MegameterToFermi(0.0) )== 0.0);
    CHECK(MicronToMegameter(MegameterToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToMegameter(MegameterToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToMegameter(MegameterToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToMegameter(MegameterToMile(0.0) )== 0.0);
    CHECK(YardToMegameter(MegameterToYard(0.0) )== 0.0);
    CHECK(FootToMegameter(MegameterToFoot(0.0) )== 0.0);
    CHECK(InchToMegameter(MegameterToInch(0.0) )== 0.0);
    CHECK(MilToMegameter(MegameterToMil(0.0) )== 0.0);
    CHECK(ThouToMegameter(MegameterToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToMegameter(MegameterToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToMegameter(MegameterToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToMegameter(MegameterToRod(0.0) )== 0.0);
    CHECK(ChainToMegameter(MegameterToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToMegameter(MegameterToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToMegameter(MegameterToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToMegameter(MegameterToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToMegameter(MegameterToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToMegameter(MegameterToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToMegameter(MegameterToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToMegameter(MegameterToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToMegameter(MegameterToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToMegameter(MegameterToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToMegameter(MegameterToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToMegameter(MegameterToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToMegameter(MegameterToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToMegameter(MegameterToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToMegameter(MegameterToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToMegameter(MegameterToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToMegameter(MegameterToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToMegameter(MegameterToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToMegameter(MegameterToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToMegameter(MegameterToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToMegameter(MegameterToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToMegameter(MegameterToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToMegameter(MegameterToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToMegameter(MegameterToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToMegameter(MegameterToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToMegameter(MegameterToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToMegameter(MegameterToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToMegameter(MegameterToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToMegameter(MegameterToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToMegameter(MegameterToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToMegameter(MegameterToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToMegameter(MegameterToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToMegameter(MegameterToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToMegameter(MegameterToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToMegameter(MegameterToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToMegameter(MegameterToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToMegameter(MegameterToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToMegameter(MegameterToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToMegameter(MegameterToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
