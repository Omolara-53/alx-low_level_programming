#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments
 * @argc: Number of arguments passed into the program
 * @argv: Array of arguments passed to the program
 *
 * Description : A program that prints all arguments it recieves.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

