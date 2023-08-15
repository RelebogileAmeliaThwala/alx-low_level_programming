#include <stdio.h>
#include <string.h>
#include "main.h"

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
putchar(letters[i]);
}
putchar('\n');
return (0);
}
