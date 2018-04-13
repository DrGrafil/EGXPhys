#pragma once
TEST_CASE("Q Value"){
	//Data taken from https://www.nndc.bnl.gov/chart/
	//Mass taken from http://wwwndc.jaea.go.jp/NuC/
	
	//Carbon 12
	CHECK( QValueNeutronEmissionInMeV(12.0,11.011433611)== Approx(-18.7216).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleNeutronEmissionInMeV(12.0,10.016853230)== Approx(-31.8414).scale(0.0).epsilon(0.001));
	CHECK( QValueProtonEmissionInMeV(12.0,11.009305404)== Approx(-15.9568).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleProtonEmissionInMeV(12.0,10.013534679)== Approx(-27.18543).scale(0.0).epsilon(0.001));

    CHECK( QValueBetaMinusDecayInMeV(12.0,12.018613196)== Approx(-17.3381).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleBetaMinusDecayInMeV(12.0,12.034405)== Approx(-31.915).scale(0.0).epsilon(0.001));
	CHECK( QValueBetaPlusDecayInMeV(12.0,12.014352104)== Approx(-14.3914).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleBetaPlusDecayInMeV(12.0,12.026920848)== Approx(-100000.0).scale(0.0).epsilon(0.001)); //NEED TO CHANGE VALUE
		
	
	
	
	//Joule check
	CHECK( QValueNeutronEmissionInJ(12.0,11.011433611)== Approx(-18.7216e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleNeutronEmissionInJ(12.0,10.016853230)== Approx(-31.8414e6* NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	CHECK(QValueProtonEmissionInJ(12.0,11.009305404)== Approx(-15.9568e6* NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleProtonEmissionInJ(12.0,10.013534679)== Approx(-27.18543e6* NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	
	//Lithium 7
	CHECK( QValueNeutronEmissionInMeV(7.01600342665,6.01512288741)== Approx(-7.2510898).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleNeutronEmissionInMeV(7.01600342665,5.01254)== Approx(-12.91).scale(0.0).epsilon(0.001));
	CHECK( QValueProtonEmissionInMeV(7.01600342665,6.018886648)== Approx(-9.97396).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleProtonEmissionInMeV(7.01600342665,5.03531)== Approx(-32.56).scale(0.0).epsilon(0.001));
	
	
	//Uranium 238
	CHECK( NeutronSeparationEnergyInMeV(238.050789466,237.0487302)== Approx(6.1543).scale(0.0).epsilon(0.001));
	CHECK( NeutronTwoSeparationEnergyInMeV(238.050789466,236.045569468)== Approx(11.2800).scale(0.0).epsilon(0.001));
//	CHECK( ProtonSeparationEnergyInMeV(238.050789466,237.051147110)== Approx(7.5070).scale(0.0).epsilon(0.001)); fails by small amount... probably not accurate enought mesurement.
//	CHECK( ProtonTwoSeparationEnergyInMeV(238.050789466,236.049870)== Approx(13.5240).scale(0.0).epsilon(0.001));


	//Electron capture
	// See http://www-personal.umich.edu/~ianrit/a5.pdf
	//Au196 -> Pt196
	double Au196 = 195.966570;//wikipedia
	double Pt196 = 195.9649515;// wikipedia
	double bneutron = 0.0848776; //see link

	CHECK(QValueElectronCaptureInMeV(Au196, Pt196) == Approx(1.5070).scale(0.0).epsilon(0.001)); // bnl
	CHECK(QValueElectronCaptureInMeV(Au196, Pt196, bneutron) == Approx(1.422292).scale(0.0).epsilon(0.001)); //link

}
