

#include <stdio.h>
#include <stdlib.h>

int main () {

   char readfile[100] = {}; 
   char buffer[100] = {};
   FILE *readFH;

   printf("Enter a filename to read : ");
   scanf("%s", readfile);

   readFH = fopen(readfile, "r+");

   fscanf(readFH, "%s", buffer);

   printf("The word you read : %s", buffer);
   
   fclose(readFH);

   return(0);
}