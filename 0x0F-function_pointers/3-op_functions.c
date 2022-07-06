#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - find sum of two numbers
 * @a: num1
 * @b: num2
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts the second number from the first
 * @a: num1
 * @b: num2
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two number
 * @a: num1
 * @b: num2
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a with b
 * @a: num1
 * @b: num2
 * Return: quetiont
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds remainder of a number
 * @a: num1
 * @b: num2
 * Return: Remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
