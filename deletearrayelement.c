#include <stdio.h>

/*Write a c program to delete an element in an array at a specific position. */

int main()
{
    int a[50], n, pos, i;
    printf("Enter the size of the array you want\n");
    scanf("%d", &n);
    printf("Enter the array elements one by one\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // printf("Enter the element you want to insert in the array\n");
    // scanf("%d", &num);
    printf("Enter the Position from where you want to delete\n");
    scanf("%d", &pos);
    for (i = pos - 1; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
