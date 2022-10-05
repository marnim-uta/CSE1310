/*                       while.c
 *
 *   Synopsis  - Plays a guessing game with the user.  The user 
 *               is asked to enter choices until guessing the 
 *               computer's number.
 *   Objective - Illustrates the while statement and compound
 *               statements in C.
 */

/* Include Files */
#include <stdio.h>

/* Constant Definitions */
#define TARGET 17
#define LOW 0
#define HIGH 100
#define TRUE 1                                    /* Note 1 */
#define FALSE 0                                   /* Note 1 */

/* Function Prototypes */
int process( int guess, int target );
/*   PRECONDITION:  guess can be any integer.
 *   POSTCONDITION: The parameter is tested to see if it is equal to 
 *                  target. A diagnostic message is issued and 1 is 
 *                  returned for equality and 0 for inequality.
 */

int main( void )
{
     int a_guess, correct;

     correct = FALSE;
     printf( "I'm thinking of a number between %d and %d.\n", LOW, HIGH );

     while ( correct == FALSE ) {            /* Notes2 and 3 */
          printf( "Try to guess it now. " );
          scanf( "%d", &a_guess );
          correct = process( a_guess, TARGET );
     }                                             /* Note 4 */
     return 0;
}

/*******************************process()***********************/

int process( int guess, int target )
{
     if ( guess < target )
          printf( "Too low!\n" );
     else if ( guess > target )
          printf( "Too high!\n" );
     else {
          printf( "You guessed it!\n" );
          return TRUE;
     }
     return FALSE;
}
