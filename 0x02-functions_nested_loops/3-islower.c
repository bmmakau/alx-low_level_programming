include "main.h"

/**
  * _islower - Checks lowercase character
  * @c: character to check
  *
  * Return: 1 for lower, 0 for non-lower
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
