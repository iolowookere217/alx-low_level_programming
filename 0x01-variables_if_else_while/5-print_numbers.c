#include <stdio.h>

/**
 * main - this will print all single digit numbers of base 10 starting from 0
 *
 * Retuen: Always 0.
 */

int main(void)
{
	in num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);

}
