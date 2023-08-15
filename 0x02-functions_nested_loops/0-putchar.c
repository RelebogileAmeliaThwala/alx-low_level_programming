#include <stdio.h>
#include <string.h>
#include "main.h"
#include "_putchar.c"

/**
 * main -Write a program that prints _putchar, followed by a new line.
 * The program should return 0
 * Return: Always 0 (Success)
*/

int main(void)
{
char letters[] = "_putchar";
int i;
int size = strlen(letters);

for (i = 0; i < size; i++)
{
_putchar(letters[i]);
}
_putchar('\n');
return (0);
}
