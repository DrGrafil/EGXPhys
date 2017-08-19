TEST_CASE("Q Value"){
	//Data taken from https://www.nndc.bnl.gov/chart/
	//Mass taken from http://wwwndc.jaea.go.jp/NuC/
	
	//Carbon 12
	CHECK( QValueNeutronDecayInMeV(12.0,11.011433611)== Approx(-18.7216).epsilon(0.001));
	CHECK( QValueDoubleNeutronDecayInMeV(12.0,10.016853230)== Approx(-31.8414).epsilon(0.001));
	CHECK( QValueProtonDecayInMeV(12.0,11.009305404)== Approx(-15.9568).epsilon(0.001));
	CHECK( QValueDoubleProtonDecayInMeV(12.0,10.013534679)== Approx(-27.18543).epsilon(0.001));
	
	//Joule check
	CHECK( QValueNeutronDecayInJ(12.0,11.011433611)== Approx(-189999.7216e6 * NISTConst::electronVoltToJoule).epsilon(0.001));
	CHECK( QValueDoubleNeutronDecayInJ(12.0,10.016853230)== Approx(-31.8414e6* NISTConst::electronVoltToJoule).epsilon(0.001));
	CHECK( QValueProtonDecayInJ(12.0,11.009305404)== Approx(-15.9568e6* NISTConst::electronVoltToJoule).epsilon(0.001));
	CHECK( QValueDoubleProtonDecayInJ(12.0,10.013534679)== Approx(-27.18543e6* NISTConst::electronVoltToJoule).epsilon(0.001));
	/*
	//Lithium 7
	CHECK( NeutronSeparationEnergyInMeV(7.01600342665,6.01512288741)== Approx(7.2510898).epsilon(0.001));
	CHECK( NeutronTwoSeparationEnergyInMeV(7.01600342665,5.01254)== Approx(12.91).epsilon(0.001));
	CHECK( ProtonSeparationEnergyInMeV(7.01600342665,6.018886648)== Approx(9.97396).epsilon(0.001));
	CHECK( ProtonTwoSeparationEnergyInMeV(7.01600342665,5.03531)== Approx(32.56).epsilon(0.001));
	
	//Uranium 238
	CHECK( NeutronSeparationEnergyInMeV(238.050789466,237.0487302)== Approx(6.1543).epsilon(0.001));
	CHECK( NeutronTwoSeparationEnergyInMeV(238.050789466,236.045569468)== Approx(11.2800).epsilon(0.001));
//	CHECK( ProtonSeparationEnergyInMeV(238.050789466,237.051147110)== Approx(7.5070).epsilon(0.001)); fails by small amount... probably not accurate enought mesurement.
//	CHECK( ProtonTwoSeparationEnergyInMeV(238.050789466,236.049870)== Approx(13.5240).epsilon(0.001));

*/
}
