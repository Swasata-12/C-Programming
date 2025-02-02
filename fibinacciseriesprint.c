#include <stdio.h>

/*Write a program to print the fibannaci series.*/

void fibitretive(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; i = i + 1)
    {
        b = a + b; // b=1
        a = b - a; // a=1
        printf("%d\t", a);
    }
}

int main()
{
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d", &number);
    fibitretive(number);
    return 0;
}
