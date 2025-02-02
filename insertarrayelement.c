#include <stdio.h>

/*Write a c program to insert an element in an array at a specific position. */

int main()
{
    int a[50], n, pos, i, num;
    printf("Enter the size of the array you want\n");
    scanf("%d", &n);
    printf("Enter the array elements one by one\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element you want to insert in the array\n");
    scanf("%d", &num);
    printf("Enter the Position where you want to insert\n");
    scanf("%d", &pos);
    for (i = n - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = num;
    n++;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
