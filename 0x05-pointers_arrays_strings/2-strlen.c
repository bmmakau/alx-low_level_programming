#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: String to check
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int x = 0;

	for (; *s != '\0'; s++)
	{
		x++;
	}

	return (x);
}
