#pragma once

TEST_CASE("Meter Length Conversion"){

	//Zero
        //AU
    CHECK(MeterToAstronomicalUnit(0.0) == 0.0);
    CHECK(MeterToLightYear(0.0) == 0.0);
    CHECK(MeterToParsec(0.0) == 0.0);

        //SI
    //CHECK(DegreeToRadian(0.0) == 0.0);
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


    //Inverted test

}
