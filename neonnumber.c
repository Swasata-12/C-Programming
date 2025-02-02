#include <stdio.h>

/*Write a program to input a number. Check and display wheather it is a Neon number
or not.
[A number is said to be Neon if sum of the digits of the square of the number is
equal to the number itself.
input: 9
output: 9*9=81, 8+1=9 ]*/

int main()
{
    int n, s, m, j;
    s = 0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    j = n * n;
    while (j > 0)
    {
        m = j % 10;
        s = s + m;
        j = j / 10;
    }
    if (s == n)
    {
        printf("The number you have entered is a Neon Number");
    }
    else
    {
        printf("The number you have entered is not a Neon Number");
    }
    return 0;
}
