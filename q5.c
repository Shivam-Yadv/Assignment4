// Write a C program to copy elements from one array to another.
#include<stdio.h>
void main()
{
    int n;
    printf("How many Element You Store in Array: ");
    scanf("%d", &n);
    int arr[n];
    int arr_c[n];
    // Taking element from user.
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d Element: ", i + 1);
        scanf("%d", &arr[i]);

    }
    // Coping element from one array to another.
    printf("Coping Array....\n");
    for (int i = 0; i < n; i++)
    {
        arr_c[i]=arr[i];
    }
    // Printing new Array.
    printf("Printing New Array.\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr_c[i]);
    }
    
}