#include <stdio.h>

/*Write a C program for implimenting Merge Sort using array.*/

// Function for merging the sub arrays
void merge(int arr[], int lb, int mid, int ub)
{
    int i, j, k, b[10];
    i = lb;
    j = mid + 1;
    k = lb;
    while (i <= mid && j <= ub)
    {
        if (arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++, k++;
        }
        else
        {
            b[k] = arr[j];
            j++, k++;
        }
    }
    if (i > mid)
    {
        while (j <= ub)
        {
            b[k] = arr[j];
            j++, k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = arr[i];
            i++, k++;
        }
    }
    // Coping elements to the main array
    for (int k = lb; k <= ub; k++)
    {
        arr[k] = b[k];
    }
}

/*Function for Merge Sort Technique*/
void mergeSort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

// Function for printing the array
void printArray(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int arr[10], n;
    printf("Enter the number of elements you want to take?\n");
    scanf("%d", &n);
    printf("Enter the array elements one by one:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before sorting the array elements are:\n");
    printArray(arr, n);
    mergeSort(arr, 0, n - 1);
    printf("\nAfter sorting the array elements are:\n");
    printArray(arr, n);

    return 0;
}
