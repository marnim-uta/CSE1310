/*                           if3.c
 *   Synopsis  - The program prompts for and accepts input of a
 *               decimal integer.  It then tests to see if that
 *               integer is even or odd.  The results of the
 *               test are displayed.
 *   Objective - Illustrates an if-else statement and the use
 *               of a function call in a control expression.
 */

/* Include Files */
#include <stdio.h>

/* Function Prototypes */
int odd(int intvar );

int main(void)
{
     int intvar;

     printf( "Enter a decimal integer: " );
     scanf( "%d", &intvar );



     if ( odd( intvar ) )
          printf( "%d is odd.\n", intvar );
     else
          printf( "%d is even.\n", intvar );
     return 0;
}

/*******************************odd()***************************/
int odd( int intvar )
{
     return ( intvar % 2);
}
