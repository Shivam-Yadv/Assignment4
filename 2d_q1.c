// Write a C program to print a 2D array in matrix format.
#include <stdio.h>
void main()
{
    int n=3,m=2;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter value for a%d%d:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Two dimensional array.\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }
}
