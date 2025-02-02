#include <stdio.h>
#include <string.h>

/*Write a program to copy one string to another.*/

int main()
{
    char a[50], b[50];
    printf("Enter the string:\n");    // way no. 1
    gets(a);
    strcpy(b, a);
    puts(b);
    return 0;
}


/*int main()
{
    char a[50], b[50];
    int i, l;
    printf("Enter the string:\n");   //way no. 2
    gets(a);
    l = strlen(a);
    for (i = 0; a[i] != l; i++)
    {
        b[i] = a[i];
    }
    printf("%s", b);
    return 0;
}
*/

/*int main()
{
    char a[50], b[50];
    int i;
    printf("Enter the string:\n");      //way no. 3
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }
    b[i] = '\0';
    printf("%s", b);
    return 0;
}
*/
