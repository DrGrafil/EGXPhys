#pragma once

TEST_CASE("uzitzs Length Conversion"){

	//Zero
        //AU
    CHECK(uzitzsToAstronomicalUnit(0.0) == 0.0);
    CHECK(uzitzsToLightYear(0.0) == 0.0);
    CHECK(uzitzsToParsec(0.0) == 0.0);

        //SI
    CHECK(uzitzsToMeter(0.0) == 0.0);
    CHECK(uzitzsToYottameter(0.0) == 0.0);
    CHECK(uzitzsToZettameter(0.0) == 0.0);
    CHECK(uzitzsToExameter(0.0) == 0.0);
    CHECK(uzitzsToPetameter(0.0) == 0.0);
    CHECK(uzitzsToTerameter(0.0) == 0.0);
    CHECK(uzitzsToGigameter(0.0) == 0.0);
    CHECK(uzitzsToMegameter(0.0) == 0.0);
    CHECK(uzitzsToKilometer(0.0) == 0.0);
    CHECK(uzitzsToHectometer(0.0) == 0.0);
    CHECK(uzitzsToDecameter(0.0) == 0.0);
    CHECK(uzitzsToDecimeter(0.0) == 0.0);
    CHECK(uzitzsToCentimeter(0.0) == 0.0);
    CHECK(uzitzsToMillimeter(0.0) == 0.0);
    CHECK(uzitzsToMicrometer(0.0) == 0.0);
    CHECK(uzitzsToNanometer(0.0) == 0.0);
    CHECK(uzitzsToPicometer(0.0) == 0.0);
    CHECK(uzitzsToFemtometer(0.0) == 0.0);
    CHECK(uzitzsToAttometer(0.0) == 0.0);
    CHECK(uzitzsToZeptometer(0.0) == 0.0);
    CHECK(uzitzsToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(uzitzsToAngstrom(0.0) == 0.0);
    CHECK(uzitzsToFermi(0.0) == 0.0);
    CHECK(uzitzsToMicron(0.0) == 0.0);
    CHECK(uzitzsToCuXUnit(0.0) == 0.0);
    CHECK(uzitzsToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(uzitzsToMile(0.0) == 0.0);
    CHECK(uzitzsToYard(0.0) == 0.0);
    CHECK(uzitzsToFoot(0.0) == 0.0);
    CHECK(uzitzsToInch(0.0) == 0.0);
    CHECK(uzitzsToMil(0.0) == 0.0);
    CHECK(uzitzsToThou(0.0) == 0.0);

        //Nautical
    CHECK(uzitzsToNauticalMile(0.0) == 0.0);
    CHECK(uzitzsToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(uzitzsToRod(0.0) == 0.0);
    CHECK(uzitzsToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitTouzitzs(uzitzsToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearTouzitzs(uzitzsToLightYear(0.0) )== 0.0);
    CHECK(ParsecTouzitzs(uzitzsToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterTouzitzs(uzitzsToMeter(0.0) )== 0.0);
    CHECK(YottameterTouzitzs(uzitzsToYottameter(0.0) )== 0.0);
    CHECK(ZettameterTouzitzs(uzitzsToZettameter(0.0) )== 0.0);
    CHECK(ExameterTouzitzs(uzitzsToExameter(0.0) )== 0.0);
    CHECK(PetameterTouzitzs(uzitzsToPetameter(0.0) )== 0.0);
    CHECK(TerameterTouzitzs(uzitzsToTerameter(0.0) )== 0.0);
    CHECK(GigameterTouzitzs(uzitzsToGigameter(0.0) )== 0.0);
    CHECK(MegameterTouzitzs(uzitzsToMegameter(0.0) )== 0.0);
    CHECK(KilometerTouzitzs(uzitzsToKilometer(0.0) )== 0.0);
    CHECK(HectometerTouzitzs(uzitzsToHectometer(0.0) )== 0.0);
    CHECK(DecameterTouzitzs(uzitzsToDecameter(0.0) )== 0.0);
    CHECK(DecimeterTouzitzs(uzitzsToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterTouzitzs(uzitzsToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterTouzitzs(uzitzsToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerTouzitzs(uzitzsToMicrometer(0.0) )== 0.0);
    CHECK(NanometerTouzitzs(uzitzsToNanometer(0.0) )== 0.0);
    CHECK(PicometerTouzitzs(uzitzsToPicometer(0.0) )== 0.0);
    CHECK(FemtometerTouzitzs(uzitzsToFemtometer(0.0) )== 0.0);
    CHECK(AttometerTouzitzs(uzitzsToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerTouzitzs(uzitzsToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerTouzitzs(uzitzsToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromTouzitzs(uzitzsToAngstrom(0.0) )== 0.0);
    CHECK(FermiTouzitzs(uzitzsToFermi(0.0) )== 0.0);
    CHECK(MicronTouzitzs(uzitzsToMicron(0.0) )== 0.0);
    CHECK(CuXUnitTouzitzs(uzitzsToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitTouzitzs(uzitzsToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileTouzitzs(uzitzsToMile(0.0) )== 0.0);
    CHECK(YardTouzitzs(uzitzsToYard(0.0) )== 0.0);
    CHECK(FootTouzitzs(uzitzsToFoot(0.0) )== 0.0);
    CHECK(InchTouzitzs(uzitzsToInch(0.0) )== 0.0);
    CHECK(MilTouzitzs(uzitzsToMil(0.0) )== 0.0);
    CHECK(ThouTouzitzs(uzitzsToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileTouzitzs(uzitzsToNauticalMile(0.0) )== 0.0);
    CHECK(FathomTouzitzs(uzitzsToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodTouzitzs(uzitzsToRod(0.0) )== 0.0);
    CHECK(ChainTouzitzs(uzitzsToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitTouzitzs(uzitzsToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearTouzitzs(uzitzsToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecTouzitzs(uzitzsToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterTouzitzs(uzitzsToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterTouzitzs(uzitzsToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterTouzitzs(uzitzsToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterTouzitzs(uzitzsToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterTouzitzs(uzitzsToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterTouzitzs(uzitzsToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterTouzitzs(uzitzsToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterTouzitzs(uzitzsToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerTouzitzs(uzitzsToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerTouzitzs(uzitzsToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterTouzitzs(uzitzsToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterTouzitzs(uzitzsToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterTouzitzs(uzitzsToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterTouzitzs(uzitzsToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerTouzitzs(uzitzsToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerTouzitzs(uzitzsToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerTouzitzs(uzitzsToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerTouzitzs(uzitzsToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerTouzitzs(uzitzsToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerTouzitzs(uzitzsToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerTouzitzs(uzitzsToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromTouzitzs(uzitzsToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiTouzitzs(uzitzsToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronTouzitzs(uzitzsToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitTouzitzs(uzitzsToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitTouzitzs(uzitzsToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileTouzitzs(uzitzsToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardTouzitzs(uzitzsToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootTouzitzs(uzitzsToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchTouzitzs(uzitzsToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilTouzitzs(uzitzsToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouTouzitzs(uzitzsToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileTouzitzs(uzitzsToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomTouzitzs(uzitzsToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodTouzitzs(uzitzsToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainTouzitzs(uzitzsToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
