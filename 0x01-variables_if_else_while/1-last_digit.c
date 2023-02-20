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
		printf("The Last digit of %d is %d  and is greater than 5", n, lastdigits);
	}
	else if (lastdigits < 6 && lastdigits != 0)
	{
		printf("The Last digit of %d is %d is less than 6 and not zero",
			n, lastdigits);
	}
	else
		printf("The Last digit of %d is %d is 0", n, lastdigits);
	return (0);
}
