// Write a C program to find the addition of arrays.
#include <stdio.h>
void main()
{
    int n = 3;
    int arr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for a%d:", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("The sum of all element in an array is %d", sum);
}