/*                    stocks.c
 *
 *   Synopsis  - Accepts the input of six stock prices into a 
 *               two-dimensional array. 
 *
 *   Objective - Illustrates the declaration, initialization, and
 *               accessing of elements of two-dimensional arrays.
 */

/* Include Files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Constant Definitions */
#define ROWS          2
#define COLUMNS       6
#define LGTH         20

/* Function Prototypes */
void input_prices( void );
/* PRECONDITION:  none.
 * POSTCONDITION: Accepts input of 6 quantities of type float to be 
 *                stored in the second "row" of the global array 
 *                stock_prices. The combination of library functions 
 *                fgets() and atof() is used to perform the input of 
 *                the float values.
 */

void process( void );
/* PRECONDITION:  none.
 * POSTCONDITION: This is a stub function.
 */

void output_results( void );
/* PRECONDITION:  none.
 * POSTCONDITION: This is a stub function.
 */

/* Global Variables */                                    /* Note 1 */
double stock_prices[ROWS][COLUMNS] = { { 12.5, 76.125, 34.875,
                                         112,  43.25,  88      } };
int main( void )
{
     printf( "STOCK INFORMATION PROGRAM\n");
     printf( "-------------------------\n");
     printf( "This program will give information about the " );
     printf( "prices of \nsix specific stocks. You are " );
     printf( "to enter the current prices of\nthe stocks. " );
     printf( "A comparison will be made with the buying " );
     printf( "prices\nof the stocks.\n\n" );

     input_prices();
     process();
     output_results();
     return 0;
}

/******************************* input_prices() **********************/
void input_prices( void )
{
     int i;
     char instring[LGTH];

     printf( "Please enter the current stock prices now.\n" );
     printf( "Stock\tBuying price\tCurrent price\n" );
     printf( "-----\t------------\t-------------\n" );
     for ( i = 0; i < COLUMNS; i++ ) {
                                                           /* Note 2 */
          printf( "#%d: \t%6.2f   \t  ", i+1, stock_prices[0][i] );
          fgets( instring, LGTH, stdin );
                                                           /* Note 3 */
          stock_prices[1][i] = atof( instring );
     }
     printf( "Thank you!\n" );
}

/******************************* process() ***************************/
void process( void )
{
     printf( "process() stub entered.\n" );
}

/******************************* output_results() ********************/
void output_results( void )
{
     printf( "output_results() stub entered.\n" );
}
