#include <stdio.h>

#define IN 1
#define OUT 0

int c;
int main()
{
    while ((c = getchar()) != EOF) 
        if (c != ' ' )
             putchar(c);
         else
             putchar('\n');
             
        
   
 }
