#include "Math/Random/QuickRand.hpp"

//  Marsaglia's xorshf generator
// http://stackoverflow.com/questions/1640258/need-a-fast-random-generator-for-c

static unsigned long Xxorshf96=123456789, Yxorshf96=362436069, Zxorshf96=521288629;
static unsigned long LongMax = -1; 
unsigned long xorshf96(void) 
{          //period 2^96-1
	unsigned long T;
    Xxorshf96 ^= Xxorshf96 << 16;
    Xxorshf96 ^= Xxorshf96 >> 5;
    Xxorshf96 ^= Xxorshf96 << 1;

	T = Xxorshf96;
	Xxorshf96 = Yxorshf96;
	Yxorshf96 = Zxorshf96;
	Zxorshf96 = T ^ Xxorshf96 ^ Yxorshf96;

	return Zxorshf96;
}

double xorshf96Scaled(double min, double max)
{
	return ( min + ( max - min ) * (double)xorshf96()/(double)LongMax );
}

int xorshf96Scaled(int min, int max)
{
	return min + ( xorshf96() % ( max+1 - min ) );	
}

unsigned int xorshf96Scaled(unsigned int min, unsigned int max)
{
	return min + ( xorshf96() % ( max+1 - min ) );	
}
