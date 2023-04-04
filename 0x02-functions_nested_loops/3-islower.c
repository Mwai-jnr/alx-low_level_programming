#include "main.h"
/**
 * _islower - checks for lowercase
 * @c : the character to be checked
 * Return: 1 if c is lower case, 0 if other wise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
