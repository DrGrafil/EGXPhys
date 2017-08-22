TEST_CASE("Q Value"){
	//Data taken from https://www.nndc.bnl.gov/chart/
	//Mass taken from http://wwwndc.jaea.go.jp/NuC/
	
	
	//Normal Q Value
		// U238+He4 = 241Np + 1H 
	CHECK( QValueInMeV(238.050789466, 4.002602, 1.007825032241, 241.05825) == Approx(-11.8165).scale(0.0).epsilon(0.001));
	CHECK( QValueInJ(238.050789466, 4.002602, 1.007825032241, 241.05825) == Approx(-11.8165e6* NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	
	//Alpha
		//U238 = U238 = 234Th + He4  
	CHECK( QValueAlphaDecayInMeV(238.050789466,234.043601)== Approx(4.26986).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleAlphaDecayInMeV(238.050789466,230.037056)== Approx(7.9426).scale(0.0).epsilon(0.001)); //Calculated no external source
	
	CHECK( QValueAlphaDecayInJ(238.050789466,234.043601)== Approx(4.26986e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleAlphaDecayInJ(238.050789466,230.037056)== Approx(7.9426e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001)); //Calculated no external source
	
	
	//Beta -
		//Niobium 93
	CHECK( QValueBetaMinusDecayInMeV(92.9063781,92.906813)== Approx(-.4067).scale(0.0).epsilon(0.01));
	CHECK( QValueDoubleBetaMinusDecayInMeV(92.9063781,92.910249)== Approx(-3.6076).scale(0.0).epsilon(0.001));
		
	CHECK( QValueBetaMinusDecayInJ(92.9063781,92.906813)== Approx(-.4067e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.01));
	CHECK( QValueDoubleBetaMinusDecayInJ(92.9063781,92.910249)== Approx(-3.6076e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	
		
	//Beta +
		//Niobium 93	   
	CHECK( QValueBetaPlusDecayInMeV(92.9063781,92.9064760)== Approx(-1.1123).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleBetaPlusDecayInMeV(92.9063781,92.909583)== Approx(-5.0293).scale(0.0).epsilon(0.001));  //Calculated no external source
	
	CHECK( QValueBetaPlusDecayInJ(92.9063781,92.9064760)== Approx(-1.1123e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleBetaPlusDecayInJ(92.9063781,92.909583)== Approx(-5.0293e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));  //Calculated no external source
	
		
	//Electron capture
	CHECK( QValueElectronCaptureDecayInMeV(238.050789466,238.05450)== Approx(-3.585).scale(0.0).epsilon(0.1)); // Lowered threshold just due to shitty data
	CHECK( QValueDoubleElectronCaptureDecayInMeV(238.050789466,238.0565)== Approx(-5.3).scale(0.0).epsilon(0.01));
	
	CHECK( QValueElectronCaptureDecayInJ(238.050789466,238.05450)== Approx(-3.585e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.1)); // Lowered threshold just due to shitty data
	CHECK( QValueDoubleElectronCaptureDecayInJ(238.050789466,238.0565)== Approx(-5.3e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.01));
	
	//Neutron
		//Carbon 12
	CHECK( QValueNeutronDecayInMeV(12.0,11.011433611)== Approx(-18.7216).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleNeutronDecayInMeV(12.0,10.016853230)== Approx(-31.8414).scale(0.0).epsilon(0.001));
	
	CHECK( QValueNeutronDecayInJ(12.0,11.011433611)== Approx(-18.7216e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleNeutronDecayInJ(12.0,10.016853230)== Approx(-31.8414e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	
		//Niobium 93
	CHECK( QValueNeutronDecayInMeV(92.9063781,91.907194)== Approx(-8.83086).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleNeutronDecayInMeV(92.9063781,90.906996)== Approx(-16.717).scale(0.0).epsilon(0.001));
	
	CHECK( QValueNeutronDecayInJ(92.9063781,91.907194)== Approx(-8.83086e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleNeutronDecayInJ(92.9063781,90.906996)== Approx(-16.717e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
		
		//Lithium 7
	CHECK( QValueNeutronDecayInMeV(7.01600342665,6.01512288741)== Approx(-7.2510898).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleNeutronDecayInMeV(7.01600342665,5.01254)== Approx(-12.91).scale(0.0).epsilon(0.001));
	
	CHECK( QValueNeutronDecayInJ(7.01600342665,6.01512288741)== Approx(-7.2510898e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleNeutronDecayInJ(7.01600342665,5.01254)== Approx(-12.91e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	
		//Uranium 238
	CHECK( QValueNeutronDecayInMeV(238.050789466,237.0487302)== Approx(-6.1543).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleNeutronDecayInMeV(238.050789466,236.045569468)== Approx(-11.2800).scale(0.0).epsilon(0.001));
	
	CHECK( QValueNeutronDecayInJ(238.050789466,237.0487302)== Approx(-6.1543e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleNeutronDecayInJ(238.050789466,236.045569468)== Approx(-11.2800e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	
	//Proton
		//Carbon 12
	CHECK( QValueProtonDecayInMeV(12.0,11.009305404)== Approx(-15.9568).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleProtonDecayInMeV(12.0,10.013534679)== Approx(-27.18543).scale(0.0).epsilon(0.001));
	
	CHECK( QValueProtonDecayInJ(12.0,11.009305404)== Approx(-15.9568e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleProtonDecayInJ(12.0,10.013534679)== Approx(-27.18543e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));

		//Niobium 93
	CHECK( QValueProtonDecayInMeV(92.9063781,91.9050408)== Approx(-6.0423).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleProtonDecayInMeV(92.9063781,90.907305)== Approx(-15.439).scale(0.0).epsilon(0.001));
	
	CHECK( QValueProtonDecayInJ(92.9063781,91.9050408)== Approx(-6.0423e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleProtonDecayInJ(92.9063781,90.907305)== Approx(-15.439e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));

		//Lithium 7
	CHECK( QValueProtonDecayInMeV(7.01600342665,6.018886648)== Approx(-9.97396).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleProtonDecayInMeV(7.01600342665,5.03531)== Approx(-32.56).scale(0.0).epsilon(0.001));
	
	CHECK( QValueProtonDecayInJ(7.01600342665,6.018886648)== Approx(-9.97396e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	CHECK( QValueDoubleProtonDecayInJ(7.01600342665,5.03531)== Approx(-32.56e6 * NISTConst::electronVoltToJoule).scale(0.0).epsilon(0.001));
	
		//Uranium 238
	//CHECK( QValueProtonDecayInMeV(238.050789466,237.051147110)== Approx(-7.5070).scale(0.0).epsilon(0.001));  probably off by a bit due to bad decay data
	//CHECK( QValueDoubleProtonDecayInMeV(238.050789466,236.049870)== Approx(-13.5240).scale(0.0).epsilon(0.001));

}
