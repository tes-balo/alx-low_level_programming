#include <stdio.h>

/**
 * main - Prints the 10 digits of base 10 from 0-9.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
   int ch;

   for (ch = 48 ; ch <= 57 ; ch++)
   {
      putchar(ch);
   }

   putchar('\n');
   return (0);
}
