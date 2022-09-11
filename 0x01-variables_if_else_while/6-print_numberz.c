#include <stdio.h>

/**
 * main - prints numbers from 0-9
 *
 * Return : Always (Success)
 */
int main()
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	
	putchar('\n');
	return 0;
}
