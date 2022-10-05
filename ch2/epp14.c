/*                 epp14.c                   */

/* Include Files (/
#include <stdio.h>

int main( void )
{
     int i;

          i = 1;
          printf ("counting\n;
          while (i < 100) {
               int j = 1;
               printf ("%4d", i);
               if !(i++ % 16)  {
                    printf ("\n");
                    j++
               else printf (" ");
               }
               printf("\nThe number of lines printed was %d.\n", j);
     return 0;
}
