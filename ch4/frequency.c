/*                frequency.c
 * 
 *   Synopsis  -  The user specifies how many time a die will be 
 *                rolled. The program dynamically allocates memory 
 *                for an array to store the results when the die is 
 *                rolled and then displays the total number of 
 *                occurrences of each of the results 1, ..., 6.
 *
 *   Objective - To illustrate dynamic allocation of memory.
 */

/* Header Files */
#include <stdio.h>
#include <stdlib.h>                                 /* Note 1 */

/* Function Prototypes */
void intro( void );
/*   PRECONDITION:  none
 *   POSTCONDITION: announces the purpose of the program
 */

void input_rolls( int *arrayptr, int num );
/*   PRECONDITION:  arrayptr points to memory for num ints.
 *   POSTCONDITION: arrayptr has been populated with input
 *                  from the terminal indicating the results
 *                  of each roll of a die.
 */

void calculate_and_display( int *array, int num );
/*   PRECONDITION:  array contains num elements with the
 *                  results of num tosses of a die.
 *   POSTCONDITION: the frequency of each possible outcome
 *                  1 to 6 has been displayed on the screen.
 */

int main( void )
{	
     int * arrayptr;
     int num_rolls;
     intro();

     printf( "How many times did you roll the die? " );
     scanf( "%d", &num_rolls );
                                                    /* Note 2 */
     arrayptr = ( int * )malloc( num_rolls *sizeof( int ) );	
     if ( arrayptr == NULL ) {                      /* Note 3 */
          printf( "Unable to get memory\n" );
          return 1;
     }
                                                    /* Note 4 */
     input_rolls( arrayptr, num_rolls );
                                                    /* Note 4 */
     calculate_and_display( arrayptr, num_rolls );
     free( (void *) arrayptr );                     /* Note 5 */

     return 0;
}

/*******************************intro()*************************/
void intro( void )
{	
     printf( "DO YOU HAVE A FAIR DIE?\n" );
     printf( "-----------------------\n\n" );
     printf( "Tell me how many times you will roll the die and " );
     printf( "tell me the results of each roll and I will " );
     printf( "calculate the frequency of the results 1 to 6.\n" );
}

/*******************************input_rolls()*******************/
void input_rolls( int *arrayptr, int num )
{	
     int i;

     printf( "Enter the results of the rolls now.\n" );

     for ( i = 0; i < num; i ++ ) {
          printf( "Roll #%d: ", i+1 );
          scanf( "%d", &arrayptr[i] );
                                                   /* Note 6 */
          if ( arrayptr[i] < 0 || arrayptr[i] > 6 ) {
               printf( "Sorry, your input must be a number " );	
               printf( "between 1 and 6.\n" );	
               printf( "Please enter the number again\n" );
               i--;		
          }
     }
}

/*******************************calculate_and_display***********/
void calculate_and_display( int *array, int num )
{
     int frequency[6] = {0};
     int i, j;

     for ( i = 0; i < num; i++ ) {
          for (j = 0; j < 6; j++ )
               if ( array[i] == j+1 )      /* Note 6 */
                    frequency[j]++;
     }

     for ( i = 0; i < 6; i++ )
          printf ( "Frequency of %d's is %f\n", i+1, ( double )frequency[i]/num );
}
