#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("%d and is greater than 5\n", last_digit);
	}
	else if (last_digit == 0)
{
printf("%d and is 0\n", last_digit);
}
	else if (last_digit != 0 && last_digit < 6)
	{
		printf("%d and is less than 6 and not 0\n", last_digit);
	}
        return (0);
}
