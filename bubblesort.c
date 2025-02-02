#include <stdio.h>

/*Write a c programme for bubble sort using array.*/

int main()
{
    int i, j, x, a[5];
    printf("Enter the elements one by one:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5 - 1; i++)
    {
        for (j = 0; j < 5 - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                x = a[j];
                a[j] = a[j + 1];
                a[j + 1] = x;
            }
        }
    }
    printf("After sorting the array elements are as follows:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
