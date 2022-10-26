/*               ptrex.c
 *
 *   Synopsis  - Illustrates different ways of addressing
 *               pointers and arrays. Outputs the values 
 *               of expressions relevant to the arrays.
 *
 *   Objective - To provide practice with pointer and
 *               array expressions.
 */

/* Include Files */
#include <stdio.h>

int main( void )
{
    static int intarray[5] = {  32, -123, 4, 2, -24     };
    static char chararray[5] = { 'e', 'f', 'g', 'h', 'i' };

    int  *int_ptr  = intarray;
    char *char_ptr = chararray,
         ch = 'a';

                                                          /* ANSWERS */

    printf( "%d\n", int_ptr );                     /* ______________ */

    printf( "%d\n", char_ptr );                    /* ______________ */

    printf( "%d\n", &int_ptr );                    /* ______________ */

    printf( "%d\n", *int_ptr );                    /* ______________ */

    printf( "%d\n", intarray[4] );                 /* ______________ */

    printf( "%d\n", chararray[4] );                /* ______________ */

    printf( "%d\n", intarray + 1 );                /* ______________ */

    printf( "%d\n", chararray + 1 );               /* ______________ */

    printf( "%d\n", int_ptr + 1 );                 /* ______________ */

    printf( "%d\n", char_ptr + 1 );                /* ______________ */

    printf( "%d\n", *int_ptr + 1 );                /* ______________ */

    printf( "%d\n", *char_ptr + 1 );               /* ______________ */

    printf( "%d\n", *(int_ptr + 1) );              /* ______________ */

    printf( "%d\n", *(char_ptr + 1) );             /* ______________ */

    printf( "%d\n", &intarray[0] );                /* ______________ */

    printf( "%d\n", ++*int_ptr );                  /* ______________ */

    printf( "%d\n", *int_ptr++ );                  /* ______________ */

    printf( "%d\n", ++(*int_ptr) );                /* ______________ */

    printf( "%d\n", ++*intarray );                 /* ______________ */

    printf( "%d\n", *&ch );                        /* ______________ */

    printf( "%d\n", 3**int_ptr );                  /* ______________ */

    return 0;
}
