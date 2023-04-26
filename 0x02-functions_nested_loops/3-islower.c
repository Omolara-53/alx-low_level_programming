#include "main.h"
/**
 * _islower - Checks for a lowercase character.
 * shows 1 if it is a lowercase and shows 0 if it is not
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
