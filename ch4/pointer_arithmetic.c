



#include <stdio.h>
int main() {

  int i;

  int x[6] = {2, 6, 5, 4, 3, 10};

  for(i = 0; i < 6; i++) {
      printf("Address at index %d : %ld \n", i, (x+i));
  }

  for(i = 0; i < 6; i++) {
      printf("Value at index %d : %d \n", i, *(x+i));
  }

  return 0;
}



