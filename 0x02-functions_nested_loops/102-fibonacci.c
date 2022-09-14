#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line
 *
 * Return: Nothing!
 */
int main(void)
{
	int x = 0;
	long y = 1;
	long z = 2;

	while (x < 50)
	{
		if (x == 0)
			printf("%1d", y);
		else if (x == 1)
			printf(", %1d", z);
		else
		{
			z += y;
			y = (z - y);
			printf(", %1d", z);
		}

		++x;
	}

	printf("\n");
	return (0);
}
