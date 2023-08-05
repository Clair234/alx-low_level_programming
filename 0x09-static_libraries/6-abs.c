#include "main.h"

/**
 * _abs - computes the absolute valueof an integer
 * @n: the integer to check
 * Return:always 0 success
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
