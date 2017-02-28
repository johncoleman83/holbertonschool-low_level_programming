#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - input
 * @a: input array
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0, j = 0; i < size; i++, j += size)
		sum1 += a[j + i];
	for (i = 0, j = size; i < size; i++, j += size)
		sum2 += a[j - 1 - i];
	printf("%d, %d\n", sum1, sum2);
}
