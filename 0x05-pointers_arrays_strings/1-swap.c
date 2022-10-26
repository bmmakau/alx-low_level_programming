#include "main.h"

/**
  * swap_int - Swaps  values of 2 integers
  *
  * @a: first integer
  * @b: second integer
  * @temp: temporary variable
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
