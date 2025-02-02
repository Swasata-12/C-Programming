#include <stdio.h>
//#include<stdlib.h>

/*Write a program to input n number of elements in an array and add all the elements 
using malloc function.*/

int main()
{
    int n, *p, i, s = 0;
    printf("How many elements do you want?\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    printf("Enter the elements one by one:\n");
    for (i = 0; i < n; i = i + 1)
    {
        scanf("%d", p + i);
    }
    for (i = 0; i < n; i = i + 1)
    {
        s = s + *(p + i);
    }
    printf("The sum of all elements is %d", s);
    return 0;
}
