/*                   structur.c 
 *
 *   Synopsis  - Displays a message on the terminal screen.
 *
 *   Objective - Demonstrates structuring the program by using
 *               a separate function to do the output.
 */
#include <stdio.h>

void print_title( void );                         /* Note 1 */
                                                  /* Note 2 */
/* PRECONDITION:  None
 *
 * POSTCONDITION: The title of this text will have been
 *                displayed on the terminal screen
 */

int main(void)                                    /* Note 3 */
{
     print_title();                               /* Note 4 */
     return 0;
}

/*******************************print_title()*******************/

void print_title( void )                         /* Note 5 */
{
     printf("C by Discovery\n");                 /* Note 6 */
}