#pragma once

TEST_CASE("Angstrom Length Conversion"){

	//Zero
        //AU
    CHECK(AngstromToAstronomicalUnit(0.0) == 0.0);
    CHECK(AngstromToLightYear(0.0) == 0.0);
    CHECK(AngstromToParsec(0.0) == 0.0);

        //SI
    CHECK(AngstromToMeter(0.0) == 0.0);
    CHECK(AngstromToYottameter(0.0) == 0.0);
    CHECK(AngstromToZettameter(0.0) == 0.0);
    CHECK(AngstromToExameter(0.0) == 0.0);
    CHECK(AngstromToPetameter(0.0) == 0.0);
    CHECK(AngstromToTerameter(0.0) == 0.0);
    CHECK(AngstromToGigameter(0.0) == 0.0);
    CHECK(AngstromToMegameter(0.0) == 0.0);
    CHECK(AngstromToKilometer(0.0) == 0.0);
    CHECK(AngstromToHectometer(0.0) == 0.0);
    CHECK(AngstromToDecameter(0.0) == 0.0);
    CHECK(AngstromToDecimeter(0.0) == 0.0);
    CHECK(AngstromToCentimeter(0.0) == 0.0);
    CHECK(AngstromToMillimeter(0.0) == 0.0);
    CHECK(AngstromToMicrometer(0.0) == 0.0);
    CHECK(AngstromToNanometer(0.0) == 0.0);
    CHECK(AngstromToPicometer(0.0) == 0.0);
    CHECK(AngstromToFemtometer(0.0) == 0.0);
    CHECK(AngstromToAttometer(0.0) == 0.0);
    CHECK(AngstromToZeptometer(0.0) == 0.0);
    CHECK(AngstromToYoctometer(0.0) == 0.0);
   
    
        //Non-SI
    CHECK(AngstromToFermi(0.0) == 0.0);
    CHECK(AngstromToMicron(0.0) == 0.0);
    CHECK(AngstromToCuXUnit(0.0) == 0.0);
    CHECK(AngstromToMoXUnit(0.0) == 0.0);

        //Imperial
    CHECK(AngstromToMile(0.0) == 0.0);
    CHECK(AngstromToYard(0.0) == 0.0);
    CHECK(AngstromToFoot(0.0) == 0.0);
    CHECK(AngstromToInch(0.0) == 0.0);
    CHECK(AngstromToMil(0.0) == 0.0);
    CHECK(AngstromToThou(0.0) == 0.0);

        //Nautical
    CHECK(AngstromToNauticalMile(0.0) == 0.0);
    CHECK(AngstromToFathom(0.0) == 0.0);
    
        //Surveyors
    CHECK(AngstromToRod(0.0) == 0.0);
    CHECK(AngstromToChain(0.0) == 0.0);
    

    //Zero Inverted
        //AU
    CHECK(AstronomicalUnitToAngstrom(AngstromToAstronomicalUnit(0.0) )== 0.0);
    CHECK(LightYearToAngstrom(AngstromToLightYear(0.0) )== 0.0);
    CHECK(ParsecToAngstrom(AngstromToParsec(0.0) )== 0.0);

        //SI
    CHECK(MeterToAngstrom(AngstromToMeter(0.0) )== 0.0);
    CHECK(YottameterToAngstrom(AngstromToYottameter(0.0) )== 0.0);
    CHECK(ZettameterToAngstrom(AngstromToZettameter(0.0) )== 0.0);
    CHECK(ExameterToAngstrom(AngstromToExameter(0.0) )== 0.0);
    CHECK(PetameterToAngstrom(AngstromToPetameter(0.0) )== 0.0);
    CHECK(TerameterToAngstrom(AngstromToTerameter(0.0) )== 0.0);
    CHECK(GigameterToAngstrom(AngstromToGigameter(0.0) )== 0.0);
    CHECK(MegameterToAngstrom(AngstromToMegameter(0.0) )== 0.0);
    CHECK(KilometerToAngstrom(AngstromToKilometer(0.0) )== 0.0);
    CHECK(HectometerToAngstrom(AngstromToHectometer(0.0) )== 0.0);
    CHECK(DecameterToAngstrom(AngstromToDecameter(0.0) )== 0.0);
    CHECK(DecimeterToAngstrom(AngstromToDecimeter(0.0) )== 0.0);
    CHECK(CentimeterToAngstrom(AngstromToCentimeter(0.0) )== 0.0);
    CHECK(MillimeterToAngstrom(AngstromToMillimeter(0.0) )== 0.0);
    CHECK(MicrometerToAngstrom(AngstromToMicrometer(0.0) )== 0.0);
    CHECK(NanometerToAngstrom(AngstromToNanometer(0.0) )== 0.0);
    CHECK(PicometerToAngstrom(AngstromToPicometer(0.0) )== 0.0);
    CHECK(FemtometerToAngstrom(AngstromToFemtometer(0.0) )== 0.0);
    CHECK(AttometerToAngstrom(AngstromToAttometer(0.0) )== 0.0);
    CHECK(ZeptometerToAngstrom(AngstromToZeptometer(0.0) )== 0.0);
    CHECK(YoctometerToAngstrom(AngstromToYoctometer(0.0) )== 0.0);

        //Non-SI
    CHECK(FermiToAngstrom(AngstromToFermi(0.0) )== 0.0);
    CHECK(MicronToAngstrom(AngstromToMicron(0.0) )== 0.0);
    CHECK(CuXUnitToAngstrom(AngstromToCuXUnit(0.0) )== 0.0);
    CHECK(MoXUnitToAngstrom(AngstromToMoXUnit(0.0) )== 0.0);

        //Imperial
    CHECK(MileToAngstrom(AngstromToMile(0.0) )== 0.0);
    CHECK(YardToAngstrom(AngstromToYard(0.0) )== 0.0);
    CHECK(FootToAngstrom(AngstromToFoot(0.0) )== 0.0);
    CHECK(InchToAngstrom(AngstromToInch(0.0) )== 0.0);
    CHECK(MilToAngstrom(AngstromToMil(0.0) )== 0.0);
    CHECK(ThouToAngstrom(AngstromToThou(0.0) )== 0.0);

        //Nautical
    CHECK(NauticalMileToAngstrom(AngstromToNauticalMile(0.0) )== 0.0);
    CHECK(FathomToAngstrom(AngstromToFathom(0.0) )== 0.0);

        //Surveyors
    CHECK(RodToAngstrom(AngstromToRod(0.0) )== 0.0);
    CHECK(ChainToAngstrom(AngstromToChain(0.0) )== 0.0);






    //Inverted test

    double testValue = 7.985;
    //Going from huge number to small and back results in some inpercision. Hence Approximation.

        //AU
    CHECK(AstronomicalUnitToAngstrom(AngstromToAstronomicalUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(LightYearToAngstrom(AngstromToLightYear(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ParsecToAngstrom(AngstromToParsec(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //SI
    CHECK(MeterToAngstrom(AngstromToMeter(testValue) )== Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YottameterToAngstrom(AngstromToYottameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZettameterToAngstrom(AngstromToZettameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ExameterToAngstrom(AngstromToExameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PetameterToAngstrom(AngstromToPetameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(TerameterToAngstrom(AngstromToTerameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(GigameterToAngstrom(AngstromToGigameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MegameterToAngstrom(AngstromToMegameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(KilometerToAngstrom(AngstromToKilometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(HectometerToAngstrom(AngstromToHectometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecameterToAngstrom(AngstromToDecameter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(DecimeterToAngstrom(AngstromToDecimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CentimeterToAngstrom(AngstromToCentimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MillimeterToAngstrom(AngstromToMillimeter(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicrometerToAngstrom(AngstromToMicrometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(NanometerToAngstrom(AngstromToNanometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(PicometerToAngstrom(AngstromToPicometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FemtometerToAngstrom(AngstromToFemtometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(AttometerToAngstrom(AngstromToAttometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ZeptometerToAngstrom(AngstromToZeptometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YoctometerToAngstrom(AngstromToYoctometer(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Non-SI
    CHECK(FermiToAngstrom(AngstromToFermi(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MicronToAngstrom(AngstromToMicron(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(CuXUnitToAngstrom(AngstromToCuXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MoXUnitToAngstrom(AngstromToMoXUnit(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Imperial
    CHECK(MileToAngstrom(AngstromToMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(YardToAngstrom(AngstromToYard(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FootToAngstrom(AngstromToFoot(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(InchToAngstrom(AngstromToInch(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(MilToAngstrom(AngstromToMil(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ThouToAngstrom(AngstromToThou(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

        //Nautical
    CHECK(NauticalMileToAngstrom(AngstromToNauticalMile(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(FathomToAngstrom(AngstromToFathom(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));

    //Surveyors
    CHECK(RodToAngstrom(AngstromToRod(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
    CHECK(ChainToAngstrom(AngstromToChain(testValue)) == Approx(testValue).scale(0.0).epsilon(0.00001));
}
