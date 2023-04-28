#include <stdio.h>
#include "math.h"
/**
 * main - prints the largest prime factor of 612852475143
 * Return: Always 0 (success)
 */
int main(void)
{
	long y, maxf;
	long num = 612852475143;
	double square = sqrt(num);

	for (y = 1; y <= square; y++)
	{
		if (num % y == 0)
		{
			maxf = num / y;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
