#include <stdio.h>

/**
 * main - this will only use putchar and not char variable to
 * print all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar("\n");

	return (0);

}
