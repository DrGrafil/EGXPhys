#pragma once

TEST_CASE("Petameter Length Conversion"){

	//Zero
        //AU
    CHECK(PetameterToAstronomicalUnit(0.0) == 0.0);
    CHECK(PetameterToLightYear(0.0) == 0.0);
    CHECK(PetameterToParsec(0.0) == 0.0);

        //SI
    CHECK(PetameterToMeter(0.0) == 0.0);
    CHECK(PetameterToYottameter(0.0) == 0.0);
    CHECK(PetameterToZettameter(0.0) == 0.0);
    CHECK(PetameterToExameter(0.0) == 0.0);
    CHECK(PetameterToTerameter(0.0) == 0.0);
    CHECK(PetameterToGigameter(0.0) == 0.0);
    CHECK(PetameterToMegameter(0.0) == 0.0);
    CHECK(PetameterToKilometer(0.0) == 0.0);
    CHECK(PetameterToHectometer(0.0) == 0.0);
    CHECK(PetameterToDecameter(0.0) == 0.0);
    CHECK(PetameterToDecimeter(0.0) == 0.0);
    CHECK(PetameterToCentimeter(0.0) == 0.0);
    CHECK(PetameterToMillimeter(0.0) == 0.0);
    CHECK(PetameterToMicrometer(0.0) == 0.0);
    CHECK(PetameterToNanometer(0.0) == 0.0);
    CHECK(PetameterToPicometer(0.0) == 0.0);
    CHECK(PetameterToFemtometer(0.0) == 0.0);
    CHECK(PetameterToAttometer(0.0) == 0.0);
    CHECK(PetameterToZeptometer(0.0) == 0.0);
    CHECK(PetameterToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(PetameterToAngstrom(0.0) == 0.0);
    CHECK(PetameterToFermi(0.0) == 0.0);
    CHECK(PetameterToMicron(0.0) == 0.0);
    CHECK(PetameterToCuXUnit(0.0) == 0.0);
    CHECK(PetameterToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(PetameterToMile(0.0) == 0.0);
    CHECK(PetameterToYard(0.0) == 0.0);
    CHECK(PetameterToFoot(0.0) == 0.0);
    CHECK(PetameterToInch(0.0) == 0.0);
    CHECK(PetameterToMil(0.0) == 0.0);
    CHECK(PetameterToThou(0.0) == 0.0);

        //Nautical
    CHECK(PetameterToNauticalMile(0.0) == 0.0);
    CHECK(PetameterToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(PetameterToRod(0.0) == 0.0);
    CHECK(PetameterToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToPetameter(PetameterToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToPetameter(PetameterToLightYear(0.0) )== 0.0);
    CHECK(ParsecToPetameter(PetameterToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToPetameter(PetameterToMeter(0.0) )== 0.0);
    CHECK(YottameterToPetameter(PetameterToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToPetameter(PetameterToZettameter(0.0) )== 0.0);
    CHECK(ExameterToPetameter(PetameterToExameter(0.0) )== 0.0);
    CHECK(TerameterToPetameter(PetameterToTerameter(0.0) )== 0.0);
    CHECK(GigameterToPetameter(PetameterToGigameter(0.0) )== 0.0);
    CHECK(MegameterToPetameter(PetameterToMegameter(0.0) )== 0.0);
    CHECK(KilometerToPetameter(PetameterToKilometer(0.0) )== 0.0);
    CHECK(HectometerToPetameter(PetameterToHectometer(0.0) )== 0.0);
    CHECK(DecameterToPetameter(PetameterToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToPetameter(PetameterToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToPetameter(PetameterToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToPetameter(PetameterToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToPetameter(PetameterToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToPetameter(PetameterToNanometer(0.0) )== 0.0);
    CHECK(PicometerToPetameter(PetameterToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToPetameter(PetameterToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToPetameter(PetameterToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToPetameter(PetameterToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToPetameter(PetameterToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(AngstromToPetameter(PetameterToAngstrom(0.0) )== 0.0);
    CHECK(FermiToPetameter(PetameterToFermi(0.0) )== 0.0);
    CHECK(MicronToPetameter(PetameterToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToPetameter(PetameterToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToPetameter(PetameterToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToPetameter(PetameterToMile(0.0) )== 0.0);
    CHECK(YardToPetameter(PetameterToYard(0.0) )== 0.0);
    CHECK(FootToPetameter(PetameterToFoot(0.0) )== 0.0);
    CHECK(InchToPetameter(PetameterToInch(0.0) )== 0.0);
    CHECK(MilToPetameter(PetameterToMil(0.0) )== 0.0);
    CHECK(ThouToPetameter(PetameterToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToPetameter(PetameterToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToPetameter(PetameterToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToPetameter(PetameterToRod(0.0) )== 0.0);
    CHECK(ChainToPetameter(PetameterToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToPetameter(PetameterToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToPetameter(PetameterToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToPetameter(PetameterToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToPetameter(PetameterToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToPetameter(PetameterToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToPetameter(PetameterToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToPetameter(PetameterToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToPetameter(PetameterToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToPetameter(PetameterToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToPetameter(PetameterToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToPetameter(PetameterToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToPetameter(PetameterToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToPetameter(PetameterToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToPetameter(PetameterToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToPetameter(PetameterToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToPetameter(PetameterToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToPetameter(PetameterToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToPetameter(PetameterToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToPetameter(PetameterToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToPetameter(PetameterToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToPetameter(PetameterToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToPetameter(PetameterToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToPetameter(PetameterToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(AngstromToPetameter(PetameterToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToPetameter(PetameterToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToPetameter(PetameterToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToPetameter(PetameterToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToPetameter(PetameterToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToPetameter(PetameterToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToPetameter(PetameterToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToPetameter(PetameterToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToPetameter(PetameterToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToPetameter(PetameterToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToPetameter(PetameterToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToPetameter(PetameterToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToPetameter(PetameterToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToPetameter(PetameterToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToPetameter(PetameterToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
