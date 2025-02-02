#include <stdio.h>

/*Write a program to take 10 numbers in an array from the user and print the maximum 
and minimum value.*/

int main()
{
    int a[10], max, min, i;
    printf("Enter the array elements one by one:\n");
    for (i = 0; i < 10; i = i + 1)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for (i = 1; i < 10; i = i + 1)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("The max array element is %d\n", max);
    printf("The min array element is %d", min);
    return 0;
}
