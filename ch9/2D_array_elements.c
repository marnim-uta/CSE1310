

#include <stdio.h>
int main()
{ // array declaration and initialization
  int my_array[5][3] = {
    {1, 3, 0},      //row 1
    {-1, 5, 9},      //row 2
  };

  // accessing and printing the elements
  for ( int i = 0; i < 2; i++ ) {        // variable i traverses the rows
      for ( int j = 0; j < 3; j++ ) {    // variable j traverses the columns
         printf("my_array [%d][%d] = %d\n", i,j, my_array[i][j] );
      }
   }
   return 0;
}