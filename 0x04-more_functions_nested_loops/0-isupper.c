#include "main.h"
#include <stdio.h>
/**
 * _isupper - Entry point
 * Description: checks if a character is in uppercase
 * @c: char to check
 *
 * Return: 0 0r 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
