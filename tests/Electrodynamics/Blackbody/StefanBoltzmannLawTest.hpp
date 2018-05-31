#pragma once

TEST_CASE("Stefan Boltzmann Law"){

    // https://www.omnicalculator.com/physics/stefan-boltzmann-law

    CHECK(StefanBoltzmannLaw(0.0) == 0.0);
    CHECK(StefanBoltzmannLaw(1.0) == NISTConst::sigma);
    CHECK(StefanBoltzmannLaw(300.0) == Approx(459.3).scale(0.0).epsilon(0.01));
    CHECK(StefanBoltzmannLaw(5000.0) == Approx(35439794.0).scale(0.0).epsilon(0.01));

}
