#pragma once

TEST_CASE("Zettameter Length Conversion"){

	//Zero
        //AU
    CHECK(ZettameterToAstronomicalUnit(0.0) == 0.0);
    CHECK(ZettameterToLightYear(0.0) == 0.0);
    CHECK(ZettameterToParsec(0.0) == 0.0);

        //SI
    CHECK(ZettameterToMeter(0.0) == 0.0);
    CHECK(ZettameterToYottameter(0.0) == 0.0);
    CHECK(ZettameterToExameter(0.0) == 0.0);
    CHECK(ZettameterToPetameter(0.0) == 0.0);
    CHECK(ZettameterToTerameter(0.0) == 0.0);
    CHECK(ZettameterToGigameter(0.0) == 0.0);
    CHECK(ZettameterToMegameter(0.0) == 0.0);
    CHECK(ZettameterToKilometer(0.0) == 0.0);
    CHECK(ZettameterToHectometer(0.0) == 0.0);
    CHECK(ZettameterToDecameter(0.0) == 0.0);
    CHECK(ZettameterToDecimeter(0.0) == 0.0);
    CHECK(ZettameterToCentimeter(0.0) == 0.0);
    CHECK(ZettameterToMillimeter(0.0) == 0.0);
    CHECK(ZettameterToMicrometer(0.0) == 0.0);
    CHECK(ZettameterToNanometer(0.0) == 0.0);
    CHECK(ZettameterToPicometer(0.0) == 0.0);
    CHECK(ZettameterToFemtometer(0.0) == 0.0);
    CHECK(ZettameterToAttometer(0.0) == 0.0);
    CHECK(ZettameterToZeptometer(0.0) == 0.0);
    CHECK(ZettameterToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(ZettameterToAngstrom(0.0) == 0.0);
    CHECK(ZettameterToFermi(0.0) == 0.0);
    CHECK(ZettameterToMicron(0.0) == 0.0);
    CHECK(ZettameterToCuXUnit(0.0) == 0.0);
    CHECK(ZettameterToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(ZettameterToMile(0.0) == 0.0);
    CHECK(ZettameterToYard(0.0) == 0.0);
    CHECK(ZettameterToFoot(0.0) == 0.0);
    CHECK(ZettameterToInch(0.0) == 0.0);
    CHECK(ZettameterToMil(0.0) == 0.0);
    CHECK(ZettameterToThou(0.0) == 0.0);

        //Nautical
    CHECK(ZettameterToNauticalMile(0.0) == 0.0);
    CHECK(ZettameterToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(ZettameterToRod(0.0) == 0.0);
    CHECK(ZettameterToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToZettameter(ZettameterToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToZettameter(ZettameterToLightYear(0.0) )== 0.0);
    CHECK(ParsecToZettameter(ZettameterToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToZettameter(ZettameterToMeter(0.0) )== 0.0);
    CHECK(YottameterToZettameter(ZettameterToYottameter(0.0) )== 0.0);
    CHECK(ExameterToZettameter(ZettameterToExameter(0.0) )== 0.0);
    CHECK(PetameterToZettameter(ZettameterToPetameter(0.0) )== 0.0);
    CHECK(TerameterToZettameter(ZettameterToTerameter(0.0) )== 0.0);
    CHECK(GigameterToZettameter(ZettameterToGigameter(0.0) )== 0.0);
    CHECK(MegameterToZettameter(ZettameterToMegameter(0.0) )== 0.0);
    CHECK(KilometerToZettameter(ZettameterToKilometer(0.0) )== 0.0);
    CHECK(HectometerToZettameter(ZettameterToHectometer(0.0) )== 0.0);
    CHECK(DecameterToZettameter(ZettameterToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToZettameter(ZettameterToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToZettameter(ZettameterToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToZettameter(ZettameterToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToZettameter(ZettameterToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToZettameter(ZettameterToNanometer(0.0) )== 0.0);
    CHECK(PicometerToZettameter(ZettameterToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToZettameter(ZettameterToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToZettameter(ZettameterToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToZettameter(ZettameterToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToZettameter(ZettameterToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToZettameter(ZettameterToAngstrom(0.0) )== 0.0);
    CHECK(FermiToZettameter(ZettameterToFermi(0.0) )== 0.0);
    CHECK(MicronToZettameter(ZettameterToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToZettameter(ZettameterToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToZettameter(ZettameterToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToZettameter(ZettameterToMile(0.0) )== 0.0);
    CHECK(YardToZettameter(ZettameterToYard(0.0) )== 0.0);
    CHECK(FootToZettameter(ZettameterToFoot(0.0) )== 0.0);
    CHECK(InchToZettameter(ZettameterToInch(0.0) )== 0.0);
    CHECK(MilToZettameter(ZettameterToMil(0.0) )== 0.0);
    CHECK(ThouToZettameter(ZettameterToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToZettameter(ZettameterToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToZettameter(ZettameterToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToZettameter(ZettameterToRod(0.0) )== 0.0);
    CHECK(ChainToZettameter(ZettameterToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToZettameter(ZettameterToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToZettameter(ZettameterToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToZettameter(ZettameterToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToZettameter(ZettameterToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToZettameter(ZettameterToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToZettameter(ZettameterToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToZettameter(ZettameterToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToZettameter(ZettameterToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToZettameter(ZettameterToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToZettameter(ZettameterToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToZettameter(ZettameterToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToZettameter(ZettameterToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToZettameter(ZettameterToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToZettameter(ZettameterToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToZettameter(ZettameterToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToZettameter(ZettameterToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToZettameter(ZettameterToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToZettameter(ZettameterToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToZettameter(ZettameterToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToZettameter(ZettameterToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToZettameter(ZettameterToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToZettameter(ZettameterToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToZettameter(ZettameterToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToZettameter(ZettameterToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToZettameter(ZettameterToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToZettameter(ZettameterToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToZettameter(ZettameterToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToZettameter(ZettameterToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToZettameter(ZettameterToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToZettameter(ZettameterToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToZettameter(ZettameterToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToZettameter(ZettameterToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToZettameter(ZettameterToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToZettameter(ZettameterToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToZettameter(ZettameterToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToZettameter(ZettameterToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToZettameter(ZettameterToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToZettameter(ZettameterToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
