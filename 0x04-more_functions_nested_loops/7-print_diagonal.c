#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, y;
		for (i = 0; i < n; i++)
		{
			for (y = 0; y < n; y++)
			{
				if (y == i)
					_putchar('\\');
				else if (y < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
