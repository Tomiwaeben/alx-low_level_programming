#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * argc: argument count
 * argv: argument vector
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;
		for (i = 1; i < 3; 1++)
			j *= atoi(argv[i]);
		printf("%d\n", j);

	}
	return (0);
}
