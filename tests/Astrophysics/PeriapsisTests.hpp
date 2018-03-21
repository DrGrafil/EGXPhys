#pragma once
TEST_CASE("Periapsis"){
	
    REQUIRE( Periapsis(0.0, 1.0) == 1.0 );
    REQUIRE( Periapsis(1.0, 0.0) == 0.0 );
    REQUIRE( Periapsis(1.0, 1.0) == 0.0 );
    
    REQUIRE( Periapsis(0.5, 10.0) == 5.0 );
    
	REQUIRE( Periapsis(50.0, 0.7) == Pericenter(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Perifocus(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Perigalacticon(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Peribothron(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Perinigricon(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Periastron(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Perihelion(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Perihermion(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Pericytherion(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Perigee(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Perilune(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Pericynthion(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Periselene(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Periareion(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Perizene(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Perijove(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Perichron(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Perisaturnium(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Periuranion(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Periposeidon(50.0, 0.7) );
	REQUIRE( Periapsis(50.0, 0.7) == Perihadion(50.0, 0.7) );

}
