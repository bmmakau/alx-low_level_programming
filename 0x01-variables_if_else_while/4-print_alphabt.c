#include <stdio.h>

/**
  * main - Entry point
  * Description: print a-z omitting e and q
  * Return: 0
  */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
