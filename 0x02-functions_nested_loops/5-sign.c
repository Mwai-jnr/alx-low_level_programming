#include "main.h"

/**
 * print_sign - starting point
 * @n: is character to be checked
 * Description: prints the sign of the number.
 * checks if n is greater than 0, n is equal to 0 and n  is lass then 0
 * Return: 1 if n >0 ,0 if n == 0,-1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}

