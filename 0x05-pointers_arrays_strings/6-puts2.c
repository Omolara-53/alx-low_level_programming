#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int length = 0;
	int x = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	x = length - 1;
	for (o = 0 ; o <= x ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}


