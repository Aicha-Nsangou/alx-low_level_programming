#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if matching, and ns1 - ns2 if not matching
*/

int _strcmp(char *s1, char *s2)
{
int i;

/**
 * We have reached the end of S1 OR we have reached the end of S2
 * 
*/

while (s1 !='\0' && s1 == s2){
return (s1 == s2) ? 0 : (unsigned s1 - unsigned s2);
}
}
