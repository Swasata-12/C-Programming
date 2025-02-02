#include <stdio.h>
#include <stdlib.h>

/* Employee Manager Exercise
ABC Pvt. Ltd. manages employee records of other companies. Employee Id can be of any
length and it can contain any character. For 3 employees you have to take "length of
employee id" as input in a length integer variable.
Then you have to take employee id as an input and display it on the screen.
Store the employee id in a character array which is allocated dynamically. You have to
create only one character array dynamically. */

int main()
{
    int n, i = 0;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your Employee Id\n", i+1);
        scanf("%d", &n);
        ptr = (char *)malloc((n + 1) * sizeof(char));
        printf("Enter your Employee Id\n");
        scanf("%s", ptr);
        printf("Your Employee Id is %s\n", ptr);
        free(ptr);
        i = i + 1;
    }

    return 0;
}
