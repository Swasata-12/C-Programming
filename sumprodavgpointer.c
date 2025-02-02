#include <stdio.h>

/*Write a program to form a function to calculate the sum, product and average of 2 numbers. Print
that sum, product and average in the main function.*/

void calculate(int a, int b, int *sum, int *prod, int *avg)
{
    *sum = a + b;
    *prod = a * b;              //here we use pointer in function because we can not return 3 values in the main function
    *avg = (a + b) / 2;         //by using the call by reference we get 3 values 
}

int main()
{
    int a, b, sum, prod, avg;
    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b:\n");
    scanf("%d", &b);
    calculate(a, b, &sum, &prod, &avg);
    printf("sum=%d, prod=%d, avg=%d\n", sum, prod, avg);
    return 0;
}
