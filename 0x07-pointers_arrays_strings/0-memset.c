#include "main.h"

/**
  * _memset - Fill memory with a constant byte
  * @s: memory area to fill
  * @b: byte to fill with
  * @n: bytes of memory area to fill
  *
  * Return: pointer to memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
