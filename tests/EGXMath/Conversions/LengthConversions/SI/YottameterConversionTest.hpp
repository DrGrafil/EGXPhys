#pragma once

TEST_CASE("Yottameter Length Conversion"){

	//Zero
        //AU
    CHECK(YottameterToAstronomicalUnit(0.0) == 0.0);
    CHECK(YottameterToLightYear(0.0) == 0.0);
    CHECK(YottameterToParsec(0.0) == 0.0);

        //SI
    CHECK(YottameterToMeter(0.0) == 0.0);
    CHECK(YottameterToZettameter(0.0) == 0.0);
    CHECK(YottameterToExameter(0.0) == 0.0);
    CHECK(YottameterToPetameter(0.0) == 0.0);
    CHECK(YottameterToTerameter(0.0) == 0.0);
    CHECK(YottameterToGigameter(0.0) == 0.0);
    CHECK(YottameterToMegameter(0.0) == 0.0);
    CHECK(YottameterToKilometer(0.0) == 0.0);
    CHECK(YottameterToHectometer(0.0) == 0.0);
    CHECK(YottameterToDecameter(0.0) == 0.0);
    CHECK(YottameterToDecimeter(0.0) == 0.0);
    CHECK(YottameterToCentimeter(0.0) == 0.0);
    CHECK(YottameterToMillimeter(0.0) == 0.0);
    CHECK(YottameterToMicrometer(0.0) == 0.0);
    CHECK(YottameterToNanometer(0.0) == 0.0);
    CHECK(YottameterToPicometer(0.0) == 0.0);
    CHECK(YottameterToFemtometer(0.0) == 0.0);
    CHECK(YottameterToAttometer(0.0) == 0.0);
    CHECK(YottameterToZeptometer(0.0) == 0.0);
    CHECK(YottameterToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(YottameterToAngstrom(0.0) == 0.0);
    CHECK(YottameterToFermi(0.0) == 0.0);
    CHECK(YottameterToMicron(0.0) == 0.0);
    CHECK(YottameterToCuXUnit(0.0) == 0.0);
    CHECK(YottameterToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(YottameterToMile(0.0) == 0.0);
    CHECK(YottameterToYard(0.0) == 0.0);
    CHECK(YottameterToFoot(0.0) == 0.0);
    CHECK(YottameterToInch(0.0) == 0.0);
    CHECK(YottameterToMil(0.0) == 0.0);
    CHECK(YottameterToThou(0.0) == 0.0);

        //Nautical
    CHECK(YottameterToNauticalMile(0.0) == 0.0);
    CHECK(YottameterToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(YottameterToRod(0.0) == 0.0);
    CHECK(YottameterToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToYottameter(YottameterToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToYottameter(YottameterToLightYear(0.0) )== 0.0);
    CHECK(ParsecToYottameter(YottameterToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToYottameter(YottameterToMeter(0.0) )== 0.0);
    CHECK(ZettameterToYottameter(YottameterToZettameter(0.0) )== 0.0);
    CHECK(ExameterToYottameter(YottameterToExameter(0.0) )== 0.0);
    CHECK(PetameterToYottameter(YottameterToPetameter(0.0) )== 0.0);
    CHECK(TerameterToYottameter(YottameterToTerameter(0.0) )== 0.0);
    CHECK(GigameterToYottameter(YottameterToGigameter(0.0) )== 0.0);
    CHECK(MegameterToYottameter(YottameterToMegameter(0.0) )== 0.0);
    CHECK(KilometerToYottameter(YottameterToKilometer(0.0) )== 0.0);
    CHECK(HectometerToYottameter(YottameterToHectometer(0.0) )== 0.0);
    CHECK(DecameterToYottameter(YottameterToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToYottameter(YottameterToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToYottameter(YottameterToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToYottameter(YottameterToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToYottameter(YottameterToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToYottameter(YottameterToNanometer(0.0) )== 0.0);
    CHECK(PicometerToYottameter(YottameterToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToYottameter(YottameterToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToYottameter(YottameterToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToYottameter(YottameterToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToYottameter(YottameterToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToYottameter(YottameterToAngstrom(0.0) )== 0.0);
    CHECK(FermiToYottameter(YottameterToFermi(0.0) )== 0.0);
    CHECK(MicronToYottameter(YottameterToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToYottameter(YottameterToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToYottameter(YottameterToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToYottameter(YottameterToMile(0.0) )== 0.0);
    CHECK(YardToYottameter(YottameterToYard(0.0) )== 0.0);
    CHECK(FootToYottameter(YottameterToFoot(0.0) )== 0.0);
    CHECK(InchToYottameter(YottameterToInch(0.0) )== 0.0);
    CHECK(MilToYottameter(YottameterToMil(0.0) )== 0.0);
    CHECK(ThouToYottameter(YottameterToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToYottameter(YottameterToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToYottameter(YottameterToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToYottameter(YottameterToRod(0.0) )== 0.0);
    CHECK(ChainToYottameter(YottameterToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToYottameter(YottameterToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToYottameter(YottameterToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToYottameter(YottameterToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToYottameter(YottameterToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToYottameter(YottameterToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToYottameter(YottameterToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToYottameter(YottameterToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToYottameter(YottameterToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToYottameter(YottameterToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToYottameter(YottameterToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToYottameter(YottameterToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToYottameter(YottameterToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToYottameter(YottameterToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToYottameter(YottameterToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToYottameter(YottameterToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToYottameter(YottameterToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToYottameter(YottameterToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToYottameter(YottameterToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToYottameter(YottameterToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToYottameter(YottameterToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToYottameter(YottameterToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToYottameter(YottameterToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToYottameter(YottameterToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToYottameter(YottameterToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToYottameter(YottameterToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToYottameter(YottameterToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToYottameter(YottameterToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToYottameter(YottameterToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToYottameter(YottameterToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToYottameter(YottameterToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToYottameter(YottameterToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToYottameter(YottameterToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToYottameter(YottameterToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToYottameter(YottameterToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToYottameter(YottameterToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToYottameter(YottameterToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToYottameter(YottameterToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToYottameter(YottameterToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
