#include <stdio.h>

/*Write a c programme for implementing Bubble sort using malloc function.*/

int main()
{
    int i, j, x, n, *p;
    printf("How many elements do you want to take?\n");
    scanf("%d", &n);
    p = (int *)malloc(n * 2);
    printf("Enter trhe elements one by one:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                x = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = x;
            }
        }
    }
    printf("\nAfter Sorting the array elements are as follows:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(p + i));
    }

    return 0;
}
