#include <stdio.h>
/**
 * main - program that prints the  size of various types of computers
 * Return: 0
 */
int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a lon int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long: %zu byte(byte(s)\n", sizeof(long long int));
	printf("Size oa a float %zu byte(s)\n", sizeof(float));
	return (0);
}
