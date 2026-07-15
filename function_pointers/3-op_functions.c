#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 * @a: First number (dividend)
 * @b: Second number (divisor)
 *
 * Return: The result of dividing a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the modulo of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The remainder of a divided by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
