#include <stdio.h>

int main () {
   int numb;
   char ch;

   for(numb = 48 ; numb <= 57 ; numb++) {
      putchar(numb);
   }

   for(ch = 'a' ; ch <= 'f' ; ch++) {
      putchar(ch);
   }
   putchar('\n');   
   return(0);
}
