#include "main.h"
/**
 * rev_string - prints reversed string, followed by a new line
 * @s: pointer to the string to print
 * Return: void
*/

void rev_string(char *s)
{

int len, i, half;
char temp;

len = _strlen(s);
i = 0;
half = len / 2;

while (half--)
{
	temp = s[len - i - 1];
	s[len - i - 1] = s[i];
	s[i] = temp;
	i++;
}

}
