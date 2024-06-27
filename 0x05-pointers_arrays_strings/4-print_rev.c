#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string to be printed in reverse
 */
void print_rev(char *s)
{
int len = _strlen(s); /* Get the length of the string */

for (int i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n'); /* Print newline after the reversed string */
}

