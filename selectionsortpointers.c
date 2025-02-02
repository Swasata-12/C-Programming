#include <stdio.h>

/*Write a program for selection sort using pointers.*/

int main()
{
    int a[5], i, j, x;
    int *p;
    p = &a[0];
    printf("Enter the array elements one by one:\n");
    for (i = 0; i < 5; i = i + 1)
    {
        scanf("%d", p + i);
    }
    for (i = 0; i <= 5 - 2; i = i + 1)
    {
        for (j = i + 1; j <= 5 - 1; j = j + 1)
        {
            if (*(p + i) > *(p + j))
            {
                x = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = x;
            }
        }
    }
    printf("After sorting the array elements are as follows:\n");
    for (i = 0; i < 5; i = i + 1)
    {
        printf("%d\t", *(p + i));
    }

    return 0;
}
