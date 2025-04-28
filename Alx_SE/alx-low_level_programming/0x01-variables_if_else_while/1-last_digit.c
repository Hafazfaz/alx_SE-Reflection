#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry level
  * Description: A program that prints
  * Return: Alwways 0 success
  */

int main(void)
{
	int m;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, m);

	}
	else if (m == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, m);
	}
	else
	{
		printf("Last digit of %i is %i and less than 6 and not 0\n", n, m);
	}
	return (0);
}
