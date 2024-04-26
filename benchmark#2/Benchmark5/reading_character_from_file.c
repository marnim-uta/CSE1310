#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp;
  int ch; 

  // Open the input file
  fp = fopen("input.txt", "r+");

  if (fp == NULL) {
    perror("Error opening file");
    exit(1);
  }

  // read every character until you reach end of file
  while((ch = getc(fp))!= EOF){
    // print the character in terminal using normal printf 
    printf("the character is = %c \n", ch);
  }

  // Close the file pointer
  fclose(fp);
  return 0;
}