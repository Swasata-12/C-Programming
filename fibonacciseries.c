#include <stdio.h>

/*Write a program to print fibonacci series.
0,1,1,2,3,5,8,13,.....*/

int fibrecursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fibrecursive(n - 1) + fibrecursive(n - 2);
    }
}

int fibitretive(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; i = i + 1)
    {
        b = a + b;  //b=1
        a = b - a;  //a=1
    }
    return a;
}

int main()
{
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no %d using itretive approach is %d\n", number, fibitretive(number));
    printf("The value of fibonacci number at position no %d using recursive approach is %d\n", number, fibrecursive(number));
    return 0;
}
