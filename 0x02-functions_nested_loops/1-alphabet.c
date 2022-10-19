#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabets
 * Description: print a - z
 * Return: no return type
 */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
