/*            epp4.c                 */
#include <stdio.h>
int main( void )
                {
int y,x = 0;
printf("Enter your integers now.\n");
printf("Enter one integer per line, press return.\n");
printf(">>> ");
while((scanf("%d",&y))!=EOF){
x=x+y; printf(">>> "); }printf("\nThe sum is %d.\n", x);
return 0;}
