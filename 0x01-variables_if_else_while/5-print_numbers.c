#include <stdio.h>
#include <unistd.h>
/**
 * main - starting point
 * Description: print single numbers of base 10 start 0
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
