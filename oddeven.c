#include <stdio.h>
int main()

// Write a program to check the number is Odd or Even

{
    int a, m;
    printf("Enter the number\n");
    scanf("%d", &a);
    m = a % 2;                     //m = remainder
    if (m == 0)
    {
        printf("The input number is even");
    }
    else
    {
        printf("The input number is odd");
    }
    return 0;
}
