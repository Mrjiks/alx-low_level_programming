#include "main.h"
#include <stdio.h>

/**
 * main - Fizz for multiples of 3 and Buzz for multiples of 5 FizzBuzz for both
 *
 *
 * Return: Always 0
 */
int main(void)
{
  for (int i = 1; i <= 100; i++)
  {
    switch (i % 15)
    {
      case 0:
        printf("FizzBuzz\n");
        break;
      case 3:
      case 6:
      case 9:
      case 12:
        printf("Fizz\n");
        break;
      case 5:
      case 10:
        printf("Buzz\n");
        break;
      default:
        printf("%d\n", i);
    }
  }

  return 0;
}

