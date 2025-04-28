#include <stdio.h>
#include "main.h"

/**
  * main - Entry Point
  *
  * Return: Always 0.
  */
void print_alphabet_x10(void)
{
	char alphabet10;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet10 = 'a'; alphabet10 <= 'z'; alphabet10++)
		{
			putchar(alphabet10);
		}
		putchar('\n');
	}
}
