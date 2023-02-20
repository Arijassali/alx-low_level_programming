#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		if (a == 'e' || a == 'q')
			continue;
		else
			putchar(a);
	printf("\n");
	return (0);
}

