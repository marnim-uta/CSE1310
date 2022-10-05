/*                         tabs.c
 *
 *   Synopsis  - A filter that processes its input by replacing 
 *               every tab character and ^A character with
 *               TABSTOP spaces.
 *
 *   Objective - Illustrates the use of a logical operator in a 
 *               structured program that contains a useful tool.
 */

/* Include Files */
#include <stdio.h>

/* Constant Definitions */
#define TAB      '\t'
#define ALTTAB     1        /* CTRL-A in ASCII */
#define TABSTOP    5
#define SPACE     ' '       /* the ASCII space character */

/* Function Prototypes */
void processtabs( int tabstop, int character );
/*   PRECONDITION:  tabstop is the number of characters to display.
 *                  character is the integer ASCII value of the 
 *                  character to use for replacing tabs and CTRL-As.
 *
 *   POSTCONDITION: tabstop occurrences of character are displayed on 
 *                  the terminal screen.
 */

int main( void )
{
     int iochar;

     /*  The following while loop processes each input
      *  character.  If the character is one of the two
      *  designated tab characters, the function processtabs()
      *  is called. Otherwise, the character is output with
      *  putchar().
      */

     while ( ( iochar = getchar() ) != EOF )
          if ( ( iochar == TAB ) || ( iochar == ALTTAB ) )
               processtabs( TABSTOP, SPACE );
          else
               putchar( iochar );
     return 0;
}

/*******************************processtabs()*******************/

void processtabs( int tabstop, int character )
{
     int colcount = 0;

     while ( colcount++ < tabstop )
          putchar( character );
}
