/*                            cast.c 
 *
 *   Synopsis  -Accepts input of three integers and displays 
 *              their average.
 *
 *   Objective - Illustrates one use of type casts.
 */

/* Include Files */
#include <stdio.h>

/* Function Prototypes */
void intro( void );
/* PRECONDITION:  none.
 *
 * POSTCONDITION: Displays an introduction to the program.
 */

void results( int num1, int num2, int num3 );
/* PRECONDITION:  num1, num2 and num3 can be any integers.
 *
 * POSTCONDITION: Calculates and displays the average of 
 *                its arguments. 
 */

int main( void )
{
     int first_num, second_num, third_num;

     intro();

     scanf( "%d", &first_num );
     scanf( "%d", &second_num );
     scanf( "%d", &third_num );

     results( first_num, second_num, third_num );
     return 0;
}

/******************************* intro() *************************/

void intro( void )
{
     printf( "This program  will calculate the " );
     printf( "average of three integers.\n" );
     printf( "Enter the integers now. " );
     printf( "Press Return after each one.\n" );
}

/*******************************results()***********************/

void results( int num1, int num2, int num3 )
{
     float average;                                  /* Note 1 */
     int sum;

     sum = num1 + num2 + num3;
     average = ( float ) sum / 3;                    /* Note 2 */

     printf( "The average of your data is %6.3f.\n", average );
}



