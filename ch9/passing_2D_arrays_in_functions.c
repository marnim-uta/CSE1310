
#include <stdio.h>
int M = 3;
int N = 3;
 
void print(int arr[M][N])
{
    int i, j;
    for (i = 0; i < M; i++)
      for (j = 0; j < N; j++)
        printf("Array[%d][%d] = %d \n", i, j, arr[i][j]);
}
 
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    print(arr);
    printf("%p", arr);
    return 0;
}


