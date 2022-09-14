#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int x, y;

	for (x = 0; x <= 23; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			if (x < 10)
			{
				_putchar('0');
				_putchar(x + '0');
			}
			else if (x >= 10)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			if (y < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(y + '0');
			}
			else if (y >= 10)
			{
				_putchar(':');
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
