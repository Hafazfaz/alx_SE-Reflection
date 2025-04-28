#include <stdio.h>
/**
  * main - A Progran that prints alphabet in lowercase
  *
  * Return: always 0 (success)
  */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
	putchar(alpha);
	alpha++;
	}
	putchar('\n');
	return (0);
}
