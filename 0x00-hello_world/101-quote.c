#include <stdio.h>
/**
 * main - main fn
 * Return: always 1
 */
int main(void)
{
	char part1[] = "and that piece of art is useful\" - ";
	char part2[] = "Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s%s\n", part1, part2);
	return (1);
}
