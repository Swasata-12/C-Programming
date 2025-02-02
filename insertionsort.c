#include <stdio.h>

/*Write a c programme to impliment Insertion sort using array.*/

int main()
{
    int temp, a[5], i, j;
    printf("Enter the array elements one by one:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < 5; i++)
    {
        temp = a[i];
        for (j = i - 1; j >= 0 && a[j] > temp; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = temp;
    }
    printf("After sorting the array elements are as follows:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
