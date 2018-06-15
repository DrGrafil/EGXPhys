#pragma once

TEST_CASE("Foot Length Conversion"){

	//Zero
        //AU
    CHECK(FootToAstronomicalUnit(0.0) == 0.0);
    CHECK(FootToLightYear(0.0) == 0.0);
    CHECK(FootToParsec(0.0) == 0.0);

        //SI
    CHECK(FootToMeter(0.0) == 0.0);
    CHECK(FootToYottameter(0.0) == 0.0);
    CHECK(FootToZettameter(0.0) == 0.0);
    CHECK(FootToExameter(0.0) == 0.0);
    CHECK(FootToPetameter(0.0) == 0.0);
    CHECK(FootToTerameter(0.0) == 0.0);
    CHECK(FootToGigameter(0.0) == 0.0);
    CHECK(FootToMegameter(0.0) == 0.0);
    CHECK(FootToKilometer(0.0) == 0.0);
    CHECK(FootToHectometer(0.0) == 0.0);
    CHECK(FootToDecameter(0.0) == 0.0);
    CHECK(FootToDecimeter(0.0) == 0.0);
    CHECK(FootToCentimeter(0.0) == 0.0);
    CHECK(FootToMillimeter(0.0) == 0.0);
    CHECK(FootToMicrometer(0.0) == 0.0);
    CHECK(FootToNanometer(0.0) == 0.0);
    CHECK(FootToPicometer(0.0) == 0.0);
    CHECK(FootToFemtometer(0.0) == 0.0);
    CHECK(FootToAttometer(0.0) == 0.0);
    CHECK(FootToZeptometer(0.0) == 0.0);
    CHECK(FootToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(FootToAngstrom(0.0) == 0.0);
    CHECK(FootToFermi(0.0) == 0.0);
    CHECK(FootToMicron(0.0) == 0.0);
    CHECK(FootToCuXUnit(0.0) == 0.0);
    CHECK(FootToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(FootToMile(0.0) == 0.0);
    CHECK(FootToYard(0.0) == 0.0);
    CHECK(FootToInch(0.0) == 0.0);
    CHECK(FootToMil(0.0) == 0.0);
    CHECK(FootToThou(0.0) == 0.0);

        //Nautical
    CHECK(FootToNauticalMile(0.0) == 0.0);
    CHECK(FootToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(FootToRod(0.0) == 0.0);
    CHECK(FootToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToFoot(FootToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToFoot(FootToLightYear(0.0) )== 0.0);
    CHECK(ParsecToFoot(FootToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToFoot(FootToMeter(0.0) )== 0.0);
    CHECK(YottameterToFoot(FootToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToFoot(FootToZettameter(0.0) )== 0.0);
    CHECK(ExameterToFoot(FootToExameter(0.0) )== 0.0);
    CHECK(PetameterToFoot(FootToPetameter(0.0) )== 0.0);
    CHECK(TerameterToFoot(FootToTerameter(0.0) )== 0.0);
    CHECK(GigameterToFoot(FootToGigameter(0.0) )== 0.0);
    CHECK(MegameterToFoot(FootToMegameter(0.0) )== 0.0);
    CHECK(KilometerToFoot(FootToKilometer(0.0) )== 0.0);
    CHECK(HectometerToFoot(FootToHectometer(0.0) )== 0.0);
    CHECK(DecameterToFoot(FootToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToFoot(FootToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToFoot(FootToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToFoot(FootToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToFoot(FootToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToFoot(FootToNanometer(0.0) )== 0.0);
    CHECK(PicometerToFoot(FootToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToFoot(FootToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToFoot(FootToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToFoot(FootToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToFoot(FootToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToFoot(FootToAngstrom(0.0) )== 0.0);
    CHECK(FermiToFoot(FootToFermi(0.0) )== 0.0);
    CHECK(MicronToFoot(FootToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToFoot(FootToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToFoot(FootToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToFoot(FootToMile(0.0) )== 0.0);
    CHECK(YardToFoot(FootToYard(0.0) )== 0.0);
    CHECK(InchToFoot(FootToInch(0.0) )== 0.0);
    CHECK(MilToFoot(FootToMil(0.0) )== 0.0);
    CHECK(ThouToFoot(FootToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToFoot(FootToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToFoot(FootToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToFoot(FootToRod(0.0) )== 0.0);
    CHECK(ChainToFoot(FootToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToFoot(FootToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToFoot(FootToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToFoot(FootToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToFoot(FootToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToFoot(FootToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToFoot(FootToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToFoot(FootToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToFoot(FootToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToFoot(FootToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToFoot(FootToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToFoot(FootToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToFoot(FootToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToFoot(FootToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToFoot(FootToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToFoot(FootToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToFoot(FootToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToFoot(FootToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToFoot(FootToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToFoot(FootToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToFoot(FootToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToFoot(FootToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToFoot(FootToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToFoot(FootToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToFoot(FootToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToFoot(FootToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToFoot(FootToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToFoot(FootToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToFoot(FootToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToFoot(FootToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToFoot(FootToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToFoot(FootToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToFoot(FootToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToFoot(FootToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToFoot(FootToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToFoot(FootToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToFoot(FootToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToFoot(FootToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToFoot(FootToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
