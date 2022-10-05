/*              epp8.c                */
	
/* Include Files */
#include <stdio.h>

int main( void )
{
     int  iochar,
     numdigits = 0,
     numlower = 0,
     numupper = 0,
     numwhites = 0;

     while ( ( iochar = getchar() ) != EOF ) {
          if ( ( iochar = ' ' ) || ( iochar = '\t' ) || ( iochar = '\n' ) ) {
               numwhites++;
               putchar( iochar );
          }
          else if ( ( '0' <= iochar ) && ( iochar <= '9' ) ) {
               numdigits++;
               putchar( iochar );
          }
          else if ( ( 'a' <=  iochar ) && ( iochar <= 'z' ) ) {
               numlower++;
               putchar( iochar - 32 );
          }
          else if ( ( 'A' <=  iochar ) && ( iochar <= 'Z' ) ) {
               numupper++;
               putchar( iochar );
          }
          else putchar( iochar );
     }

     printf( "%d white characters, %d digits, ", numwhites, numdigits );
     printf( "%d lowercase have been converted to", numlower );
     printf( "uppercase and %d uppercase.\n", numupper );
     return 0;
}
