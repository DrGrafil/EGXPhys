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

    double testValue = 3.0;

    //AU
    CHECK(AstronomicalUnitToMeter(MeterToAstronomicalUnit(testValue)) == testValue);
    CHECK(LightYearToMeter(MeterToLightYear(testValue)) == testValue);
    CHECK(ParsecToMeter(MeterToParsec(testValue)) == testValue);

    //SI
    //CHECK(YottameterTouzitzs(uzitzsToYottameter(testValue) )== testValue);
    CHECK(YottameterToMeter(MeterToYottameter(testValue)) == testValue);
    CHECK(ZettameterToMeter(MeterToZettameter(testValue)) == testValue);
    CHECK(ExameterToMeter(MeterToExameter(testValue)) == testValue);
    CHECK(PetameterToMeter(MeterToPetameter(testValue)) == testValue);
    CHECK(TerameterToMeter(MeterToTerameter(testValue)) == testValue);
    CHECK(GigameterToMeter(MeterToGigameter(testValue)) == testValue);
    CHECK(MegameterToMeter(MeterToMegameter(testValue)) == testValue);
    CHECK(KilometerToMeter(MeterToKilometer(testValue)) == testValue);
    CHECK(HectometerToMeter(MeterToHectometer(testValue)) == testValue);
    CHECK(DecameterToMeter(MeterToDecameter(testValue)) == testValue);
    CHECK(DecimeterToMeter(MeterToDecimeter(testValue)) == testValue);
    CHECK(CentimeterToMeter(MeterToCentimeter(testValue)) == testValue);
    CHECK(MillimeterToMeter(MeterToMillimeter(testValue)) == testValue);
    CHECK(MicrometerToMeter(MeterToMicrometer(testValue)) == testValue);
    CHECK(NanometerToMeter(MeterToNanometer(testValue)) == testValue);
    CHECK(PicometerToMeter(MeterToPicometer(testValue)) == testValue);
    CHECK(FemtometerToMeter(MeterToFemtometer(testValue)) == testValue);
    CHECK(AttometerToMeter(MeterToAttometer(testValue)) == testValue);
    CHECK(ZeptometerToMeter(MeterToZeptometer(testValue)) == testValue);
    CHECK(YoctometerToMeter(MeterToYoctometer(testValue)) == testValue);


    //Non-SI
    CHECK(AngstromToMeter(MeterToAngstrom(testValue)) == testValue);
    CHECK(FermiToMeter(MeterToFermi(testValue)) == testValue);
    CHECK(MicronToMeter(MeterToMicron(testValue)) == testValue);
    CHECK(CuXUnitToMeter(MeterToCuXUnit(testValue)) == testValue);
    CHECK(MoXUnitToMeter(MeterToMoXUnit(testValue)) == testValue);

    //Imperial
    CHECK(MileToMeter(MeterToMile(testValue)) == testValue);
    CHECK(YardToMeter(MeterToYard(testValue)) == testValue);
    CHECK(FootToMeter(MeterToFoot(testValue)) == testValue);
    CHECK(InchToMeter(MeterToInch(testValue)) == testValue);
    CHECK(MilToMeter(MeterToMil(testValue)) == testValue);
    CHECK(ThouToMeter(MeterToThou(testValue)) == testValue);

    //Nautical
    CHECK(NauticalMileToMeter(MeterToNauticalMile(testValue)) == testValue);
    CHECK(FathomToMeter(MeterToFathom(testValue)) == testValue);

    //Surveyors
    CHECK(RodToMeter(MeterToRod(testValue)) == testValue);
    CHECK(ChainToMeter(MeterToChain(testValue)) == testValue);
}
