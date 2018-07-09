#pragma once

TEST_CASE("Absolute Magnitude"){
	
    //http://astronomy.swin.edu.au/cosmos/A/Absolute+Magnitude
    double AlphaCenturim = -0.3; double AlphaCenturiM = 4.1; double AlphaCenturid = 1.34;
    double Canopusm = -0.74; double CanopusM = -5.71; double Canopusd = 95+2.5; //data is shitty in error bars 
    double Rigelm = 0.14; double RigelM = -7.1; double Rigeld = 276.1;
    double Denebm = 1.25; double DenebM = -8.38; double Denebd = 802.0+30; //data is shitty in error bars 

    CHECK(AbsoluteMagnitude(-5.0, 1.0) == 0.0);

    CHECK(AbsoluteMagnitude(AlphaCenturim, AlphaCenturid) == Approx(AlphaCenturiM).scale(0.0).epsilon(0.01));
    CHECK(AbsoluteMagnitude(Canopusm, Canopusd) == Approx(CanopusM).scale(0.0).epsilon(0.01));
    CHECK(AbsoluteMagnitude(Rigelm, Rigeld) == Approx(RigelM).scale(0.0).epsilon(0.01));
    CHECK(AbsoluteMagnitude(Denebm, Denebd) == Approx(DenebM).scale(0.0).epsilon(0.01));

}
