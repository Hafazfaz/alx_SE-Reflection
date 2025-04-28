#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%i", number);
		number++;
	}
	putchar('\n');
	return (0);
}
