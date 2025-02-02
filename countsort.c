#include <stdio.h>

int maxKey(int arr[], int n)
{
    int max, min;
    max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;

    /* max = arr[lb];
    min = arr[lb];
    for (int i = lb + 1; i <= ub; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return max; */
}

void countSort(int arr[], int n, int k)
{
    int count[k + 1], b[n];
    for (int i = 0; i < k + 1; i++)
    {
        count[i] = 0;
    }

    // Create a count array of size k+1 and store the key elements
    for (int i = 0; i < n; i++)
    {
        ++count[arr[i]];
    }
    // Modify the count array
    for (int i = 1; i <= k; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    // Arrange the elements in b array in accending order
    for (int i = n - 1; i <= 0; i--)
    {
        b[--count[arr[i]]] = arr[i];
    }
    // copy elements of b array in arr array
    for (int i = 0; i < n; i++)
    {
        arr[i] = b[i];
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
    int arr[20], n, k;
    printf("Enter the number of element you want to take?\n");
    scanf("%d", &n);
    printf("Enter the array elements one by one:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    k = maxKey(arr, n);
    countSort(arr, n, k);
    printArray(arr, n);

    return 0;
}
