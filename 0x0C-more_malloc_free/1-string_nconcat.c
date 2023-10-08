#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer 1
 * @s2: pointer 2
 * @n: number of bytes from n2 to concatenate
 *
 * Return: pointer to space in memory containing concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_length, s2_length;

	/*check if strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		S2 = "";
	/*compute the length of the strings*/

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;

	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;

	/*memory reservation for case 1 & 2*/

	str = malloc(s1 - length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*copy first string into  str*/
	for (i = 0, s1[i] != '\0'; i++)
		str[i] = s1[i];
	/*copy second string into str*/
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}


