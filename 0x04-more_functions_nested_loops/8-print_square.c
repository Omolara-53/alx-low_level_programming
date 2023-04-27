#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: size of the square
 */
void print_square(int size)
{
	int i;
	int y;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (y = 0; y < (size); y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
