#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n, lastdigits;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigits = n % 10;
	if (lastdigits > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigits);
	}
	else if (lastdigits < 6 && lastdigits != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, lastdigits);
	}
	else
		printf("Last digit of %d is %d and is 0\n", n, lastdigits);
	return (0);
}
