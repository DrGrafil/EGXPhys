#pragma once

TEST_CASE("Parsec Length Conversion"){

	//Zero
        //AU
    CHECK(ParsecToAstronomicalUnit(0.0) == 0.0);
    CHECK(ParsecToLightYear(0.0) == 0.0);

        //SI
    CHECK(ParsecToMeter(0.0) == 0.0);
    CHECK(ParsecToYottameter(0.0) == 0.0);
    CHECK(ParsecToZettameter(0.0) == 0.0);
    CHECK(ParsecToExameter(0.0) == 0.0);
    CHECK(ParsecToPetameter(0.0) == 0.0);
    CHECK(ParsecToTerameter(0.0) == 0.0);
    CHECK(ParsecToGigameter(0.0) == 0.0);
    CHECK(ParsecToMegameter(0.0) == 0.0);
    CHECK(ParsecToKilometer(0.0) == 0.0);
    CHECK(ParsecToHectometer(0.0) == 0.0);
    CHECK(ParsecToDecameter(0.0) == 0.0);
    CHECK(ParsecToDecimeter(0.0) == 0.0);
    CHECK(ParsecToCentimeter(0.0) == 0.0);
    CHECK(ParsecToMillimeter(0.0) == 0.0);
    CHECK(ParsecToMicrometer(0.0) == 0.0);
    CHECK(ParsecToNanometer(0.0) == 0.0);
    CHECK(ParsecToPicometer(0.0) == 0.0);
    CHECK(ParsecToFemtometer(0.0) == 0.0);
    CHECK(ParsecToAttometer(0.0) == 0.0);
    CHECK(ParsecToZeptometer(0.0) == 0.0);
    CHECK(ParsecToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(ParsecToAngstrom(0.0) == 0.0);
    CHECK(ParsecToFermi(0.0) == 0.0);
    CHECK(ParsecToMicron(0.0) == 0.0);
    CHECK(ParsecToCuXUnit(0.0) == 0.0);
    CHECK(ParsecToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(ParsecToMile(0.0) == 0.0);
    CHECK(ParsecToYard(0.0) == 0.0);
    CHECK(ParsecToFoot(0.0) == 0.0);
    CHECK(ParsecToInch(0.0) == 0.0);
    CHECK(ParsecToMil(0.0) == 0.0);
    CHECK(ParsecToThou(0.0) == 0.0);

        //Nautical
    CHECK(ParsecToNauticalMile(0.0) == 0.0);
    CHECK(ParsecToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(ParsecToRod(0.0) == 0.0);
    CHECK(ParsecToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToParsec(ParsecToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToParsec(ParsecToLightYear(0.0) )== 0.0);

        //SI
    CHECK(MeterToParsec(ParsecToMeter(0.0) )== 0.0);
    CHECK(YottameterToParsec(ParsecToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToParsec(ParsecToZettameter(0.0) )== 0.0);
    CHECK(ExameterToParsec(ParsecToExameter(0.0) )== 0.0);
    CHECK(PetameterToParsec(ParsecToPetameter(0.0) )== 0.0);
    CHECK(TerameterToParsec(ParsecToTerameter(0.0) )== 0.0);
    CHECK(GigameterToParsec(ParsecToGigameter(0.0) )== 0.0);
    CHECK(MegameterToParsec(ParsecToMegameter(0.0) )== 0.0);
    CHECK(KilometerToParsec(ParsecToKilometer(0.0) )== 0.0);
    CHECK(HectometerToParsec(ParsecToHectometer(0.0) )== 0.0);
    CHECK(DecameterToParsec(ParsecToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToParsec(ParsecToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToParsec(ParsecToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToParsec(ParsecToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToParsec(ParsecToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToParsec(ParsecToNanometer(0.0) )== 0.0);
    CHECK(PicometerToParsec(ParsecToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToParsec(ParsecToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToParsec(ParsecToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToParsec(ParsecToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToParsec(ParsecToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToParsec(ParsecToAngstrom(0.0) )== 0.0);
    CHECK(FermiToParsec(ParsecToFermi(0.0) )== 0.0);
    CHECK(MicronToParsec(ParsecToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToParsec(ParsecToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToParsec(ParsecToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToParsec(ParsecToMile(0.0) )== 0.0);
    CHECK(YardToParsec(ParsecToYard(0.0) )== 0.0);
    CHECK(FootToParsec(ParsecToFoot(0.0) )== 0.0);
    CHECK(InchToParsec(ParsecToInch(0.0) )== 0.0);
    CHECK(MilToParsec(ParsecToMil(0.0) )== 0.0);
    CHECK(ThouToParsec(ParsecToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToParsec(ParsecToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToParsec(ParsecToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToParsec(ParsecToRod(0.0) )== 0.0);
    CHECK(ChainToParsec(ParsecToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToParsec(ParsecToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToParsec(ParsecToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToParsec(ParsecToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToParsec(ParsecToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToParsec(ParsecToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToParsec(ParsecToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToParsec(ParsecToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToParsec(ParsecToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToParsec(ParsecToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToParsec(ParsecToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToParsec(ParsecToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToParsec(ParsecToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToParsec(ParsecToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToParsec(ParsecToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToParsec(ParsecToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToParsec(ParsecToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToParsec(ParsecToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToParsec(ParsecToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToParsec(ParsecToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToParsec(ParsecToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToParsec(ParsecToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToParsec(ParsecToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToParsec(ParsecToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToParsec(ParsecToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToParsec(ParsecToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToParsec(ParsecToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToParsec(ParsecToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToParsec(ParsecToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToParsec(ParsecToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToParsec(ParsecToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToParsec(ParsecToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToParsec(ParsecToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToParsec(ParsecToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToParsec(ParsecToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToParsec(ParsecToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToParsec(ParsecToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToParsec(ParsecToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToParsec(ParsecToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
