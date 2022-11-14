/*                    threedim.c
 *
 *   Synopsis  - Displays the contents of a three-dimensional 
 *               array as a pair of two-dimensional arrays.
 *
 *   Objective - Illustrates declaration, initialization, and
 *               element access in a three-dimensional array.
 */

/* Include Files */
#include <stdio.h>

/* Constant Definitions */
#define DIM1    2
#define DIM2    3
#define DIM3    4

int main( void )
{
                                                            /* Note 1 */
     double three_d[DIM1][DIM2][DIM3] = {                   /* Note 2 */
                                          {  { 0.0, 0.1, 0.2, 0.3 },
                                             { 1.0, 1.1, 1.2, 1.3 },
                                             { 2.0, 2.1, 2.2, 2.3 }
                                          },
                                          {  { 10.0, 10.1, 10.2, 10.3 },
                                             { 11.0, 11.1, 11.2, 11.3 },
                                             { 12.0, 12.1, 12.2, 12.3 }
                                          }
                                        };
     int i, j, k;

     for ( i = 0; i < DIM1; i++ ) {
          for ( j = 0; j < DIM2; j++ ) {
               for ( k = 0; k < DIM3; k++ ) {               /* Note 3 */
                    printf( "%5.1f\t", three_d[i][j][k] );
               }
               printf( "\n" );
          }
          printf( "\n\n" );
     }
     return 0;
}
