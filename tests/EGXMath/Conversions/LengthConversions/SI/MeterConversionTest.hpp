#pragma once

TEST_CASE("Meter Length Conversion"){

	//Zero
        //AU
    CHECK(MeterToAstronomicalUnit(0.0) == 0.0);
    CHECK(MeterToLightYear(0.0) == 0.0);
    CHECK(MeterToParsec(0.0) == 0.0);

        //SI
    //CHECK(uzitzsToMeter(0.0) == 0.0);
    CHECK(MeterToYottameter(0.0) == 0.0);
    CHECK(MeterToZettameter(0.0) == 0.0);
    CHECK(MeterToExameter(0.0) == 0.0);
    CHECK(MeterToPetameter(0.0) == 0.0);
    CHECK(MeterToTerameter(0.0) == 0.0);
    CHECK(MeterToGigameter(0.0) == 0.0);
    CHECK(MeterToMegameter(0.0) == 0.0);
    CHECK(MeterToKilometer(0.0) == 0.0);
    CHECK(MeterToHectometer(0.0) == 0.0);
    CHECK(MeterToDecameter(0.0) == 0.0);
    CHECK(MeterToDecimeter(0.0) == 0.0);
    CHECK(MeterToCentimeter(0.0) == 0.0);
    CHECK(MeterToMillimeter(0.0) == 0.0);
    CHECK(MeterToMicrometer(0.0) == 0.0);
    CHECK(MeterToNanometer(0.0) == 0.0);
    CHECK(MeterToPicometer(0.0) == 0.0);
    CHECK(MeterToFemtometer(0.0) == 0.0);
    CHECK(MeterToAttometer(0.0) == 0.0);
    CHECK(MeterToZeptometer(0.0) == 0.0);
    CHECK(MeterToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(MeterToAngstrom(0.0) == 0.0);
    CHECK(MeterToFermi(0.0) == 0.0);
    CHECK(MeterToMicron(0.0) == 0.0);
    CHECK(MeterToCuXUnit(0.0) == 0.0);
    CHECK(MeterToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(MeterToMile(0.0) == 0.0);
    CHECK(MeterToYard(0.0) == 0.0);
    CHECK(MeterToFoot(0.0) == 0.0);
    CHECK(MeterToInch(0.0) == 0.0);
    CHECK(MeterToMil(0.0) == 0.0);
    CHECK(MeterToThou(0.0) == 0.0);

        //Nautical
    CHECK(MeterToNauticalMile(0.0) == 0.0);
    CHECK(MeterToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(MeterToRod(0.0) == 0.0);
    CHECK(MeterToChain(0.0) == 0.0);
    

    //Zero Inverted

    //AU
    CHECK(AstronomicalUnitToMeter(MeterToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToMeter(MeterToLightYear(0.0) )== 0.0);
    CHECK(ParsecToMeter(MeterToParsec(0.0) )== 0.0);

    //SI
    //CHECK(YottameterTouzitzs(uzitzsToYottameter(0.0) )== 0.0);
    CHECK(YottameterToMeter(MeterToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToMeter(MeterToZettameter(0.0) )== 0.0);
    CHECK(ExameterToMeter(MeterToExameter(0.0) )== 0.0);
    CHECK(PetameterToMeter(MeterToPetameter(0.0) )== 0.0);
    CHECK(TerameterToMeter(MeterToTerameter(0.0) )== 0.0);
    CHECK(GigameterToMeter(MeterToGigameter(0.0) )== 0.0);
    CHECK(MegameterToMeter(MeterToMegameter(0.0) )== 0.0);
    CHECK(KilometerToMeter(MeterToKilometer(0.0) )== 0.0);
    CHECK(HectometerToMeter(MeterToHectometer(0.0) )== 0.0);
    CHECK(DecameterToMeter(MeterToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToMeter(MeterToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToMeter(MeterToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToMeter(MeterToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToMeter(MeterToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToMeter(MeterToNanometer(0.0) )== 0.0);
    CHECK(PicometerToMeter(MeterToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToMeter(MeterToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToMeter(MeterToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToMeter(MeterToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToMeter(MeterToYoctometer(0.0) )== 0.0);


    //Non-SI
    CHECK(AngstromToMeter(MeterToAngstrom(0.0) )== 0.0);
    CHECK(FermiToMeter(MeterToFermi(0.0) )== 0.0);
    CHECK(MicronToMeter(MeterToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToMeter(MeterToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToMeter(MeterToMoXUnit(0.0) )== 0.0);

    //Imperial
    CHECK(MileToMeter(MeterToMile(0.0) )== 0.0);
    CHECK(YardToMeter(MeterToYard(0.0) )== 0.0);
    CHECK(FootToMeter(MeterToFoot(0.0) )== 0.0);
    CHECK(InchToMeter(MeterToInch(0.0) )== 0.0);
    CHECK(MilToMeter(MeterToMil(0.0) )== 0.0);
    CHECK(ThouToMeter(MeterToThou(0.0) )== 0.0);

    //Nautical
    CHECK(NauticalMileToMeter(MeterToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToMeter(MeterToFathom(0.0) )== 0.0);

    //Surveyors
    CHECK(RodToMeter(MeterToRod(0.0) )== 0.0);
    CHECK(ChainToMeter(MeterToChain(0.0) )== 0.0);



    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

    //AU
    CHECK(AstronomicalUnitToMeter(MeterToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToMeter(MeterToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToMeter(MeterToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //SI
    //CHECK(YottameterTouzitzs(uzitzsToYottameter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToMeter(MeterToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToMeter(MeterToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToMeter(MeterToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToMeter(MeterToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToMeter(MeterToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToMeter(MeterToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToMeter(MeterToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToMeter(MeterToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToMeter(MeterToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToMeter(MeterToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToMeter(MeterToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToMeter(MeterToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToMeter(MeterToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToMeter(MeterToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToMeter(MeterToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToMeter(MeterToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToMeter(MeterToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToMeter(MeterToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToMeter(MeterToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToMeter(MeterToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));


    //Non-SI
    CHECK(AngstromToMeter(MeterToAngstrom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FermiToMeter(MeterToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToMeter(MeterToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToMeter(MeterToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToMeter(MeterToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Imperial
    CHECK(MileToMeter(MeterToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToMeter(MeterToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToMeter(MeterToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToMeter(MeterToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToMeter(MeterToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToMeter(MeterToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Nautical
    CHECK(NauticalMileToMeter(MeterToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToMeter(MeterToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToMeter(MeterToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToMeter(MeterToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
