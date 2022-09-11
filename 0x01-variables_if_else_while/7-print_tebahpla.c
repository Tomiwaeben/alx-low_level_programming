#include <stdio.h>
/*
 * main - prints alphabets in reverse
 * Return : Always (Success)
 */
int main()
{
	char c;

	for (c = 'z'; c >= 'a'; c--);
	{
		putchar(c);
	}

	putchar('\n');
	
	return 0
}
