#include <stdio.h>
#include "./main.h"

/**
 * add - Adds two integers
 * @a: first integer
 * @b: second integer
 * Return: integer
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int a, b;
	int addition, multiplication;

	printf("a: ");
	scanf("%d", &a);

	printf("b: ");
	scanf("%d", &b);

	/* addition = a + b; */
	/* multiplication = a * b; */

	addition = add(a, b);
	multiplication = multiply(a, b);

	printf("addition: %d\n", addition);
	printf("multiplication: %d\n", multiplication);

	return (0);
}
