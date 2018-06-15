#pragma once

TEST_CASE("Exameter Length Conversion"){

	//Zero
        //AU
    CHECK(ExameterToAstronomicalUnit(0.0) == 0.0);
    CHECK(ExameterToLightYear(0.0) == 0.0);
    CHECK(ExameterToParsec(0.0) == 0.0);

        //SI
    CHECK(ExameterToMeter(0.0) == 0.0);
    CHECK(ExameterToYottameter(0.0) == 0.0);
    CHECK(ExameterToZettameter(0.0) == 0.0);
    CHECK(ExameterToPetameter(0.0) == 0.0);
    CHECK(ExameterToTerameter(0.0) == 0.0);
    CHECK(ExameterToGigameter(0.0) == 0.0);
    CHECK(ExameterToMegameter(0.0) == 0.0);
    CHECK(ExameterToKilometer(0.0) == 0.0);
    CHECK(ExameterToHectometer(0.0) == 0.0);
    CHECK(ExameterToDecameter(0.0) == 0.0);
    CHECK(ExameterToDecimeter(0.0) == 0.0);
    CHECK(ExameterToCentimeter(0.0) == 0.0);
    CHECK(ExameterToMillimeter(0.0) == 0.0);
    CHECK(ExameterToMicrometer(0.0) == 0.0);
    CHECK(ExameterToNanometer(0.0) == 0.0);
    CHECK(ExameterToPicometer(0.0) == 0.0);
    CHECK(ExameterToFemtometer(0.0) == 0.0);
    CHECK(ExameterToAttometer(0.0) == 0.0);
    CHECK(ExameterToZeptometer(0.0) == 0.0);
    CHECK(ExameterToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(ExameterToAngstrom(0.0) == 0.0);
    CHECK(ExameterToFermi(0.0) == 0.0);
    CHECK(ExameterToMicron(0.0) == 0.0);
    CHECK(ExameterToCuXUnit(0.0) == 0.0);
    CHECK(ExameterToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(ExameterToMile(0.0) == 0.0);
    CHECK(ExameterToYard(0.0) == 0.0);
    CHECK(ExameterToFoot(0.0) == 0.0);
    CHECK(ExameterToInch(0.0) == 0.0);
    CHECK(ExameterToMil(0.0) == 0.0);
    CHECK(ExameterToThou(0.0) == 0.0);

        //Nautical
    CHECK(ExameterToNauticalMile(0.0) == 0.0);
    CHECK(ExameterToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(ExameterToRod(0.0) == 0.0);
    CHECK(ExameterToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToExameter(ExameterToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToExameter(ExameterToLightYear(0.0) )== 0.0);
    CHECK(ParsecToExameter(ExameterToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToExameter(ExameterToMeter(0.0) )== 0.0);
    CHECK(YottameterToExameter(ExameterToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToExameter(ExameterToZettameter(0.0) )== 0.0);
    CHECK(PetameterToExameter(ExameterToPetameter(0.0) )== 0.0);
    CHECK(TerameterToExameter(ExameterToTerameter(0.0) )== 0.0);
    CHECK(GigameterToExameter(ExameterToGigameter(0.0) )== 0.0);
    CHECK(MegameterToExameter(ExameterToMegameter(0.0) )== 0.0);
    CHECK(KilometerToExameter(ExameterToKilometer(0.0) )== 0.0);
    CHECK(HectometerToExameter(ExameterToHectometer(0.0) )== 0.0);
    CHECK(DecameterToExameter(ExameterToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToExameter(ExameterToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToExameter(ExameterToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToExameter(ExameterToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToExameter(ExameterToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToExameter(ExameterToNanometer(0.0) )== 0.0);
    CHECK(PicometerToExameter(ExameterToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToExameter(ExameterToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToExameter(ExameterToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToExameter(ExameterToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToExameter(ExameterToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToExameter(ExameterToAngstrom(0.0) )== 0.0);
    CHECK(FermiToExameter(ExameterToFermi(0.0) )== 0.0);
    CHECK(MicronToExameter(ExameterToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToExameter(ExameterToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToExameter(ExameterToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToExameter(ExameterToMile(0.0) )== 0.0);
    CHECK(YardToExameter(ExameterToYard(0.0) )== 0.0);
    CHECK(FootToExameter(ExameterToFoot(0.0) )== 0.0);
    CHECK(InchToExameter(ExameterToInch(0.0) )== 0.0);
    CHECK(MilToExameter(ExameterToMil(0.0) )== 0.0);
    CHECK(ThouToExameter(ExameterToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToExameter(ExameterToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToExameter(ExameterToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToExameter(ExameterToRod(0.0) )== 0.0);
    CHECK(ChainToExameter(ExameterToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToExameter(ExameterToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToExameter(ExameterToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToExameter(ExameterToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToExameter(ExameterToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToExameter(ExameterToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToExameter(ExameterToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToExameter(ExameterToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToExameter(ExameterToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToExameter(ExameterToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToExameter(ExameterToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToExameter(ExameterToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToExameter(ExameterToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToExameter(ExameterToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToExameter(ExameterToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToExameter(ExameterToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToExameter(ExameterToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToExameter(ExameterToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToExameter(ExameterToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToExameter(ExameterToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToExameter(ExameterToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToExameter(ExameterToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToExameter(ExameterToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToExameter(ExameterToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToExameter(ExameterToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToExameter(ExameterToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToExameter(ExameterToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToExameter(ExameterToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToExameter(ExameterToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToExameter(ExameterToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToExameter(ExameterToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToExameter(ExameterToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToExameter(ExameterToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToExameter(ExameterToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToExameter(ExameterToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToExameter(ExameterToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToExameter(ExameterToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToExameter(ExameterToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToExameter(ExameterToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
