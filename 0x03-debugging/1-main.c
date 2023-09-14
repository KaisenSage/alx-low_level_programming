#include <stdio.h>

/**
 * main - Demonstrates how to avoid an infinite loop
 * Return: 0
 */
int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");
    i = 0;

    /* While loop is commented out to avoid an infinite loop */
    /* while (i < 10) */
    /* { */
    /*     putchar(i); */
    /* } */

    printf("Infinite loop avoided! \\o/\n");

    return (0);
}

