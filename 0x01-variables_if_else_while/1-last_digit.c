#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("%d Last digit of\n", n, "%d is\n", lastn, "and is greater than 5\n");
	} else if (n == 0)
	{
		printf("%d Last digit of\n", n, "%d is\n", lastn, " is 0\n");
	} else (n < 6)
	{
		printf("%d Last digit of\n", n, "%d is\n", lastn, "and is less than 6 and is not 0\n");
	}
	return (0);

}
