// Quick random number generators

//=================================
// header guards
#ifndef __QUICK_RAND_HPP__ 
#define __QUICK_RAND_HPP__

//=================================
// included dependencies

//=================================
//

unsigned long xorshf96(void);
double xorshf96Scaled(double min, double max);
unsigned int xorshf96Scaled(unsigned int min, unsigned int max);
int xorshf96Scaled(int min, int max);
#endif

