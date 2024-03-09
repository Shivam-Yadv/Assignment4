// Write a C program to find the multiplication of arrays.
#include <stdio.h>
void main()
{
    int n = 4;
    int arr[n], m = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for a%d:", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The Multiplication of %d is\n", arr[i]);
        for (int j = 1; j <= 10; j++)
        {
            m = arr[i] * j;
            printf("%d * %d = %d\n", arr[i], j, m);
        }
        printf("\n");
    }
}