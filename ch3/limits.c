/*                                limits.c
 *
 *   Synopsis  - Displays values of some constants in limits.h.
 *
 *   Objective - To illustrate limits.h and the relative ranges
 *               of values that can be represented with the
 *               integral types.
 */

/* Include Files */
#include <stdio.h>
#include <limits.h>

int main( void )
{
     printf("Contents of limits.h\n\n");
     printf("Constant\t     Values\n");
     printf("--------\t     ------\n");

     printf("CHAR_BIT\t%11d\n", CHAR_BIT);
     printf("CHAR_MAX\t%11d\nCHAR_MIN\t%11d\n", CHAR_MAX,
                                                CHAR_MIN);
     printf("SCHAR_MAX\t%11d\nSCHAR_MIN\t%11d\n", SCHAR_MAX,
                                                  SCHAR_MIN);

     printf("INT_MAX \t%11d\nINT_MIN \t%11d\n", INT_MAX,
                                                INT_MIN);
     printf("LONG_MAX\t%11ld\nLONG_MIN\t%11ld\n", LONG_MAX,
                                                  LONG_MIN);
     printf("SHRT_MAX\t%11hd\nSHRT_MIN\t%11hd\n", SHRT_MAX,
                                                  SHRT_MIN);

     printf("UCHAR_MAX\t%11u\nUINT_MAX\t%11u\n", UCHAR_MAX,
                                                 UINT_MAX);
     printf("ULONG_MAX\t%11lu\nUSHRT_MAX\t%11u\n", ULONG_MAX,
                                                   USHRT_MAX);
     return 0;
}


