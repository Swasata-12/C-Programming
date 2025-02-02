#include <stdio.h>

/*Write a program to take 10 numbers in an array and print how many elements are odd and
how many are even.*/

int main()
{
    int a[10], i, m, odd, ev;
    odd = 0;
    ev = 0;
    printf("Enter the array elements one by one:\n");
    for (i = 0; i < 10; i = i + 1)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i = i + 1)
    {
        m = a[i] % 2;
        if (m == 0)
        {
            ev = ev + 1;
        }
        else
        {
            odd = odd + 1;
        }
    }
    printf("Total number of odd element is %d\n", odd);
    printf("Total number of even element is %d", ev);
    return 0;
}
