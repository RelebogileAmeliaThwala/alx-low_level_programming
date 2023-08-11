#include <stdio.h>

/**
 * main - Write a program that prints the
 * alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(letter[i]);
	}
	putchar('\n');
	return (0);
}

