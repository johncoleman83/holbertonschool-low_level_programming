#include "bootcamp.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for a software development program students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("Bootcamp");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
