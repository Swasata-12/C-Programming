#include <stdio.h>

/*Write a program for Selection Sort using for loop.*/

int main()
{
    int a[5], i, j, x;
    printf("Enter the array elements one by one:\n");
    for (i = 0; i < 5; i = i + 1)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 5 - 2; i = i + 1)
    {
        for (j = i + 1; j <= 5 - 1; j = j + 1)
        {
            if (a[i] > a[j])
            {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
    printf("After sorting the array is:\n");
    for (i = 0; i < 5; i = i + 1)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
