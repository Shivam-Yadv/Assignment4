// Write a C program to find the largest element in an array.
#include <stdio.h>
void main()
{
    int n, l;
    printf("How many Element You Store in Array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d Element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    l=arr[0];
    for (int i = 1; i < n; i++)
    {
            if (l < arr[i])
            {
                l=arr[i];
            }
    }
    printf("The Largest Element in An Array Is %d.", l);
}