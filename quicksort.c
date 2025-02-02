#include <stdio.h>

/*Write a C program to implement the Quick Sort technique.*/

// Function for swaping
void swap(int *a, int *b)
{
    int x = *a;
    *a = *b;
    *b = x;
}

// Function for partioning
int partition(int arr[], int lb, int ub)
{
    int pivot, start, end;
    pivot = arr[lb];
    start = lb;
    end = ub;
    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(&arr[start], &arr[end]);
        }
    }
    swap(&arr[lb], &arr[end]);
    return end;
}

// Function for Quick Sort
void quickSort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(arr, lb, ub);
        quickSort(arr, lb, loc - 1);
        quickSort(arr, loc + 1, ub);
    }
}

void printArray(int arr[], int n)
{
    printf("After sorting the sorted array is:\n");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int arr[10], n;
    printf("How many elements do you want to take?\n");
    scanf("%d", &n);
    printf("Enter the array elements one by one:\n");
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    // lb = arr[0];
    // ub = arr[n - 1];
    quickSort(arr, 0, n - 1);
    printArray(arr, n);
    // printf("After sorting the sorted array is:\n");
    // for (int i = 0; i <= n - 1; i++)
    // {
    //     printf("%d\t", arr[i]);
    // }

    return 0;
}
