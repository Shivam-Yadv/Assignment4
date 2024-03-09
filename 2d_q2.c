// Write a C program to find the sum of all elements in a 2D array.
#include <stdio.h>
void main()
{
    int n=3,m=3;
    int arr[n][m], sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter value for a%d%d:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
    }
    printf("The sum of all element in 2d array is %d", sum);
}