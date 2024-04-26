#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp1, *fp2;
  int ch;

  // Open the input file
  fp1 = fopen("input.txt", "r+");
  fp2 = fopen("output.txt", "w+");
  if (fp1 == NULL || fp2 == NULL) {
    printf("Error opening file");
    exit(1);
  }

  // Read all characters from the file
  while ((ch = getc(fp1)) != EOF) {
    // Print the characters in another file
    putc(ch, fp2);
  }

  // Close the file
  fclose(fp1);
  fclose(fp2);

  return 0;
}
