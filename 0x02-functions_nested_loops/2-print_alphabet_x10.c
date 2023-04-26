#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times, in lowercase.
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;
	int y;

	for (y = 1; i <= 10; i++)
	{
		for (y = 97; y <= 122; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
