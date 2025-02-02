#include <stdio.h>
#include <string.h>

/*Write a function named slice which takes a string and slice it from index n to m.*/

void slice(char str[], int n, int m)
{
    int i, index = 0;
    for (i = n; i <= m; i++)
    {
        str[index] = str[i];
        index++;
    }
    str[index] = '\0';
    printf("After sliceing the string is:\n");
    puts(str);
}

int main()
{
    char str[100];
    int m, n;
    printf("Enter your string\n");
    gets(str);
    printf("Enter the starting point of sliceing\n");
    scanf("%d", &n);
    printf("Enter the ending point of sliceing\n");
    scanf("%d", &m);
    slice(str, n, m);
    return 0;
}
