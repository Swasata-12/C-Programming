#include <stdio.h>

/* Write a programe to input 10 numbers and print the maximum and minimum number.*/

int main()
{
    int i, n, max, min;
    printf("Enter any 1 number from the 10 numbers:\n");
    scanf("%d", &n);
    max = n;
    min = n;
    printf("Enter the rest 9 numbers one by one:\n");
    for (i = 1; i <= 9; i = i + 1)
    {
        scanf("%d", &n);
        if (n > max)
        {
            max = n;
        }
        if (n < min)
        {
            min = n;
        }
    }
    printf("The Maximum number is %d\n", max);
    printf("The Minimum number is %d\n", min);
    return 0;
}
