#include "main.h"

/**
 * print_alphabet_x10 - prints lower case alphabet 10 times
 *
 * Return: 0 for success
 */

void print_alphabet_x10(void)
{
	int i;
	char v;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (v = 'a' ; v <= 'z' ; v++)
		_putchar(v);
		_putchar('\n');
	}
}
