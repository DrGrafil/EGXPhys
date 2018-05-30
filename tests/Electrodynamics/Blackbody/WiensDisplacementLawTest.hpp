#pragma once

TEST_CASE("Wiens Displacement Law"){

    // http://www.spectralcalc.com/blackbody_calculator/blackbody.php
    // https://www.cactus2000.de/uk/unit/masswvg.shtml

    CHECK(WiensDisplacementLaw(1.0) == NISTConst::WienWavelengthDisplacementLawConstant);
    CHECK(WiensDisplacementLawInm(1.0) == NISTConst::WienWavelengthDisplacementLawConstant);

    CHECK(WiensDisplacementLaw(5000.0) == Approx(0.579551e-6).scale(0.0).epsilon(0.001));
    CHECK(WiensDisplacementLawInm(5000.0) == Approx(0.579551e-6).scale(0.0).epsilon(0.001));

    CHECK(WiensDisplacementLaw(300.0) == Approx(9.65918e-6).scale(0.0).epsilon(0.001));
    CHECK(WiensDisplacementLawInm(300.0) == Approx(9.65918e-6).scale(0.0).epsilon(0.001));

    CHECK(WiensDisplacementLawInHz(0.0) == 0.0);
    CHECK(WiensDisplacementLawInHz(1.0) == NISTConst::WienFrequencyDisplacementLawConstant);
    CHECK(WiensDisplacementLawInHz(5000.0) == Approx(293946650e6).scale(0.0).epsilon(0.001));
    CHECK(WiensDisplacementLawInHz(300.0) == Approx(17636799e6).scale(0.0).epsilon(0.001));
   
}
