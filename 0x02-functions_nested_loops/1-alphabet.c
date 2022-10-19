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
	while (c < 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
/**
 * main - Entry point
 * Description: print a - z
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
