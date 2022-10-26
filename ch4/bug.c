/*               bug.c
 *
 *   Synopsis  - Supposed to accept input values of 10
 *               integer values for the array, add 5 to
 *               each value, and display the values in the 
 *               array, but it doesn't work.
 *
 *   Objective - To provide practice in finding a common 
 *               mistake.
 */

/* Include Files */
#include <stdio.h>

/* Function Declarations */
void init_array( int[], int );
void add_five( int[], int );
void print_array( int[], int );

int main( void )
{
     int intarray[10];

     init_array( intarray, 10 );
     add_five( intarray, 10 );
     print_array( intarray, 10 );
     return 0;
}

void init_array( int array[], int numelts )
{
     int i;

     printf( "Please enter values for the array:\n" );
     for ( i = 0; i < numelts; i++ ) {
          printf( "%d: ", i );
          scanf( "%d", array+i );
     }
}

void add_five( int array[], int numelts )
{
     int i = -1;

     printf("\nAdding five to each element of the array.\n");
     while ( i++ < numelts - 1 );
          array[i] += 5;
}

void print_array( int array[], int numelts )
{
     int i;

     printf( "\nThe values in the array are:\n" );
     for ( i = 0; i < numelts; i++ )
          printf( "%d\t", *( array+i ) );
     printf( "\n" );
}
