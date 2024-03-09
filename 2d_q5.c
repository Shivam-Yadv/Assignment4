// Write a C program to find the transpose of a 2D square array.
#include <stdio.h>
void main()
{
    int n = 3, m = 3;
    int arr[n][m];
    if (n == m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("Enter value for a%d%d:", i, j);
                scanf("%d", &arr[i][j]);
            }
        }
        printf("Two dimensional array.\n");
        printf("Before Transpose\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("\t%d", arr[i][j]);
            }
            printf("\n");
        }
        printf("After Transpose\n");
        for (int j = 0; j < m; j++)
        {
            for (int i = 0; i < n; i++)
            {
                printf("\t%d", arr[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("The order of an array is not belongs to square array.");
    }
}
