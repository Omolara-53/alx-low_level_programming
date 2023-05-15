#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed
 * @argc: Number of arguments passed into the program
 * @argv: Array of arguments passed to the program
 *
 * Description : A program that prints the number of
 * arguments passed to into it
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
