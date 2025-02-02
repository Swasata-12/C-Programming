#include <stdio.h>

/*Write a program to print the value if i from its pointer to pointer.*/

int main()
{
    int i = 5, *ptr, **pptr;
    ptr = &i;
    pptr = &ptr;
    printf("%d\n", **pptr);
    printf("%d\n", *ptr);
    return 0;
}
