/*                      determ.c
 *
 *   Synopsis  - Accepts input of elements for a 2 x 2 matrix 
 *               and calculates its determinant.
 *   Objective - To show the basics of two-dimensional arrays.
 */

/* Include Files */
#include <stdio.h>

/* Constant Definitions */
#define ROWS         2
#define COLUMNS      2

int main( void )
{
     int i, j;
     float m[ROWS][COLUMNS], determinant;             /* Note 1 */

     printf( "Calculate the determinant of a 2x2 matrix.\n" );
     printf( "--------- --- ----------- -- - --- -------\n" );

     printf("\nEnter the matrix now.\n");
                                                      /* Note 2 */
     for ( i = 0; i < ROWS; i++ )
          for ( j = 0; j < COLUMNS; j++ ) {
               printf( "\tPosition %d,%d: ", i+1, j+1 );
               scanf( "%f", &m[i][j] );               /* Note 3 */
          }
                                                      /* Note 4 */
     determinant = m[0][0] * m[1][1] - m[0][1] * m[1][0];
     printf( " The determinant is %8.2f\n", determinant );
     return 0;
}