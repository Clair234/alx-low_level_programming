#include "main.h"

/**
 * get_bit - gets the bit at the index
 * @n: the number of index
 * @index: the bit to get
 *
 * Return: the bit or -1 on error
 */
int get bit(unsigned long int n, unsigned int index)
{
	if (iindex >= sizeof(n) * 8)
		return(-1);

	return(n >> index & 1);
}
