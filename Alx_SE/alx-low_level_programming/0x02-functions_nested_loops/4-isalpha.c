#include <stdio.h>

/**
  * _isalpha - check if character is alphbet
  * @c: The character to check
  *
  * Return: Always 0.
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
