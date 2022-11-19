#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - adds integers
  * @a: int 1
  * @b: int 2
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtracts integers
  * @a: int 1
  * @b: int 2
  *
  * Return: difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - multiplies integers
  * @a: int 1
  * @b: int 2
  *
  * Return: product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - divides integers
  * @a: int 1
  * @b: int 2
  *
  * Return: integer
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - finds modulus
  * @a: int 1
  * @b: int 2
  *
  * Return: modulus
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
