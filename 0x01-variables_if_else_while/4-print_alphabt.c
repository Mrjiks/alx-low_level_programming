#include <stdio.h>
/**
 * main - main block
 * Description: Print all letters except e and q in lowercase with putchar
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')

		{
			putchar(c);

		}

		c++;
	}


	putchar('\n');

	return (0);

}

