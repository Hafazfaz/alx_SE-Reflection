#include <stdio.h>

/**
  * main - Entry Point
  *
  * Return: Always 0 (Suceess)
  */
int main(void)
{
	int decimal = 0;
	char base = 'a';

	while (decimal <= 9)
	{
		putchar(decimal + '0');
		decimal++;
	}
	while (base <= 'f')
	{
		putchar(base);
		base++;
	}
	putchar('\n');
	return (0);
}
