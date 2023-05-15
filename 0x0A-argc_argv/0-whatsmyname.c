#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints its name
 * @argv: Array of all the arguments passed to the program
 * @argc: Number of arguments passed to the program
 *
 * Return: 0 (sucess)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argc[%d] = %s\n", i, argv[i]);
			return (0);
	}
}
