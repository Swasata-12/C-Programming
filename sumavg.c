#include <stdio.h>

/* Write a programe to input 10 numbers and print sum average.*/

int main()
{
    int i, n, s;
    float av;
    s = 0;
    printf("Enter 10 number one by one: \n");
    for (i = 1; i <= 10; i = i + 1)
    {
        scanf("%d", &n);
        s = s + n;
    }
    av = s / 10.0;
    printf("The Average of the sum of 10 numbers is %f", av);

    return 0;
}
