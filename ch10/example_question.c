#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char infilename[20] = {};
    char outfilename[20] = {};
    FILE *IFH = NULL;
    FILE *OFH = NULL;
    int value1, value2, value3, res;

    
    // Prompt for and store an input file name (infilename)
    printf("Enter the input file name : ");
    scanf("%s", infilename);

    // Use fopen() to open the input file with r+ and 
    // store returned file handle in IFH
    IFH = fopen(infilename, "r+");  //do not put single quote '' instead of double quote ""


    
    // if the file did not open – the file handle is NULL
    if (IFH == NULL)
    {
        printf("Input file did not open...exiting");
        exit(0);
    }
    
    // Use fscanf() to read a filename from the first line in the file as "outfilenmae" and 
    // use fscanf() again to read
    fscanf(IFH, "%s", outfilename);
    fscanf(IFH, "%d %d %d", &value1, &value2, &value3);
    
    // multiple values from the second line of the file
    res = value1 * value2 * value3;
    
    // Close the input file
    fclose(IFH);
    
    // Use fopen() to open the output file with w+ (output file name was read from the first line
    // of the input file (outfilename) and store returned file handle in OFH
    OFH = fopen(outfilename, "w+");

    // if the file did not open – the file handle is NULL
    if (OFH == NULL)
    {
    printf("Output file did not open...exiting");
    exit(0);
    }
    // Use fprintf() to write to the file – manipulate the values read from the input file and write
    // the result to the output file
    fprintf(OFH, "%d", res);

    // Close the output file
    fclose(OFH);
    return 0;
}