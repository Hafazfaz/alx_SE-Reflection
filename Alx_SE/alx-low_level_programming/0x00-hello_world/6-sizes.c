#include <stdio.h>
/**
  * main - Entry Point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	printf("Size of a char: %lu bytes(s)\n", sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu bytes(s)\n", sizeof(float));
	return (0);
}
