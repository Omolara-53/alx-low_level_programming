#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 *  if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int x, y, length;

	length = 0;

	for (x = 0; str[x] != '\0'; x++)
length++;
	y = (length / 2);

	if ((length % 2) == 1)
		y = ((length + 1) / 2);

	for (x = y; str[a] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
