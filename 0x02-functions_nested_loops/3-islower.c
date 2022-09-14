#include "main.h"

/**
 * _islower: checks if an alphabet is lowercase
 * @c : a character argument
 * Return 1 if c is a letter, lowercase or uppercase, 0 if otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
