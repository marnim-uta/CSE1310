/*               bubble.c
 *
 *   Synopsis  - Attempts to implement a bubble sort of an 
 *               array of integers. It has a small bug in 
 *               it.  Fix the bug.
 *
 *   Objective - Gives practice in debugging.
 */

/* Include Files */
#include <stdio.h>

/* Function Declarations */
void bubble_sort( int[], int );
void swap ( int , int );

int main( void )
{
     int index, data[10] = { 10, 3, 4, 8, 2, 5, 9, 7, 1, 6 };

     bubble_sort( data, 10 );

     for ( index=0; index < 10; index++ )
          printf( "%d ", data[index] );
     printf( "\n" );
     return 0;
}
void bubble_sort( int data[], int num_elts )
{
     int i, j;

     for ( i = 0; i < num_elts; i++ )
          for ( j = num_elts-1; j > i; j-- )
               if ( data[j] < data[j-1] )
                    swap( data[j], data[j-1] );
}

void swap( int a, int b )
{
     int temp;

     temp = a;
     a = b;
     b = temp;
}
