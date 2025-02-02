#include <stdio.h>
#include <string.h>

/*Write a program to take a string and count how many vowels are there.*/

int main()
{
    char a[50];
    int i, l, c = 0;
    printf("Enter the string:\n");
    gets(a);
    l = strlen(a);
    for (i = 0; i < l; i++)
    {
        if (a[i] == 'A' || a[i] == 'a' || a[i] == 'E' || a[i] == 'e' || a[i] == 'I' || a[i] == 'i' || a[i] == 'O' || a[i] == 'o' || a[i] == 'U' || a[i] == 'u')
        {
            c = c + 1;
        }
    }
    printf("The total number of vowels in the given string is %d", c);

    return 0;
}
