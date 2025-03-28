#include <stdio.h>

/*Write a program to get the factorial of a given number using recursion.*/

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}

int main()
{
    int number;
    printf("Enter the number you want the factorial of:\n");
    scanf("%d", &number);
    printf("The factorial of %d is %d\n", number, factorial(number));
    return 0;
}
