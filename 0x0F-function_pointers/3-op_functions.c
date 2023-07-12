#include "3-calc.h"

/**
 * op_add - add two parameters
 * @a: para 1
 * @b: param 2
 * Return: sum;
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two parameters
 * @a: para 1
 * @b: param 2
 * Return: sub;
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two parameters
 * @a: para 1
 * @b: param 2
 * Return: product;
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two parameters
 * @a: para 1
 * @b: param 2
 * Return: divide;
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
 * op_mod - modulus
 * @a: para 1
 * @b: param 2
 * Return: division;
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
