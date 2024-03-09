// Write a C program to find the sum of all elements in an array.
#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("How many Element You Store in Array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d Element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("The Sum Of Element Of An Array Is %d.", sum);
}