#include "main.h"

/**
 * set_bit - sets the bit at the index
 * @n: the number of index
 * @index: the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if(index >= sizeof(n) * 8)
		return(-1);

	return(!! (*n |= 1l << index));
}
