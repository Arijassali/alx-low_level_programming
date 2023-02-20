#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char A = 'a';

	for (A; A <= 'z'; A++)
		putchar(A);
	putchar('\n');
	return (0);
}
