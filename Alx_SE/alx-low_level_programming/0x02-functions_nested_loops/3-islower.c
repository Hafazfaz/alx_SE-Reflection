#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  *
  * Return: Always 0 Success
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
