#include <stdio.h>
#include "main.h"

/**
 * main - Multiplies two numbers
 * @argc: Number of arguments passed into the program
 * @argv: Array of arguments passed to the program
 * _atoi - converts a string to an integer
 *
 * Description: A program that prints the result of
 * the multiplication of two numbers followed by a new line
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int multiplication;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	multiplication = _atoi(argv[1]) * _atoi(argv[2]);
	printf("%d\n", multiplication);

	return (0);
}
