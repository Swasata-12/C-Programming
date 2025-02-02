#include <stdio.h>
#include <stdlib.h>

/*Write a C program for addition of two numbers using function pointers.*/

int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    int (*fPtr)(int, int);                              //declaring a function pointer
    printf("Enter two numbers for the Summation:\n");
    scanf("%d %d", &a, &b);
    fPtr = &sum;
    int d = (*fPtr)(a, b);
    printf("The result of the operation is %d\n", d);

    return 0;
}
