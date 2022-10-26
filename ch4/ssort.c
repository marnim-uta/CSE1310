/*                  ssort.c
 *
 *   Synopsis  - Declares and initializes an array. Displays
 *               the array both before and after sorting.
 *
 *   Objective - To illustrate the Selection Sort.
 */

/* Include Files */
#include <stdio.h>

/* Constant Definitions */
#define ARRAY_SIZE 10

/* Functions Declarations */
void print_array( int array[], int size );
/*   PRECONDITION:  size is the number of cells that should be
 *                  displayed on the terminal screen. array should
 *                  have at least size cells that are initialized.
 *   POSTCONDITION: No changes to the program values. The values in
 *                  array with indices 0 through size-1 have been
 *                  displayed on the terminal screen.
 */
void SelectionSort( int array[], int size );
/*   PRECONDITION:  array is the array to be sorted. size is the number
 *                  of elements in the array.
 *   POSTCONDITION: array is sorted from smallest to largest.
 */

int LocationOfLargest( int array[], int n );
/*   Finds the location (index) of the largest value in array between
 *   the indices 0 and n.
 *   PRECONDITION:  array is an array of type int with at least n
 *                  cells. The values of the array between 0 and n-1
 *                  are to be inspected to find the largest values.
 *   POSTCONDITION: Returns the index into array of the largest 
 *                  element in the array between indices 0 and n.
 */

void swap( int *a, int *b );
/*   PRECONDITION:  a and b are addresses of elements to be swapped.
 *   POSTCONDITION: The values of *a and *b have been swapped.
 */

int main()
{
     int myarray[ARRAY_SIZE] = {21, 45, 13, 5, 19, 2, 7, 11, 4, 15 };

     printf( "Before sorting: ");
     print_array( myarray, ARRAY_SIZE );

     SelectionSort( myarray, 10 );

     printf( "After sorting: ");
     print_array( myarray, ARRAY_SIZE );

     return 0;
}

/*******************************print_array()*******************/

void print_array( int array[], int size )
{
     int i;

     for ( i = 0; i < size; i++ )
          printf( "%d ", array[i] );
     printf( "\n");
}

/*******************************SelectionSort()*****************/

void SelectionSort( int array[], int size )
{
     int index, last = size-1;                       /* Note 1 */

     while ( last > 0 ) {
          index = LocationOfLargest( array, last );  /* Note 2 */
          swap( &array[last], &array[index] );       /* Note 3 */
          last--;
     }
}

/*******************************swap()**************************/

void swap( int *a, int *b )                          /* Note 4 */
{
     int tmp = *a;
     *a = *b;
     *b = tmp;
}

/*******************************LocationOfLargest()**************/

int LocationOfLargest( int array[], int n )
{
     int i, index = 0;                                /* Note 5 */

     for ( i = 0; i <= n; i++ )
          if ( array[index] < array[i] )              /* Note 5 */
               index = i;
     return index;
}

