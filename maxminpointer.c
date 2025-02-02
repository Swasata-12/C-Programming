#include <stdio.h>

/*Write a program to take 10 numbers in an array and print maximum and 
minimum value using pointers.*/

int main()
{
    int a[10], max, min, i;
    int *p;
    p = &a[0];
    printf("Enter the array elements one by one:\n");
    for (i = 0; i < 10; i = i + 1)
    {
        scanf("%d", p + i);
    }
    max = *(p + 0);
    min = *(p + 0);
    for (i = 1; i < 10; i = i + 1)
    {
        if (max < *(p + i))
        {
            max = *(p + i);
        }
        if (min > *(p + i))
        {
            min = *(p + i);
        }
    }
    printf("The max array element is %d\n", max);
    printf("The min array element is %d", min);
    return 0;
}
