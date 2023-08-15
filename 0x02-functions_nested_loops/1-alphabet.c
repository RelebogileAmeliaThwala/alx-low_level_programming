#include <stdio.h>
#include "_putchar.c"
#include "main.h"
#include <string.h>
/**
 * main - call print_alphabet
 * print_alphabet - print alphabets in lowercase
 * Return: Always 0 (Success)
*/


void print_alphabet(void)
{
char letters[] = "abcdefghijklmnopqrstuvwxyz";
int size = strlen(letters);
int i;
for (i = 0; i < size; i++)
{
_putchar(letters[i]);
}
_putchar('\n');
}

int main(void)
{
print_alphabet();
return (0);
}
