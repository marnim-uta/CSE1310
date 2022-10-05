/*                     if1.c
 *
 *   Synopsis  - A decimal integer is input, added to CONSTANT, 
 *               and the sum is displayed. If the sum is less 
 *               than 20, a message is issued.
 *
 *   Objective - Illustrates the simplest form of the if statement
 */

/* Include Files */
#include <stdio.h> 

/* Constant Definitions */
#define CONSTANT 5

/* Function Prototypes */
int add_const( int intvar, int constant );
/*   PRECONDITION:  intvar and constant are integers
 *
 *   POSTCONDITION: The value returned is the sum of its parameter, 
 *                  intvar and constant
 */

int main( void )
{
     int sum, intvar;

     printf( "Enter a decimal integer: " );
     scanf( "%d", &intvar );

     sum = add_const( intvar, CONSTANT );
     printf( "%d + %d is %d.\n", intvar, CONSTANT, sum );

     if ( sum < 20 )               /* Notes 1 and 2 */
          printf( "The number is small enough.\n" );
     return 0;
}

/*******************************add_const()*********************/

int add_const( int intvar, int constant )
{
     return( intvar + constant );
} 
