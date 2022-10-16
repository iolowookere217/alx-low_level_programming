#include <stdio.h>

/**
 * main - this will print the lowercase alphabet in reverse order.
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);

}
