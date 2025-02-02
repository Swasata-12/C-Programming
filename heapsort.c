#include <stdio.h>

/*Write a C program for implementing Heap Sort using array.*/

// Function for swaping values
void swap(int *a, int *b)
{
    int x = *a;
    *a = *b;
    *b = x;
}

// Function for building max heap
void maxHeapify(int arr[], int n, int i)
{
    int largest = i;
    int left = (2 * i);
    int right = (2 * i) + 1;
    while (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    while (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

// Function for Heap Sort
void heapSort(int arr[], int n)
{
    // Build max heap
    for (int i = n / 2; i >= 1; i--)
    {
        maxHeapify(arr, n, i);
    }

    // Deleting element from the root position
    for (int i = n; i >= 1; i--)
    {
        swap(&arr[1], &arr[i]);
        maxHeapify(arr, i, 1);
    }
}

// Function to print the array
void printArray(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
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
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before Sorting the array elements are:\n");
    printArray(arr, n);
    heapSort(arr, n);
    printf("\nAfter Sorting the array elements are:\n");
    printArray(arr, n);

    return 0;
}
