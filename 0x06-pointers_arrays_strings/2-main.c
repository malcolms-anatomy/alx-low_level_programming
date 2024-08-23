#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;
    int i;

    /* Initialize `s1` with '*' characters */
    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';  /* Null-terminate `s1` */

    printf("%s\n", s1);  /* Print the initial value of `s1` */

    /* Copy the first 5 characters from the string to `s1` */
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);  /* Print the result */
    printf("%s\n", ptr); /* Print the result (same as `s1`) */

    /* Copy up to 90 characters from the string to `s1` */
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);    /* Print the result */
    printf("%s", ptr);  /* Print the result (same as `s1`) */

    /* Print the hexadecimal representation of the contents of `s1` */
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");

    return (0);
}

