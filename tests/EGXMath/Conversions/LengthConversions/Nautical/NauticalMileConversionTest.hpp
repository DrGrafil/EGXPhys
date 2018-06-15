#pragma once

TEST_CASE("NauticalMile Length Conversion"){

	//Zero
        //AU
    CHECK(NauticalMileToAstronomicalUnit(0.0) == 0.0);
    CHECK(NauticalMileToLightYear(0.0) == 0.0);
    CHECK(NauticalMileToParsec(0.0) == 0.0);

        //SI
    CHECK(NauticalMileToMeter(0.0) == 0.0);
    CHECK(NauticalMileToYottameter(0.0) == 0.0);
    CHECK(NauticalMileToZettameter(0.0) == 0.0);
    CHECK(NauticalMileToExameter(0.0) == 0.0);
    CHECK(NauticalMileToPetameter(0.0) == 0.0);
    CHECK(NauticalMileToTerameter(0.0) == 0.0);
    CHECK(NauticalMileToGigameter(0.0) == 0.0);
    CHECK(NauticalMileToMegameter(0.0) == 0.0);
    CHECK(NauticalMileToKilometer(0.0) == 0.0);
    CHECK(NauticalMileToHectometer(0.0) == 0.0);
    CHECK(NauticalMileToDecameter(0.0) == 0.0);
    CHECK(NauticalMileToDecimeter(0.0) == 0.0);
    CHECK(NauticalMileToCentimeter(0.0) == 0.0);
    CHECK(NauticalMileToMillimeter(0.0) == 0.0);
    CHECK(NauticalMileToMicrometer(0.0) == 0.0);
    CHECK(NauticalMileToNanometer(0.0) == 0.0);
    CHECK(NauticalMileToPicometer(0.0) == 0.0);
    CHECK(NauticalMileToFemtometer(0.0) == 0.0);
    CHECK(NauticalMileToAttometer(0.0) == 0.0);
    CHECK(NauticalMileToZeptometer(0.0) == 0.0);
    CHECK(NauticalMileToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(NauticalMileToAngstrom(0.0) == 0.0);
    CHECK(NauticalMileToFermi(0.0) == 0.0);
    CHECK(NauticalMileToMicron(0.0) == 0.0);
    CHECK(NauticalMileToCuXUnit(0.0) == 0.0);
    CHECK(NauticalMileToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(NauticalMileToMile(0.0) == 0.0);
    CHECK(NauticalMileToYard(0.0) == 0.0);
    CHECK(NauticalMileToFoot(0.0) == 0.0);
    CHECK(NauticalMileToInch(0.0) == 0.0);
    CHECK(NauticalMileToMil(0.0) == 0.0);
    CHECK(NauticalMileToThou(0.0) == 0.0);

        //Nautical
    CHECK(NauticalMileToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(NauticalMileToRod(0.0) == 0.0);
    CHECK(NauticalMileToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToNauticalMile(NauticalMileToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToNauticalMile(NauticalMileToLightYear(0.0) )== 0.0);
    CHECK(ParsecToNauticalMile(NauticalMileToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToNauticalMile(NauticalMileToMeter(0.0) )== 0.0);
    CHECK(YottameterToNauticalMile(NauticalMileToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToNauticalMile(NauticalMileToZettameter(0.0) )== 0.0);
    CHECK(ExameterToNauticalMile(NauticalMileToExameter(0.0) )== 0.0);
    CHECK(PetameterToNauticalMile(NauticalMileToPetameter(0.0) )== 0.0);
    CHECK(TerameterToNauticalMile(NauticalMileToTerameter(0.0) )== 0.0);
    CHECK(GigameterToNauticalMile(NauticalMileToGigameter(0.0) )== 0.0);
    CHECK(MegameterToNauticalMile(NauticalMileToMegameter(0.0) )== 0.0);
    CHECK(KilometerToNauticalMile(NauticalMileToKilometer(0.0) )== 0.0);
    CHECK(HectometerToNauticalMile(NauticalMileToHectometer(0.0) )== 0.0);
    CHECK(DecameterToNauticalMile(NauticalMileToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToNauticalMile(NauticalMileToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToNauticalMile(NauticalMileToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToNauticalMile(NauticalMileToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToNauticalMile(NauticalMileToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToNauticalMile(NauticalMileToNanometer(0.0) )== 0.0);
    CHECK(PicometerToNauticalMile(NauticalMileToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToNauticalMile(NauticalMileToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToNauticalMile(NauticalMileToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToNauticalMile(NauticalMileToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToNauticalMile(NauticalMileToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToNauticalMile(NauticalMileToAngstrom(0.0) )== 0.0);
    CHECK(FermiToNauticalMile(NauticalMileToFermi(0.0) )== 0.0);
    CHECK(MicronToNauticalMile(NauticalMileToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToNauticalMile(NauticalMileToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToNauticalMile(NauticalMileToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToNauticalMile(NauticalMileToMile(0.0) )== 0.0);
    CHECK(YardToNauticalMile(NauticalMileToYard(0.0) )== 0.0);
    CHECK(FootToNauticalMile(NauticalMileToFoot(0.0) )== 0.0);
    CHECK(InchToNauticalMile(NauticalMileToInch(0.0) )== 0.0);
    CHECK(MilToNauticalMile(NauticalMileToMil(0.0) )== 0.0);
    CHECK(ThouToNauticalMile(NauticalMileToThou(0.0) )== 0.0);

        //Nautical
    CHECK(FathomToNauticalMile(NauticalMileToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToNauticalMile(NauticalMileToRod(0.0) )== 0.0);
    CHECK(ChainToNauticalMile(NauticalMileToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToNauticalMile(NauticalMileToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToNauticalMile(NauticalMileToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToNauticalMile(NauticalMileToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToNauticalMile(NauticalMileToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToNauticalMile(NauticalMileToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToNauticalMile(NauticalMileToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToNauticalMile(NauticalMileToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToNauticalMile(NauticalMileToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToNauticalMile(NauticalMileToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToNauticalMile(NauticalMileToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToNauticalMile(NauticalMileToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToNauticalMile(NauticalMileToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToNauticalMile(NauticalMileToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToNauticalMile(NauticalMileToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToNauticalMile(NauticalMileToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToNauticalMile(NauticalMileToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToNauticalMile(NauticalMileToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToNauticalMile(NauticalMileToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToNauticalMile(NauticalMileToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToNauticalMile(NauticalMileToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToNauticalMile(NauticalMileToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToNauticalMile(NauticalMileToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToNauticalMile(NauticalMileToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToNauticalMile(NauticalMileToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToNauticalMile(NauticalMileToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToNauticalMile(NauticalMileToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToNauticalMile(NauticalMileToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToNauticalMile(NauticalMileToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToNauticalMile(NauticalMileToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToNauticalMile(NauticalMileToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToNauticalMile(NauticalMileToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToNauticalMile(NauticalMileToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToNauticalMile(NauticalMileToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToNauticalMile(NauticalMileToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToNauticalMile(NauticalMileToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(FathomToNauticalMile(NauticalMileToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToNauticalMile(NauticalMileToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToNauticalMile(NauticalMileToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
