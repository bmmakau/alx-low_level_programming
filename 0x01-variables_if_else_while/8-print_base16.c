#include <stdio.h>

/**
  * main - Entry point
  * Description: print Hex 0-f
  * Return: 0
  */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
