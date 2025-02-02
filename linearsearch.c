#include <stdio.h>

/*Write a C program to implement the linear search.*/

int main()
{
    int arr[10], data, n, i;
    printf("How many array elements do you want to take?\n");
    scanf("%d", &n);
    printf("Enter the array elements one by one:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value you want to search:\n");
    scanf("%d", &data);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == data)
        {
            printf("Element found at the position %d", i + 1);
            break;
        }
    }
    if (i == n)
    {
        printf("Element not found");
    }

    return 0;
}
