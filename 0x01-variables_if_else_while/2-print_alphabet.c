#include <stdio.h>
/**
 * main - The entry point
 * Description: prints all lower case letters
 * Return: 0
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	putchar('\n');
	return (0);
}
