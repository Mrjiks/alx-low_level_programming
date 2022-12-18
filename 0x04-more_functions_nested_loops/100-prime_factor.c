#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	long int n = 612852475143;
	long int pf;

	for (pf = 2; pf < n; py++)
	{
		if (n % pf == 0)
		{
			n = n / pf;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
