#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Write a program to generate random number.*/

/*int main()
{
    srand(time(NULL));
    printf("The random number between 0 to 100 is %d\n", rand()%100);
    return 0;
}
*/

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{
    printf("The random number between 0 to 5 is %d\n", generateRandomNumber(5));
    return 0;
}
