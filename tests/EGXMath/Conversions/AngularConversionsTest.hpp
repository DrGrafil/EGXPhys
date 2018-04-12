#pragma once

TEST_CASE("Angular Conversions"){

	//Degree

	CHECK(DegreeToRadian(0.0) == 0.0);
	CHECK(DegreeToRadian(90.0) == Approx(EGXMath::pi<double>/2.0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToRadian(180.0) == Approx(EGXMath::pi<double>).scale(0.0).epsilon(0.001));

	
	CHECK(DegreeToMilliradian(0.0) == 0.0);
	CHECK(DegreeToMilliradian(90.0) == Approx(EGXMath::pi<double>*1000.0 / 2.0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToMilliradian(180.0) == Approx(EGXMath::pi<double>*1000.0).scale(0.0).epsilon(0.001));


	CHECK(DegreeToArcminute(0.0) == 0.0);
	CHECK(DegreeToArcminute(90.0) == Approx(90.0*60.0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToArcminute(83.0) == Approx(83.0*60.0).scale(0.0).epsilon(0.001));

	CHECK(DegreeToArcsecond(0.0) == 0.0);
	CHECK(DegreeToArcsecond(90.0) == Approx(90.0*60.0*60).scale(0.0).epsilon(0.001));
	CHECK(DegreeToArcsecond(84.2) == Approx(84.2*60.0*60).scale(0.0).epsilon(0.001));

	CHECK(DegreeToMilliarcsecond(0.0) == 0.0);
	CHECK(DegreeToMilliarcsecond(90.0) == Approx(90.0*60.0 * 60*1000).scale(0.0).epsilon(0.001));
	CHECK(DegreeToMilliarcsecond(84.2) == Approx(84.2*60.0 * 60 * 1000).scale(0.0).epsilon(0.001));

	CHECK(DegreeToMicroarcsecond(0.0) == 0.0);
	CHECK(DegreeToMicroarcsecond(90.0) == Approx(90.0*60.0 * 60.0 * 1000.0* 1000.0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToMicroarcsecond(180.0) == Approx(180.0*60.0 * 60.0 * 1000.0*1000.0).scale(0.0).epsilon(0.001));

	double decdegree = 0.0f; double degree = 0.0f; double minute = 0.0f; double second = 0.0f;

	DegreeToDegreesMinutesSeconds(decdegree, degree, minute, second);
	CHECK(degree == 0.0);
	CHECK(minute == 0.0);
	CHECK(second == 0.0);

	decdegree = 66.91827;
	DegreeToDegreesMinutesSeconds(decdegree, degree, minute, second);
	CHECK(degree == Approx(66).scale(0.0).epsilon(0.001));
	CHECK(minute == Approx(55).scale(0.0).epsilon(0.001));
	CHECK(second == Approx(5.772).scale(0.0).epsilon(0.001));

	decdegree = -145.351;
	DegreeToDegreesMinutesSeconds(decdegree, degree, minute, second);
	CHECK(degree == Approx(-145).scale(0.0).epsilon(0.001));
	CHECK(minute == Approx(21).scale(0.0).epsilon(0.001));
	CHECK(second == Approx(3.6).scale(0.0).epsilon(0.001));

	decdegree = -145.351;
	DegreeToDMS(decdegree, degree, minute, second);
	CHECK(degree == Approx(-145).scale(0.0).epsilon(0.001));
	CHECK(minute == Approx(21).scale(0.0).epsilon(0.001));
	CHECK(second == Approx(3.6).scale(0.0).epsilon(0.001));

	double hour = 0.0;
	decdegree = 0.0;
	DegreeToHoursMinutesSeconds(decdegree, hour, minute, second);
	CHECK(hour == 0.0);
	CHECK(minute == 0.0);
	CHECK(second == 0.0);

	decdegree = 66.918277;
	DegreeToHoursMinutesSeconds(decdegree, hour, minute, second);
	CHECK(hour == Approx(4).scale(0.0).epsilon(0.001));
	CHECK(minute == Approx(27).scale(0.0).epsilon(0.001));
	CHECK(second == Approx(40.3865).scale(0.0).epsilon(0.001));

	decdegree = -58.2314;
	DegreeToHoursMinutesSeconds(decdegree, hour, minute, second);
	CHECK(hour == Approx(-3).scale(0.0).epsilon(0.001));
	CHECK(minute == Approx(52).scale(0.0).epsilon(0.001));
	CHECK(second == Approx(55.536).scale(0.0).epsilon(0.001));


	decdegree = -58.2314;
	DegreeToHMS(decdegree, hour, minute, second);
	CHECK(hour == Approx(-3).scale(0.0).epsilon(0.001));
	CHECK(minute == Approx(52).scale(0.0).epsilon(0.001));
	CHECK(second == Approx(55.536).scale(0.0).epsilon(0.001));


	CHECK(DegreeToGradian(0.0) == 0.0);
	CHECK(DegreeToGradian(90.0) == Approx(100.0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToGradian(180.0) == Approx(200.0).scale(0.0).epsilon(0.001));

	CHECK(DegreeToGon(0.0) == 0.0);
	CHECK(DegreeToGon(90.0) == Approx(100.0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToGon(180.0) == Approx(200.0).scale(0.0).epsilon(0.001));


	
	CHECK(DegreeToCompassWind(0.0, 32, false) == "north");
	CHECK(DegreeToCompassWind(90.0, 32, false) == "east");
	CHECK(DegreeToCompassWind(180.0, 32, false) == "south");
	CHECK(DegreeToCompassWind(270.0, 32, false) == "west");

	CHECK(DegreeToCompassWind(0.0, 32, true) == "N");
	CHECK(DegreeToCompassWind(90.0, 32, true) == "E");
	CHECK(DegreeToCompassWind(180.0, 32, true) == "S");
	CHECK(DegreeToCompassWind(270.0, 32, true) == "W");

	CHECK(DegreeToCompassWind(359.0, 32, false) == "north");
	CHECK(DegreeToCompassWind(361.0, 32, false) == "north");
	CHECK(DegreeToCompassWind(-1.0, 32, false) == "north");

	CHECK(DegreeToCompassWind(0.0, 16, false) == "north");
	CHECK(DegreeToCompassWind(90.0, 16, false) == "east");
	CHECK(DegreeToCompassWind(180.0, 16, false) == "south");
	CHECK(DegreeToCompassWind(270.0, 16, false) == "west");

	CHECK(DegreeToCompassWind(0.0, 8, false) == "north");
	CHECK(DegreeToCompassWind(90.0, 8, false) == "east");
	CHECK(DegreeToCompassWind(180.0, 8, false) == "south");
	CHECK(DegreeToCompassWind(270.0, 8, false) == "west");

	CHECK(DegreeToCompassWind(0.0, 4, false) == "north");
	CHECK(DegreeToCompassWind(90.0, 4, false) == "east");
	CHECK(DegreeToCompassWind(180.0, 4, false) == "south");
	CHECK(DegreeToCompassWind(270.0, 4, false) == "west");
}
