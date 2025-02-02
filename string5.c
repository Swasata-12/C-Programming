#include <stdio.h>
#include <string.h>

/*Write a program to input a string and count how many vowels aand consonants 
are there.*/

int main()
{
    char a[50];
    int i, l, v = 0, c = 0;
    printf("Enter the string:\n");
    gets(a);
    l = strlen(a);
    for (i = 0; i < l; i++)
    {
        if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
        {
            if (a[i] == 'A' || a[i] == 'a' || a[i] == 'E' || a[i] == 'e' || a[i] == 'I' || a[i] == 'i' || a[i] == 'O' || a[i] == 'o' || a[i] == 'U' || a[i] == 'u')
            {
                v = v + 1;
            }
            else
            {
                c = c + 1;
            }
        }
    }
    printf("The total number of vowels is %d\n", v);
    printf("The total number of consonant is %d", c);
    return 0;
}
