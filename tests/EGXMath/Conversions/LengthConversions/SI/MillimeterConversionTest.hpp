#pragma once

TEST_CASE("Millimeter Length Conversion"){

	//Zero
        //AU
    CHECK(MillimeterToAstronomicalUnit(0.0) == 0.0);
    CHECK(MillimeterToLightYear(0.0) == 0.0);
    CHECK(MillimeterToParsec(0.0) == 0.0);

        //SI
    CHECK(MillimeterToMeter(0.0) == 0.0);
    CHECK(MillimeterToYottameter(0.0) == 0.0);
    CHECK(MillimeterToZettameter(0.0) == 0.0);
    CHECK(MillimeterToExameter(0.0) == 0.0);
    CHECK(MillimeterToPetameter(0.0) == 0.0);
    CHECK(MillimeterToTerameter(0.0) == 0.0);
    CHECK(MillimeterToGigameter(0.0) == 0.0);
    CHECK(MillimeterToMegameter(0.0) == 0.0);
    CHECK(MillimeterToKilometer(0.0) == 0.0);
    CHECK(MillimeterToHectometer(0.0) == 0.0);
    CHECK(MillimeterToDecameter(0.0) == 0.0);
    CHECK(MillimeterToDecimeter(0.0) == 0.0);
    CHECK(MillimeterToCentimeter(0.0) == 0.0);
    CHECK(MillimeterToMicrometer(0.0) == 0.0);
    CHECK(MillimeterToNanometer(0.0) == 0.0);
    CHECK(MillimeterToPicometer(0.0) == 0.0);
    CHECK(MillimeterToFemtometer(0.0) == 0.0);
    CHECK(MillimeterToAttometer(0.0) == 0.0);
    CHECK(MillimeterToZeptometer(0.0) == 0.0);
    CHECK(MillimeterToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(MillimeterToAngstrom(0.0) == 0.0);
    CHECK(MillimeterToFermi(0.0) == 0.0);
    CHECK(MillimeterToMicron(0.0) == 0.0);
    CHECK(MillimeterToCuXUnit(0.0) == 0.0);
    CHECK(MillimeterToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(MillimeterToMile(0.0) == 0.0);
    CHECK(MillimeterToYard(0.0) == 0.0);
    CHECK(MillimeterToFoot(0.0) == 0.0);
    CHECK(MillimeterToInch(0.0) == 0.0);
    CHECK(MillimeterToMil(0.0) == 0.0);
    CHECK(MillimeterToThou(0.0) == 0.0);

        //Nautical
    CHECK(MillimeterToNauticalMile(0.0) == 0.0);
    CHECK(MillimeterToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(MillimeterToRod(0.0) == 0.0);
    CHECK(MillimeterToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToMillimeter(MillimeterToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToMillimeter(MillimeterToLightYear(0.0) )== 0.0);
    CHECK(ParsecToMillimeter(MillimeterToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToMillimeter(MillimeterToMeter(0.0) )== 0.0);
    CHECK(YottameterToMillimeter(MillimeterToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToMillimeter(MillimeterToZettameter(0.0) )== 0.0);
    CHECK(ExameterToMillimeter(MillimeterToExameter(0.0) )== 0.0);
    CHECK(PetameterToMillimeter(MillimeterToPetameter(0.0) )== 0.0);
    CHECK(TerameterToMillimeter(MillimeterToTerameter(0.0) )== 0.0);
    CHECK(GigameterToMillimeter(MillimeterToGigameter(0.0) )== 0.0);
    CHECK(MegameterToMillimeter(MillimeterToMegameter(0.0) )== 0.0);
    CHECK(KilometerToMillimeter(MillimeterToKilometer(0.0) )== 0.0);
    CHECK(HectometerToMillimeter(MillimeterToHectometer(0.0) )== 0.0);
    CHECK(DecameterToMillimeter(MillimeterToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToMillimeter(MillimeterToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToMillimeter(MillimeterToCentimeter(0.0) )== 0.0);
    CHECK(MicrometerToMillimeter(MillimeterToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToMillimeter(MillimeterToNanometer(0.0) )== 0.0);
    CHECK(PicometerToMillimeter(MillimeterToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToMillimeter(MillimeterToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToMillimeter(MillimeterToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToMillimeter(MillimeterToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToMillimeter(MillimeterToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToMillimeter(MillimeterToAngstrom(0.0) )== 0.0);
    CHECK(FermiToMillimeter(MillimeterToFermi(0.0) )== 0.0);
    CHECK(MicronToMillimeter(MillimeterToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToMillimeter(MillimeterToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToMillimeter(MillimeterToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToMillimeter(MillimeterToMile(0.0) )== 0.0);
    CHECK(YardToMillimeter(MillimeterToYard(0.0) )== 0.0);
    CHECK(FootToMillimeter(MillimeterToFoot(0.0) )== 0.0);
    CHECK(InchToMillimeter(MillimeterToInch(0.0) )== 0.0);
    CHECK(MilToMillimeter(MillimeterToMil(0.0) )== 0.0);
    CHECK(ThouToMillimeter(MillimeterToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToMillimeter(MillimeterToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToMillimeter(MillimeterToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToMillimeter(MillimeterToRod(0.0) )== 0.0);
    CHECK(ChainToMillimeter(MillimeterToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToMillimeter(MillimeterToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToMillimeter(MillimeterToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToMillimeter(MillimeterToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToMillimeter(MillimeterToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToMillimeter(MillimeterToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToMillimeter(MillimeterToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToMillimeter(MillimeterToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToMillimeter(MillimeterToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToMillimeter(MillimeterToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToMillimeter(MillimeterToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToMillimeter(MillimeterToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToMillimeter(MillimeterToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToMillimeter(MillimeterToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToMillimeter(MillimeterToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToMillimeter(MillimeterToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToMillimeter(MillimeterToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToMillimeter(MillimeterToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToMillimeter(MillimeterToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToMillimeter(MillimeterToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToMillimeter(MillimeterToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToMillimeter(MillimeterToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToMillimeter(MillimeterToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToMillimeter(MillimeterToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToMillimeter(MillimeterToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToMillimeter(MillimeterToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToMillimeter(MillimeterToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToMillimeter(MillimeterToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToMillimeter(MillimeterToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToMillimeter(MillimeterToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToMillimeter(MillimeterToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToMillimeter(MillimeterToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToMillimeter(MillimeterToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToMillimeter(MillimeterToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToMillimeter(MillimeterToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToMillimeter(MillimeterToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToMillimeter(MillimeterToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToMillimeter(MillimeterToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToMillimeter(MillimeterToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
