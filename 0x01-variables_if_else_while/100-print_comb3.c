#include <stdio.h>

/**
  * main - Entry point
  * Description: prints 2 digit combo that do not repeat
  * Return: 0
  */
int main(void)
{
	int i, j;

	i = j = '0';

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

			if ((i != '9') || (i == '9' && j != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
