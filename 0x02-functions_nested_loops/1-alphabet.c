#include "main.h"
/**
 * main - Entry point
 * print_alphabet - Prints the alphabet in lowercase.
 i*
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
