#include <stdlib.h>
#include "main.h"

/**
  * flip_bits - checks number of bits you would need to flip.
  * @n: 1st number
  * @m: 2nd number
  *
  * Return: number of bits needed to flip.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
			count++;

		mask >>= 1;
	}

	return (count);
}
