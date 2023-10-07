#include "main.h"

/**
 * *_strdup - return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return(NULL);

	while (str[i] != '\0')
		i++;
	m = malloc(sizeof(char) * (i + 1));

	if (m == NULL)
		return(NULL);
	for (size = 0; str[size]; size++)
		m[size] = str[size];
	return (m);
}
