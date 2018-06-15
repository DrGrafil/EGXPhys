#pragma once

TEST_CASE("Centimeter Length Conversion"){

	//Zero
        //AU
    CHECK(CentimeterToAstronomicalUnit(0.0) == 0.0);
    CHECK(CentimeterToLightYear(0.0) == 0.0);
    CHECK(CentimeterToParsec(0.0) == 0.0);

        //SI
    CHECK(CentimeterToMeter(0.0) == 0.0);
    CHECK(CentimeterToYottameter(0.0) == 0.0);
    CHECK(CentimeterToZettameter(0.0) == 0.0);
    CHECK(CentimeterToExameter(0.0) == 0.0);
    CHECK(CentimeterToPetameter(0.0) == 0.0);
    CHECK(CentimeterToTerameter(0.0) == 0.0);
    CHECK(CentimeterToGigameter(0.0) == 0.0);
    CHECK(CentimeterToMegameter(0.0) == 0.0);
    CHECK(CentimeterToKilometer(0.0) == 0.0);
    CHECK(CentimeterToHectometer(0.0) == 0.0);
    CHECK(CentimeterToDecameter(0.0) == 0.0);
    CHECK(CentimeterToDecimeter(0.0) == 0.0);
    CHECK(CentimeterToMillimeter(0.0) == 0.0);
    CHECK(CentimeterToMicrometer(0.0) == 0.0);
    CHECK(CentimeterToNanometer(0.0) == 0.0);
    CHECK(CentimeterToPicometer(0.0) == 0.0);
    CHECK(CentimeterToFemtometer(0.0) == 0.0);
    CHECK(CentimeterToAttometer(0.0) == 0.0);
    CHECK(CentimeterToZeptometer(0.0) == 0.0);
    CHECK(CentimeterToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(CentimeterToAngstrom(0.0) == 0.0);
    CHECK(CentimeterToFermi(0.0) == 0.0);
    CHECK(CentimeterToMicron(0.0) == 0.0);
    CHECK(CentimeterToCuXUnit(0.0) == 0.0);
    CHECK(CentimeterToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(CentimeterToMile(0.0) == 0.0);
    CHECK(CentimeterToYard(0.0) == 0.0);
    CHECK(CentimeterToFoot(0.0) == 0.0);
    CHECK(CentimeterToInch(0.0) == 0.0);
    CHECK(CentimeterToMil(0.0) == 0.0);
    CHECK(CentimeterToThou(0.0) == 0.0);

        //Nautical
    CHECK(CentimeterToNauticalMile(0.0) == 0.0);
    CHECK(CentimeterToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(CentimeterToRod(0.0) == 0.0);
    CHECK(CentimeterToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToCentimeter(CentimeterToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToCentimeter(CentimeterToLightYear(0.0) )== 0.0);
    CHECK(ParsecToCentimeter(CentimeterToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToCentimeter(CentimeterToMeter(0.0) )== 0.0);
    CHECK(YottameterToCentimeter(CentimeterToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToCentimeter(CentimeterToZettameter(0.0) )== 0.0);
    CHECK(ExameterToCentimeter(CentimeterToExameter(0.0) )== 0.0);
    CHECK(PetameterToCentimeter(CentimeterToPetameter(0.0) )== 0.0);
    CHECK(TerameterToCentimeter(CentimeterToTerameter(0.0) )== 0.0);
    CHECK(GigameterToCentimeter(CentimeterToGigameter(0.0) )== 0.0);
    CHECK(MegameterToCentimeter(CentimeterToMegameter(0.0) )== 0.0);
    CHECK(KilometerToCentimeter(CentimeterToKilometer(0.0) )== 0.0);
    CHECK(HectometerToCentimeter(CentimeterToHectometer(0.0) )== 0.0);
    CHECK(DecameterToCentimeter(CentimeterToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToCentimeter(CentimeterToDecimeter(0.0) )== 0.0);
    CHECK(MillimeterToCentimeter(CentimeterToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToCentimeter(CentimeterToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToCentimeter(CentimeterToNanometer(0.0) )== 0.0);
    CHECK(PicometerToCentimeter(CentimeterToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToCentimeter(CentimeterToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToCentimeter(CentimeterToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToCentimeter(CentimeterToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToCentimeter(CentimeterToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToCentimeter(CentimeterToAngstrom(0.0) )== 0.0);
    CHECK(FermiToCentimeter(CentimeterToFermi(0.0) )== 0.0);
    CHECK(MicronToCentimeter(CentimeterToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToCentimeter(CentimeterToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToCentimeter(CentimeterToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToCentimeter(CentimeterToMile(0.0) )== 0.0);
    CHECK(YardToCentimeter(CentimeterToYard(0.0) )== 0.0);
    CHECK(FootToCentimeter(CentimeterToFoot(0.0) )== 0.0);
    CHECK(InchToCentimeter(CentimeterToInch(0.0) )== 0.0);
    CHECK(MilToCentimeter(CentimeterToMil(0.0) )== 0.0);
    CHECK(ThouToCentimeter(CentimeterToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToCentimeter(CentimeterToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToCentimeter(CentimeterToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToCentimeter(CentimeterToRod(0.0) )== 0.0);
    CHECK(ChainToCentimeter(CentimeterToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToCentimeter(CentimeterToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToCentimeter(CentimeterToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToCentimeter(CentimeterToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToCentimeter(CentimeterToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToCentimeter(CentimeterToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToCentimeter(CentimeterToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToCentimeter(CentimeterToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToCentimeter(CentimeterToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToCentimeter(CentimeterToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToCentimeter(CentimeterToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToCentimeter(CentimeterToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToCentimeter(CentimeterToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToCentimeter(CentimeterToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToCentimeter(CentimeterToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToCentimeter(CentimeterToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToCentimeter(CentimeterToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToCentimeter(CentimeterToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToCentimeter(CentimeterToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToCentimeter(CentimeterToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToCentimeter(CentimeterToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToCentimeter(CentimeterToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToCentimeter(CentimeterToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToCentimeter(CentimeterToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToCentimeter(CentimeterToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToCentimeter(CentimeterToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToCentimeter(CentimeterToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToCentimeter(CentimeterToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToCentimeter(CentimeterToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToCentimeter(CentimeterToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToCentimeter(CentimeterToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToCentimeter(CentimeterToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToCentimeter(CentimeterToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToCentimeter(CentimeterToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToCentimeter(CentimeterToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToCentimeter(CentimeterToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToCentimeter(CentimeterToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToCentimeter(CentimeterToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToCentimeter(CentimeterToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
