#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @x: innter to swap
 * @y: integer to swap
 */
void swap_int(int *x, int *y)
{
	int m;

	m = *x;
	*x = *y;
	*y = m;
}
