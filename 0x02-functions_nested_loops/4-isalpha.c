#include "main.h"

/**
  * _isalpha - Checks for alphabets
  * @c: char to be checked
  * Description: print 1 for alphabet, 0 for non-alphabet
  * Return: 1 for alphabet, 0 for non-alphabet
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
