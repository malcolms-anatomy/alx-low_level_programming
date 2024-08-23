#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    /* Test the _strcmp function */
    printf("%d\n", _strcmp(s1, s2));  /* Should print a negative value */
    printf("%d\n", _strcmp(s2, s1));  /* Should print a positive value */
    printf("%d\n", _strcmp(s1, s1));  /* Should print 0 */

    return (0);
}

