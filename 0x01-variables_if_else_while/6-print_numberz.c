#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
   int ch;

   for(ch = 48 ; ch <= 57 ; ch++)
   {
      putchar(ch);
   }

   putchar('\n');
   return(0);
}
