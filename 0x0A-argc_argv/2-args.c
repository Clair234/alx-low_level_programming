#include<stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: ibt
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int j = 0;

	while (argc--)
	{
		printf("%s\n", argv[j]);
		j++;
	}
	return (0);
}
