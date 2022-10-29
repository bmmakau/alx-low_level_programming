#include "main.h"

/**
  * _isdigit - Check if character is a digit
  * @x: The character to checked
  *
  * Return: 1 for a digit otherwise 0
  */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}

	return (0);
}
