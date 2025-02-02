#include <stdio.h>

/*Write a program for Selection sort using malloc function.*/

int main()
{
    int i, j, x, n, *p;
    printf("How many elements do you want to take?\n");
    scanf("%d", &n);
    p = (int *)malloc(n * 2);
    printf("Enter the elements one by one:\n");
    for (i = 0; i < n; i = i + 1)
    {
        scanf("%d", p + i);
    }
    for (i = 0; i <= n - 2; i = i + 1)
    {
        for (j = i + 1; j <= n - 1; j = j + 1)
        {
            if (*(p + i) > *(p + j))
            {
                x = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = x;
            }
        }
    }
    printf("\nAfter sorting the array elements are as follows:\n");
    for (i = 0; i < n; i = i + 1)
    {
        printf("%d\t", *(p + i));
    }

    return 0;
}
