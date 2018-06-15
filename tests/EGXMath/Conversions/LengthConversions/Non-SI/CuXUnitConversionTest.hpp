#pragma once

TEST_CASE("CuXUnit Length Conversion"){

	//Zero
        //AU
    CHECK(CuXUnitToAstronomicalUnit(0.0) == 0.0);
    CHECK(CuXUnitToLightYear(0.0) == 0.0);
    CHECK(CuXUnitToParsec(0.0) == 0.0);

        //SI
    CHECK(CuXUnitToMeter(0.0) == 0.0);
    CHECK(CuXUnitToYottameter(0.0) == 0.0);
    CHECK(CuXUnitToZettameter(0.0) == 0.0);
    CHECK(CuXUnitToExameter(0.0) == 0.0);
    CHECK(CuXUnitToPetameter(0.0) == 0.0);
    CHECK(CuXUnitToTerameter(0.0) == 0.0);
    CHECK(CuXUnitToGigameter(0.0) == 0.0);
    CHECK(CuXUnitToMegameter(0.0) == 0.0);
    CHECK(CuXUnitToKilometer(0.0) == 0.0);
    CHECK(CuXUnitToHectometer(0.0) == 0.0);
    CHECK(CuXUnitToDecameter(0.0) == 0.0);
    CHECK(CuXUnitToDecimeter(0.0) == 0.0);
    CHECK(CuXUnitToCentimeter(0.0) == 0.0);
    CHECK(CuXUnitToMillimeter(0.0) == 0.0);
    CHECK(CuXUnitToMicrometer(0.0) == 0.0);
    CHECK(CuXUnitToNanometer(0.0) == 0.0);
    CHECK(CuXUnitToPicometer(0.0) == 0.0);
    CHECK(CuXUnitToFemtometer(0.0) == 0.0);
    CHECK(CuXUnitToAttometer(0.0) == 0.0);
    CHECK(CuXUnitToZeptometer(0.0) == 0.0);
    CHECK(CuXUnitToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(CuXUnitToAngstrom(0.0) == 0.0);
    CHECK(CuXUnitToFermi(0.0) == 0.0);
    CHECK(CuXUnitToMicron(0.0) == 0.0);
    CHECK(CuXUnitToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(CuXUnitToMile(0.0) == 0.0);
    CHECK(CuXUnitToYard(0.0) == 0.0);
    CHECK(CuXUnitToFoot(0.0) == 0.0);
    CHECK(CuXUnitToInch(0.0) == 0.0);
    CHECK(CuXUnitToMil(0.0) == 0.0);
    CHECK(CuXUnitToThou(0.0) == 0.0);

        //Nautical
    CHECK(CuXUnitToNauticalMile(0.0) == 0.0);
    CHECK(CuXUnitToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(CuXUnitToRod(0.0) == 0.0);
    CHECK(CuXUnitToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToCuXUnit(CuXUnitToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToCuXUnit(CuXUnitToLightYear(0.0) )== 0.0);
    CHECK(ParsecToCuXUnit(CuXUnitToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToCuXUnit(CuXUnitToMeter(0.0) )== 0.0);
    CHECK(YottameterToCuXUnit(CuXUnitToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToCuXUnit(CuXUnitToZettameter(0.0) )== 0.0);
    CHECK(ExameterToCuXUnit(CuXUnitToExameter(0.0) )== 0.0);
    CHECK(PetameterToCuXUnit(CuXUnitToPetameter(0.0) )== 0.0);
    CHECK(TerameterToCuXUnit(CuXUnitToTerameter(0.0) )== 0.0);
    CHECK(GigameterToCuXUnit(CuXUnitToGigameter(0.0) )== 0.0);
    CHECK(MegameterToCuXUnit(CuXUnitToMegameter(0.0) )== 0.0);
    CHECK(KilometerToCuXUnit(CuXUnitToKilometer(0.0) )== 0.0);
    CHECK(HectometerToCuXUnit(CuXUnitToHectometer(0.0) )== 0.0);
    CHECK(DecameterToCuXUnit(CuXUnitToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToCuXUnit(CuXUnitToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToCuXUnit(CuXUnitToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToCuXUnit(CuXUnitToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToCuXUnit(CuXUnitToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToCuXUnit(CuXUnitToNanometer(0.0) )== 0.0);
    CHECK(PicometerToCuXUnit(CuXUnitToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToCuXUnit(CuXUnitToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToCuXUnit(CuXUnitToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToCuXUnit(CuXUnitToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToCuXUnit(CuXUnitToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToCuXUnit(CuXUnitToAngstrom(0.0) )== 0.0);
    CHECK(FermiToCuXUnit(CuXUnitToFermi(0.0) )== 0.0);
    CHECK(MicronToCuXUnit(CuXUnitToMicron(0.0) )== 0.0);
    CHECK(MoXUnitToCuXUnit(CuXUnitToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToCuXUnit(CuXUnitToMile(0.0) )== 0.0);
    CHECK(YardToCuXUnit(CuXUnitToYard(0.0) )== 0.0);
    CHECK(FootToCuXUnit(CuXUnitToFoot(0.0) )== 0.0);
    CHECK(InchToCuXUnit(CuXUnitToInch(0.0) )== 0.0);
    CHECK(MilToCuXUnit(CuXUnitToMil(0.0) )== 0.0);
    CHECK(ThouToCuXUnit(CuXUnitToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToCuXUnit(CuXUnitToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToCuXUnit(CuXUnitToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToCuXUnit(CuXUnitToRod(0.0) )== 0.0);
    CHECK(ChainToCuXUnit(CuXUnitToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToCuXUnit(CuXUnitToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToCuXUnit(CuXUnitToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToCuXUnit(CuXUnitToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToCuXUnit(CuXUnitToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToCuXUnit(CuXUnitToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToCuXUnit(CuXUnitToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToCuXUnit(CuXUnitToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToCuXUnit(CuXUnitToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToCuXUnit(CuXUnitToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToCuXUnit(CuXUnitToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToCuXUnit(CuXUnitToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToCuXUnit(CuXUnitToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToCuXUnit(CuXUnitToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToCuXUnit(CuXUnitToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToCuXUnit(CuXUnitToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToCuXUnit(CuXUnitToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToCuXUnit(CuXUnitToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToCuXUnit(CuXUnitToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToCuXUnit(CuXUnitToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToCuXUnit(CuXUnitToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToCuXUnit(CuXUnitToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToCuXUnit(CuXUnitToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToCuXUnit(CuXUnitToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToCuXUnit(CuXUnitToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToCuXUnit(CuXUnitToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToCuXUnit(CuXUnitToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToCuXUnit(CuXUnitToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToCuXUnit(CuXUnitToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToCuXUnit(CuXUnitToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToCuXUnit(CuXUnitToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToCuXUnit(CuXUnitToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToCuXUnit(CuXUnitToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToCuXUnit(CuXUnitToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToCuXUnit(CuXUnitToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToCuXUnit(CuXUnitToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToCuXUnit(CuXUnitToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToCuXUnit(CuXUnitToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToCuXUnit(CuXUnitToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
