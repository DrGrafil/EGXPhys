#include "RandomNumber.hpp"
#include "QuickRand.hpp"
//#include "mtrand/mtrand.h"
//#include <assert.h>

//MTRand_closed SeededRand;

void SeedRandom( unsigned long seed )
{
	SeededRand.seed(seed);
}

bool FlatBoolRand()
{
	return xorshf96() % 2 == 1;
}

int FlatRand( int min, int max )
{
	assert( min <= max );
	return xorshf96Scaled( min, max );
}

unsigned int FlatRand( unsigned int min, unsigned int max )
{
	assert( min <= max );
	return xorshf96Scaled( min, max );
}

float FlatRand( float min, float max )
{
	assert( min <= max );
	return (float)xorshf96Scaled( min, max );
}

double FlatRand( double min, double max )
{
	assert( min <= max );
	return xorshf96Scaled( min, max );
}


bool SeededFlatBoolRand()
{
	return (unsigned long)( SeededRand() * 4294967295. ) % 2 == 1;
}

double SeededFlatRand()
{
	return SeededRand();
}

int SeededFlatRand( int min, int max )
{
	assert( min <= max );
	return min + ( max - min ) * (int)SeededRand();
}

unsigned int SeededFlatRand( unsigned int min, unsigned int max )
{
	assert( min <= max );
	return min + ( max - min ) * (unsigned int)SeededRand();
}

float SeededFlatRand( float min, float max )
{
	assert( min <= max );
	return (float)min + ( max - min ) * (float)SeededRand();
}

double SeededFlatRand( double min, double max )
{
	assert( min <= max );
	return min + ( max - min ) * SeededRand();
}

// Gives a random number based on a PDF
bool PDFBoolRand()
{
	return xorshf96Scaled( 0, 1 );
}

int PDFRand( int min, int max )
{
	assert( min <= max );
	return xorshf96Scaled( min, max );
}

unsigned int PDFRand( unsigned int min, unsigned int max )
{
	assert( min <= max );
	return xorshf96Scaled( min, max );
}

float PDFRand( float min, float max )
{
	assert( min <= max );
	return (float)xorshf96Scaled( min, max );
}

double PDFRand( double min, double max )
{
	assert( min <= max );
	return xorshf96Scaled( min, max );
}

