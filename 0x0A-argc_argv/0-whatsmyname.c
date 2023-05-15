#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints its name
 * @argv: Array of all the arguments passed to the program
 * @argc: Number of arguments passed to the program
 *
 * Return: 0 (sucess)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
		printf("%s\n", *argv);
			return (0);
}
