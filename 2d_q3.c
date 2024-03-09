// Write a C program to find the largest element in a 2D array.
#include <stdio.h>
void main()
{
    int n=2,m=4;
    int arr[n][m],l;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter value for a%d%d:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    l=arr[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(l<arr[i][j]){
                l=arr[i][j];
            }
        }
    }
    printf("The largest element in an array is %d\n",l);
}