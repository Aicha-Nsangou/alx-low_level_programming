#include "main.h"
/**
 * print_rev - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void print_rev(char *s){
int i;
i = _strlen(s);

while (i--)
{
	_putchar(s[i]);
}
_putchar('\n');

}
