#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @a: pointer to array.
 * @n: number elements of array.
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
