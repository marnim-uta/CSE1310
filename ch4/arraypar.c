/*                    arraypar.c
 *
 *   Synopsis  - Accepts input of int values (an inventory) from 
 *               standard input, stores them in an array and 
 *               displays them on standard output.
 *
 *   Objective - To illustrate passing an array as a parameter to a 
 *               function.
 */

/* Include Files */
#include <stdio.h>

/* Constant Definitions */
#define MAX 20

/* Function Prototypes */
void print_inventory( int inventory[], int numitems);         /* Note 1 */
/*   PRECONDITION:  inventory is an array that has at least numitems 
 *                  cells.
 *
 *   POSTCONDITION: The first numitems elements in the array inventory
 *                  have been displayed on the terminal screen.
 */

int input_inventory( int inventory[], int maxnum );           /* Note 1 */
/*   PRECONDITION:  inventory is an array that has at least maxnum 
 *                  cells.
 *
 *   POSTCONDITION: Some cells of the array inventory have been 
 *                  populated with elements entered from the keyboard. 
 *                  The return value is the number of cells that were 
 *                  populated.
 */

int main( void )
{
     int inventory[MAX];                                     /* Note 2 */	
     int num_items;

     printf( "Please enter the number of items in stock." );
     printf( "  Enter -1 when you are done.\n" );

                                                             /* Note 3 */
     num_items = input_inventory( inventory, MAX );
                                                             /* Note 4 */
     print_inventory( inventory, num_items );
     return 0;
}

/*******************************input_inventory()****************/

int input_inventory( int inventory[], int maxnum )           /* Note 5 */
{
     int index = 0;

     scanf( "%d", &inventory[ index ] );
     while ( index < maxnum-1 && inventory[ index ] != -1 ) {
          index++;
          scanf( "%d", &inventory[index] );                  /* Note 6 */
     }
     if ( index == maxnum - 1 ) {
          printf( "No room for more items.\n" );
          return ( index+1 );
     }
     else return ( index );
}

/*******************************print_inventory()****************/

void print_inventory( int inventory[], int numitems )        /* Note 5 */
{
     int index;

     for ( index = 0; index < numitems; index++ ) {
          printf( "Item number %d:\t\t", index+1 );
          printf( "Number on hand  %5d\n", inventory[index] );
     }
}
