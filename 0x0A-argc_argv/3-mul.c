#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts string to integer
 * @s: string to be converted
 *
 * Description: A program that prints the result of
 * the multiplication of two numbers followed by a new line
 * Return: The integer converted from the string
 */
int _atoi(char *s)
{
	int i, x, y, length, z, digit;

	i = 0;
	x = 0;
	y = 0;
	length = 0;
	z = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && z == 0)
	{
		if (s[i] == '-')
			++x;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (x % 2)
				digit = -digit;
			y = y * 10 + digit;
			z = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			z = 0;
		}
		i++;
	}

	if (z == 0)
		return (0);

	return (y);
}

/**
 * main - Multiplies two numbers
 * @argc: Number of arguments passed into the program
 * @argv: Array of arguments passed to the program
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

