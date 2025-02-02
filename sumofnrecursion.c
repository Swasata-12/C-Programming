#include <stdio.h>

/*Write a program to calculate the sum of n numbers using recursion.*/

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter the number to which you want the summation:\n");
    scanf("%d", &n);
    printf("The sum of %d numbers is %d\n", n, sum(n));
    return 0;
}
