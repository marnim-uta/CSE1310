/*                        array1.c
 *
 *   Synopsis  - Three arrays are declared and initialized. For
 *               each array, the value in the storage cell with
 *               index 3 is displayed.
 *
 *   Objective - Illustrates declaration, initialization, and
 *               accessing of elements in arrays.
 */

/* Include Files */
#include <stdio.h>

/* Constant Definitions */
#define NUMCHARS  10
#define NUMFLOATS  8

int main( void )
{
     char chararray[NUMCHARS];                                   /* Note 1 */
     int intarray[] = { 2, 1, 3, 5, 4, 8, 3, 7 };                /* Note 2 */

     double dblarray[NUMFLOATS] = { 1.2, 3.4, -2.3, 1.4, 4.5 };  /* Note 3 */

     int index;

                                                                 /* Note 4 */
     for ( index = 0; index < NUMCHARS; index++ )		
          chararray[index] = 127 - index;

                                                                 /* Note 5 */
     printf( "chararray occupies %d bytes.\n", sizeof( chararray ) );	
     printf( "intarray occupies %d bytes.\n", sizeof( intarray ) );	
     printf( "dblarray occupies %d bytes.\n", sizeof( dblarray ) );										
                                                                 /* Note 6 */
     printf( "The element in chararray with index 3 is '%c'.\n", chararray[3] );	
     printf( "The element in intarray with index 3 is %d.\n", intarray[3] );	
     printf( "The element in dblarray with index 3 is %5.2f.\n", dblarray[3] );	
     return 0;
}
