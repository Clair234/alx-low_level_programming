#include "main.h"

/**
 * more_numbers - prints 0 - 14 ten times
 *
 * Return: Always 0 success
 */

void more_numbers(void)
{
	int  count, row;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{

			if (count > 9)
			{
				_putchar((count / 10) + '0');
			}
			_putchar((count % 10) + '0');
		}
		_putchar('\n');
	}
}
