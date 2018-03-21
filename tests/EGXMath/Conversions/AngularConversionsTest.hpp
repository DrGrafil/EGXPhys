#pragma once

TEST_CASE("Angular Conversions"){

	//Degree

	CHECK(DegreeToRadian(0.0) == Approx(0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToRadian(0) == Approx(0).scale(0.0).epsilon(0.001));

	CHECK(DegreeToRadian(90.0) == Approx(EGXMath::pi<double>/2.0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToRadian(180.0) == Approx(EGXMath::pi<double>).scale(0.0).epsilon(0.001));

	
	CHECK(DegreeToMilliradian(0) == Approx(0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToMilliradian(90.0) == Approx(EGXMath::pi<double>*1000.0 / 2.0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToMilliradian(180.0) == Approx(EGXMath::pi<double>*1000.0).scale(0.0).epsilon(0.001));


	CHECK(DegreeToArcminute(0) == Approx(0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToArcminute(90.0) == Approx(90.0*60.0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToArcminute(90) == Approx(90.0*60.0).scale(0.0).epsilon(0.001));

	CHECK(DegreeToArcminute(0) == Approx(0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToArcminute(90.0) == Approx(90.0*60.0*60).scale(0.0).epsilon(0.001));
	CHECK(DegreeToArcminute(90) == Approx(90.0*60.0*60).scale(0.0).epsilon(0.001));

	CHECK(DegreeToMilliarcsecond(0) == Approx(0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToMilliarcsecond(90.0) == Approx(90.0*60.0 * 60*1000).scale(0.0).epsilon(0.001));
	CHECK(DegreeToMilliarcsecond(90) == Approx(90.0*60.0 * 60 * 1000).scale(0.0).epsilon(0.001));

	CHECK(DegreeToMicroarcsecond(0) == Approx(0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToMicroarcsecond(90.0) == Approx(90.0*60.0 * 60 * 1000*1000).scale(0.0).epsilon(0.001));
	CHECK(DegreeToMicroarcsecond(90) == Approx(90.0*60.0 * 60 * 1000*1000).scale(0.0).epsilon(0.001));

	float decdegree = 0.0f; float degree = 0.0f; float minute = 0.0f; float second = 0.0f;

	DegreeToDegreesMinutesSeconds(decdegree, degree, minute, second);
	CHECK(degree == Approx(0).scale(0.0).epsilon(0.001));
	CHECK(minute == Approx(0).scale(0.0).epsilon(0.001));
	CHECK(second == Approx(0).scale(0.0).epsilon(0.001));

	decdegree = 66.91827f;
	DegreeToDegreesMinutesSeconds(decdegree, degree, minute, second);
	CHECK(degree == Approx(66).scale(0.0).epsilon(0.001));
	CHECK(minute == Approx(55).scale(0.0).epsilon(0.001));
	CHECK(second == Approx(5.772).scale(0.0).epsilon(0.001));

	decdegree = -145.35;
	DegreeToDegreesMinutesSeconds(decdegree, degree, minute, second);
	CHECK(degree == Approx(-145).scale(0.0).epsilon(0.001));
	CHECK(minute == Approx(21).scale(0.0).epsilon(0.001));
	CHECK(second == Approx(0).scale(0.0).epsilon(0.001));

	decdegree = -145.35;
	DegreeToDMS(decdegree, degree, minute, second);
	CHECK(degree == Approx(-145).scale(0.0).epsilon(0.001));
	CHECK(minute == Approx(21).scale(0.0).epsilon(0.001));
	CHECK(second == Approx(0).scale(0.0).epsilon(0.001));

	float hour = 0.0f;
	decdegree = 0.0;
	DegreeToHoursMinutesSeconds(decdegree, hour, minute, second);
	CHECK(hour == Approx(0).scale(0.0).epsilon(0.001));
	CHECK(minute == Approx(0).scale(0.0).epsilon(0.001));
	CHECK(second == Approx(0).scale(0.0).epsilon(0.001));

	decdegree = 66.918277f;
	DegreeToHoursMinutesSeconds(decdegree, hour, minute, second);
	CHECK(hour == Approx(4).scale(0.0).epsilon(0.001));
	CHECK(minute == Approx(27).scale(0.0).epsilon(0.001));
	CHECK(second == Approx(40.3865).scale(0.0).epsilon(0.001));

	decdegree = -58.2314f;
	DegreeToHoursMinutesSeconds(decdegree, hour, minute, second);
	CHECK(hour == Approx(-3).scale(0.0).epsilon(0.001));
	CHECK(minute == Approx(52).scale(0.0).epsilon(0.001));
	CHECK(second == Approx(55.536).scale(0.0).epsilon(0.001));


	decdegree = -58.2314f;
	DegreeToHMS(decdegree, hour, minute, second);
	CHECK(hour == Approx(-3).scale(0.0).epsilon(0.001));
	CHECK(minute == Approx(52).scale(0.0).epsilon(0.001));
	CHECK(second == Approx(55.536).scale(0.0).epsilon(0.001));


	CHECK(DegreeToGradian(0.0) == Approx(0.0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToGradian(90.0) == Approx(100.0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToGradian(180.0) == Approx(200.0).scale(0.0).epsilon(0.001));

	CHECK(DegreeToGon(0.0) == Approx(0.0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToGon(90.0) == Approx(100.0).scale(0.0).epsilon(0.001));
	CHECK(DegreeToGon(180.0) == Approx(200.0).scale(0.0).epsilon(0.001));


	
	CHECK(DegreeToCompass32Wind(0.0, false) == "north");
}
