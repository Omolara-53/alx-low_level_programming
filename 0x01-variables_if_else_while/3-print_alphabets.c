#include <stdio.h>
/**
 * main - Entry point
 * Description: "A program that prints alphabets in lowercase and uppercase"
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 97;
	int y = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (y <= 90)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
