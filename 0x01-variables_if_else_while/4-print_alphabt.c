#include <stdio.h>

/**
 * omit alphabets q amd e
 */
int main()
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return 0
}
