#pragma once

TEST_CASE("Picometer Length Conversion"){

	//Zero
        //AU
    CHECK(PicometerToAstronomicalUnit(0.0) == 0.0);
    CHECK(PicometerToLightYear(0.0) == 0.0);
    CHECK(PicometerToParsec(0.0) == 0.0);

        //SI
    CHECK(PicometerToMeter(0.0) == 0.0);
    CHECK(PicometerToYottameter(0.0) == 0.0);
    CHECK(PicometerToZettameter(0.0) == 0.0);
    CHECK(PicometerToExameter(0.0) == 0.0);
    CHECK(PicometerToPetameter(0.0) == 0.0);
    CHECK(PicometerToTerameter(0.0) == 0.0);
    CHECK(PicometerToGigameter(0.0) == 0.0);
    CHECK(PicometerToMegameter(0.0) == 0.0);
    CHECK(PicometerToKilometer(0.0) == 0.0);
    CHECK(PicometerToHectometer(0.0) == 0.0);
    CHECK(PicometerToDecameter(0.0) == 0.0);
    CHECK(PicometerToDecimeter(0.0) == 0.0);
    CHECK(PicometerToCentimeter(0.0) == 0.0);
    CHECK(PicometerToMillimeter(0.0) == 0.0);
    CHECK(PicometerToMicrometer(0.0) == 0.0);
    CHECK(PicometerToNanometer(0.0) == 0.0);
    CHECK(PicometerToFemtometer(0.0) == 0.0);
    CHECK(PicometerToAttometer(0.0) == 0.0);
    CHECK(PicometerToZeptometer(0.0) == 0.0);
    CHECK(PicometerToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(PicometerToAngstrom(0.0) == 0.0);
    CHECK(PicometerToFermi(0.0) == 0.0);
    CHECK(PicometerToMicron(0.0) == 0.0);
    CHECK(PicometerToCuXUnit(0.0) == 0.0);
    CHECK(PicometerToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(PicometerToMile(0.0) == 0.0);
    CHECK(PicometerToYard(0.0) == 0.0);
    CHECK(PicometerToFoot(0.0) == 0.0);
    CHECK(PicometerToInch(0.0) == 0.0);
    CHECK(PicometerToMil(0.0) == 0.0);
    CHECK(PicometerToThou(0.0) == 0.0);

        //Nautical
    CHECK(PicometerToNauticalMile(0.0) == 0.0);
    CHECK(PicometerToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(PicometerToRod(0.0) == 0.0);
    CHECK(PicometerToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToPicometer(PicometerToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToPicometer(PicometerToLightYear(0.0) )== 0.0);
    CHECK(ParsecToPicometer(PicometerToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToPicometer(PicometerToMeter(0.0) )== 0.0);
    CHECK(YottameterToPicometer(PicometerToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToPicometer(PicometerToZettameter(0.0) )== 0.0);
    CHECK(ExameterToPicometer(PicometerToExameter(0.0) )== 0.0);
    CHECK(PetameterToPicometer(PicometerToPetameter(0.0) )== 0.0);
    CHECK(TerameterToPicometer(PicometerToTerameter(0.0) )== 0.0);
    CHECK(GigameterToPicometer(PicometerToGigameter(0.0) )== 0.0);
    CHECK(MegameterToPicometer(PicometerToMegameter(0.0) )== 0.0);
    CHECK(KilometerToPicometer(PicometerToKilometer(0.0) )== 0.0);
    CHECK(HectometerToPicometer(PicometerToHectometer(0.0) )== 0.0);
    CHECK(DecameterToPicometer(PicometerToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToPicometer(PicometerToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToPicometer(PicometerToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToPicometer(PicometerToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToPicometer(PicometerToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToPicometer(PicometerToNanometer(0.0) )== 0.0);
    CHECK(FemtometerToPicometer(PicometerToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToPicometer(PicometerToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToPicometer(PicometerToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToPicometer(PicometerToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToPicometer(PicometerToAngstrom(0.0) )== 0.0);
    CHECK(FermiToPicometer(PicometerToFermi(0.0) )== 0.0);
    CHECK(MicronToPicometer(PicometerToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToPicometer(PicometerToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToPicometer(PicometerToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToPicometer(PicometerToMile(0.0) )== 0.0);
    CHECK(YardToPicometer(PicometerToYard(0.0) )== 0.0);
    CHECK(FootToPicometer(PicometerToFoot(0.0) )== 0.0);
    CHECK(InchToPicometer(PicometerToInch(0.0) )== 0.0);
    CHECK(MilToPicometer(PicometerToMil(0.0) )== 0.0);
    CHECK(ThouToPicometer(PicometerToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToPicometer(PicometerToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToPicometer(PicometerToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToPicometer(PicometerToRod(0.0) )== 0.0);
    CHECK(ChainToPicometer(PicometerToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToPicometer(PicometerToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToPicometer(PicometerToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToPicometer(PicometerToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToPicometer(PicometerToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToPicometer(PicometerToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToPicometer(PicometerToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToPicometer(PicometerToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToPicometer(PicometerToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToPicometer(PicometerToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToPicometer(PicometerToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToPicometer(PicometerToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToPicometer(PicometerToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToPicometer(PicometerToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToPicometer(PicometerToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToPicometer(PicometerToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToPicometer(PicometerToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToPicometer(PicometerToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToPicometer(PicometerToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToPicometer(PicometerToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToPicometer(PicometerToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToPicometer(PicometerToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToPicometer(PicometerToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToPicometer(PicometerToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToPicometer(PicometerToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToPicometer(PicometerToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToPicometer(PicometerToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToPicometer(PicometerToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToPicometer(PicometerToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToPicometer(PicometerToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToPicometer(PicometerToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToPicometer(PicometerToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToPicometer(PicometerToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToPicometer(PicometerToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToPicometer(PicometerToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToPicometer(PicometerToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToPicometer(PicometerToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToPicometer(PicometerToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToPicometer(PicometerToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
