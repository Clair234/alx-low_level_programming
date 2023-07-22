#include "main.h"

/**
 * print_square  -  print using a character #
 * @size: size of the square
 * Return: Always 0 success
 */

void print_square(int size)
{
	int row, coulmn;

	for (row = 0; row < size ; row++)
	{
		for (coulmn = 0; coulmn < size; coulmn++)
			_putchar('#');
		_putchar('\n');
	}
}
