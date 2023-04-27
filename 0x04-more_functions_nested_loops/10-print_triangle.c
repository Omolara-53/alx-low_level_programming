#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int y;

		for (i = 1; i <= size; i++)
		{
			for (y = i; y < size; y++)
			{
				_putchar(' ');
			}
			for (y = 1; y <= i; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
