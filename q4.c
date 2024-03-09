// Write a C program to check if an array contains a specific element.
#include <stdio.h>
int main()
{
    int n, l;
    int arr[] = {5, 10, 15, 21, 23};
    l = sizeof arr / sizeof arr[0];
    printf("Enter Element You Want To Search in An Array: ");
    scanf("%d", &n);
    for (int i = 0; i < l; i++)
    {
        if (arr[i] == n)
        {
            printf("%d is present in an array.", n);
            return 0;
        }
    }
    printf("%d is not present in an array.", n);
    return 0;
}