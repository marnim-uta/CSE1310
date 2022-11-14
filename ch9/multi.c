/*                   multi.c
 *
 *   Synopsis  - Displays a multiplication table for positive
 *               integer products between 0*0 and 3*4.
 *
 *   Objective - Demonstrates multidimensional arrays and
 *               the ?: construct.
 */

/* Include Files */
#include <stdio.h>

/* Constant Definitions */
#define ROWS        4
#define COLUMNS     5

/* Function Prototypes */
void printab( int rows, int columns, int array[][5] );     /* Note 1 */
/* PRECONDITION:  rows and columns contain the numbers of rows and 
 *                columns of array.
 * POSTCONDITION: Displays the contents of an array of type int.
 */

int main( void )
{
     int multiarray[ROWS][COLUMNS],                       /* Note 2 */
         row, column;

     for ( row = 0; row < ROWS; row++ )                   /* Note 3 */
          for ( column = 0; column < COLUMNS; column++ )
               multiarray[row][column] = row * column;

     printab( ROWS, COLUMNS, multiarray );
     return 0;
}

/******************************* printab() **************************/
                                                          /* Note 4 */
void printab( int rows, int columns, int array[][COLUMNS] )
{
     int i = 0, j = 0;

     while ( i < rows ) {
          printf( "%d%c", array[i][j],                    /* Note 5 */
                              ( j == columns-1 ) ? '\n' : '\t' );
                                                          /* Note 5 */
          ( j == columns - 1 ) ? i++,j=0 : j++;
     }
}
