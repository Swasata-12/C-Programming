#include <stdio.h>

/*Write a C program to implement binary search using recursion.*/

int binarySearch(int arr[], int l, int r, int val)
{
    int mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (val == arr[mid])
        {
            return mid;
        }
        else if (val > arr[mid])
        {
            return binarySearch(arr, mid + 1, r, val);
        }
        else
        {
            return binarySearch(arr, l, mid - 1, val);
        }
    }
    return -1;
}

int main()
{
    int arr[10], data, n, result;
    printf("How many array elements do you want to take?\n");
    scanf("%d", &n);
    printf("Enter the array elements one by one in sorted order:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value you want to search:\n");
    scanf("%d", &data);
    result = binarySearch(arr, 0, n - 1, data);
    if (result == -1)
    {
        printf("Element not found in the array");
    }
    else
    {
        printf("Element found at the position %d", result + 1);
    }

    return 0;
}
