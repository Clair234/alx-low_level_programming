#include "main.h"

/**
 * string_toupper  -  change lowecase to uppercase
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *)
{
	int i;

	i = 0;

while (n[i] != '\n')
{
	if (n[i] >= 'a' && n[i] <= 'z')
		n[i] = n[i] - 32;
	i++;
}
return (n);
}
