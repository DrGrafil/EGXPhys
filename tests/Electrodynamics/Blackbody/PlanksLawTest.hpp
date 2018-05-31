#pragma once

TEST_CASE("Planks Law"){

    // http://www.spectralcalc.com/blackbody_calculator/blackbody.php
    // https://www.cactus2000.de/uk/unit/masswvg.shtml
    // https://www.physics-in-a-nutshell.com/article/24/different-formulations-of-plancks-law
    //See mathematica 

    //300K 10um
    double Temp = 300.0;
    double wave = 10.0e-6; 
    double angwave = wave / (2.0 * pi);
    double freq = NISTConst::c / wave;
    double angfreq = 2.0 * pi * NISTConst::c / wave;
    double wavenumber = 1.0 / wave;
    double angwavenumber = 2.0 * pi / wave;

    CHECK(PlancksLaw(wave, Temp) == Approx(9.92435e6).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromWavelength(wave, Temp) == Approx(9.92435e6).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromFrequency(freq, Temp) == Approx(3.31041e-12).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromWavenumber(wavenumber, Temp) == Approx(0.000992402).scale(0.0).epsilon(0.01));

    CHECK(PlancksLawFromAngularFrequency(angfreq, Temp) == Approx(5.2685e-13).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromAngularWavelength(angwave, Temp) == Approx(6.23545e7).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromAngularWavenumber(angwavenumber, Temp) == Approx(0.000157946).scale(0.0).epsilon(0.01));



    //300k 500um
    Temp = 300.0;
    wave = 500.0e-6;
    angwave = wave / (2.0 * pi);
    freq = NISTConst::c / wave;
    angfreq = 2.0 * pi * NISTConst::c / wave;
    wavenumber = 1.0 / wave;
    angwavenumber = 2.0 * pi / wave;

    CHECK(PlancksLaw(wave, Temp) == Approx(37.86).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromWavelength(wave, Temp) == Approx(37.86).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromFrequency(freq, Temp) == Approx(3.15718e-14).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromWavenumber(wavenumber, Temp) == Approx(9.46499e-6).scale(0.0).epsilon(0.01));

    CHECK(PlancksLawFromAngularFrequency(angfreq, Temp) == Approx(5.02481e-15).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromAngularWavelength(angwave, Temp) == Approx(237.881).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromAngularWavenumber(angwavenumber, Temp) == Approx(1.5064e-6).scale(0.0).epsilon(0.01));



    //5000K 10um
    Temp = 5000.0;
    wave = 10.0e-6;
    angwave = wave / (2.0 * pi);
    freq = NISTConst::c / wave;
    angfreq = 2.0 * pi * NISTConst::c / wave;
    wavenumber = 1.0 / wave;
    angwavenumber = 2.0 * pi / wave;

    CHECK(PlancksLaw(wave, Temp) == Approx(3.57208e9).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromWavelength(wave, Temp) == Approx(3.57208e9).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromFrequency(freq, Temp) == Approx(1.19152e-9).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromWavenumber(wavenumber, Temp) == Approx(0.357208).scale(0.0).epsilon(0.01));

    CHECK(PlancksLawFromAngularFrequency(angfreq, Temp) == Approx(1.89636e-10).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromAngularWavelength(angwave, Temp) == Approx(2.2444e10).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromAngularWavenumber(angwavenumber, Temp) == Approx(0.0568514).scale(0.0).epsilon(0.01));


    //5000k 500um
    Temp = 5000.0;
    wave = 500.0e-6;
    angwave = wave / (2.0 * pi);
    freq = NISTConst::c / wave;
    angfreq = 2.0 * pi * NISTConst::c / wave;
    wavenumber = 1.0 / wave;
    angwavenumber = 2.0 * pi / wave;

    CHECK(PlancksLaw(wave, Temp) == Approx(660.349).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromWavelength(wave, Temp) == Approx(660.349).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromFrequency(freq, Temp) == Approx(5.50672e-13).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromWavenumber(wavenumber, Temp) == Approx(0.000165087).scale(0.0).epsilon(0.01));

    CHECK(PlancksLawFromAngularFrequency(angfreq, Temp) == Approx(8.76421e-14).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromAngularWavelength(angwave, Temp) == Approx(4149.1).scale(0.0).epsilon(0.01));
    CHECK(PlancksLawFromAngularWavenumber(angwavenumber, Temp) == Approx(0.0000262745).scale(0.0).epsilon(0.01));

}
