// Write a C program to reverse the elements of an array.
#include <stdio.h>
void main()
{
    int n, l, j;
    printf("How many Element You Store in Array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d Element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Before Reverse.\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {
        j = i + 1;
        l = arr[i];
        arr[i] = arr[n - j];
        arr[n - j] = l;
    }
    printf("\nAfter Reverse.\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}