

#include <stdio.h>
#include <stdlib.h>

int main () {

   char writefile[100] = {}; 
   char buffer[100] = {};
   FILE *WriteFH;

   printf("Enter a filename to write to : ");
   scanf("%s", writefile);

   WriteFH = fopen(writefile, "w+");

   printf("Enter a word to write to the file : ");
   scanf("%s", buffer);

   fprintf(WriteFH, "%s", buffer);

   fclose(WriteFH);

   return(0);
}