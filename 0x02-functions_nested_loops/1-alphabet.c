#include "holberton.h"
/**
  * print_alphabet - print alphabet in lowercase 
  *
  * Return: Always 0.
  */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while ('z' >= c)
	{
			_putchar(c);
			c++;
	}
	_putchar('\n');
}
