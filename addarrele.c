#include <stdio.h>

/*Write a program to add all values of an array.*/

int main()
{
    int x[5], i, s;
    s = 0;
    printf("Enter the array elements one by one:\n");
    for (i = 0; i < 5; i = i + 1)
    {
        scanf("%d", &x[i]);
    }
    for (i = 0; i < 5; i = i + 1)
    {
        s = s + x[i];
    }
    printf("The sum of the all array element is %d", s);
    return 0;
}
