// Shuffle Standard containers

//=================================
// header guards
#ifndef __MATH_RANDOM_SHUFFLE_HPP__ 
#define __MATH_RANDOM_SHUFFLE_HPP__

//=================================
// included dependencies
#include "Math/Random/RandomNumber.hpp"
//=================================
//

//Works on 
template <class RandomAccessIterator>
void RandomFlatShuffle (RandomAccessIterator first, RandomAccessIterator last)
{
	//Zero indexed
	for ( unsigned int i=(last-first)-1; i > 0; --i) 
	{
	    swap (first[i], first[ SeededFlatRand((unsigned int)0,i) ]);
	}
}

#endif

