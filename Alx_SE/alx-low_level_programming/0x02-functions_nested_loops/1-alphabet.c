#include <stdio.h>
#include "main.h"

/**
  * main - Entry Point
  *
  * Return: Always 0 Success
  */
void  print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
}
