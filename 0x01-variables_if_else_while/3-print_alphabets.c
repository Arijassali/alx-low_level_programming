#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char mychar;

	for (mychar = 'a'; mychar <= 'z'; mychar++)
		putchar(mychar);

	for (mychar = 'A'; mychar <= 'Z'; mychar++)
		putchar(mychar);

	printf("\n");
	return (0);
}
