#include <stdio.h> 
#include <stdlib.h> 
 
int main() 
{ 
 	char infilename[20] = {};  	
   char outfilename[20] = {}; 
    // a. (1 point) Declare a file handler named IFH and initialize it to NULL
   FILE *IFH = NULL;
    // b. (1 point) Declare another file handler named OFH and initialize it to NULL
   FILE *OFH = NULL;
   int value;

    // c. (1 point) Use fopen() to open a file named “input.txt” in “r+” mode and store returned file handle in IFH
   IFH = fopen("input.txt", "r+");

    // d. (1 point) Use fopen() to open a file named "output.txt" in "w+" mode and store the returned file handle in OFH 
   OFH = fopen("output.txt", "w+");

 	// e. (1 point) Check if the input file was opened correctly (the input file was opened in step c)
   if (IFH == NULL)
   { 
 	 	printf("Input file did not open...exiting");  	 	
      exit(0); 
 	} 
    // f. (1 point) Check if the output file was opened correctly(the output file was opened in step d)
   if (OFH == NULL)
   { 
 	 	printf("Output file did not open...exiting");  	 	
        exit(0); 
 	} 
 	 
 	// g. (1 point) Use fscanf() to read all the integer from the input file as "value"; Use the input file handle you created in a. 
  // h. (1 point) fprintf() to write the integers you read to the output file; Use the output file handle you created in b.
    
   while(fscanf(IFH, "%d", &value)!= EOF){
         fprintf(OFH, "%d ", value);
   }
 

 	// i. (1 point) Close the input file handler IFH.
   fclose(IFH);

    // j. (1 point) Close the output file handler OFH.
   fclose(OFH);
    // k. (Bonus : 2 points) Replace code blocks g and h in your code to read all the integers from the input file and write all the integers to the output file
    
    return 0; 
}  
