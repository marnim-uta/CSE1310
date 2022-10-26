/*                       linsearch.c
 *
 *   Synopsis  - The program initializes an array at the time of
 *               declaration and prompts the user to enter a value
 *               to find in the array. The function lin_search() 
 *               looks for that value. The search results are
 *               displayed. 
 * 
 *   Objective - To see one method of searching an array.
 */

/* Header files */
#include <stdio.h>

/* Constant Definitions */
#define ARRAY_SIZE 11

/* Function Prototypes */
int lin_search( int target, int array[], int n );
/*   PRECONDITION:  target is the value to search for. array is the
 *                  array to search and n is the number of elements in
 *                  the array.
 *   POSTCONDITION: If target is in array, the function returns the
 *                  first index in array where target was found. If
 *                  target is not in the array, the value -1 is
 *                  returned.
 */

int main()
{
     int intvar, index;
     int intarray[ARRAY_SIZE] = {3, 45, -21, 67, 23, 89, 13, 37, 57, 77, 92 };
     printf( "What number do you want to search for? " );
     scanf ( "%d", &intvar );

     index = lin_search( intvar, intarray, 11 );
     if ( index == -1 )
          printf( "%d is not in the array.\n", intvar );
     else
          printf( "%d is in the %dth cell of the array.\n", intvar, index + 1 );
     return 0;
}

/*******************************lin_search()********************/

int lin_search( int target, int array[], int n )
{
     int i;

     for ( i = 0; i < n; i++ ) {
          if ( array[i] ==  target )
          return i;                                    /* Note 1 */
     }
     return -1;	                                       /* Note 2 */
}
