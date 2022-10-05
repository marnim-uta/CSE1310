/*                         if.c
 *
 *   Synopsis  - Plays a one-time guessing game with the user.
 *               The user enters a number, which is compared
 *               with TARGET. The computer issues a diagnostic
 *               message and then the correct result.
 *
 *   Objective - Illustrates the if-else statement.
 */

#include <stdio.h>
#define TARGET 17
/* Function Prototypes */
void test( int guess, int target );

int main( void )
{
     int a_guess;
     printf( "I'm thinking of an integer.\n" );
     printf( "Try to guess it now. " );
     scanf( "%d", &a_guess );
     test( a_guess, TARGET );
     printf( "The number was %d.\n", TARGET );
     return 0;
}

/*******************************test()**************************/
void test( int guess, int target )
{
     if ( guess < target )
          printf( "Too low.\n" );
     else if ( guess > target )
          printf( "Too high.\n" );
     else
          printf( "You guessed it!\n" );
}
