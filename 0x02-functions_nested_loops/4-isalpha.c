#include "main.h"

/**
 * _isalpha -  checks is character is upper or lowercase
 * @c : is the character being checked
 * Return: 1 if character is upper or lower case  0 if not
 */

int _isalpha(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}