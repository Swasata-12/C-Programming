#include <stdio.h>

/* Write a programe to print the multiplication table of a given number.*/

int main()
{
    int i, n, s;
    printf("Enter the number of which you want multiplication table: \n");
    scanf("%d", &n);
    printf("The multiplication table of %d is as follows: \n", n);
    for (i = 1; i <= 10; i = i + 1)
    {
        s = n * i;
        printf("%dX%d=%d\n", n, i, s);
    }

    return 0;
}
