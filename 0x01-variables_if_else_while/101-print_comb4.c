#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always(Success)
 */
int main()
{
	int x, y, z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '1'; y <= '9'; y++)
		{
			for (z = '2'; z <= '9'; z++)
			{
			if (z > y && y > x)
			{
				putchar(x + '0');
			        putchar(y + '0');
		                putchar(z + '0');
			        if (i != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
			
			}
		}
	}
	putchar('\n');
	return 0
}
