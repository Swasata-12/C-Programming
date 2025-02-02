#include <stdio.h>

/* Write a menru diven C program to implement Stack using Array.*/

int arr[5], count = -1;

// Insert element in the stack
void push()
{
    int x;
    printf("Enter data:\n");
    scanf("%d", &x);
    if (count >= 4)
    {
        printf("Overflow\n");
    }
    else
    {
        count++;
        arr[count] = x;
    }
}

// Pop element from the stack
void pop()
{
    int x;
    if (count == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        x = arr[count];
        count--;
    }
    printf("The Poped out element is %d\n", x);
}

// View the top element of the stack
void peek()
{
    int x;
    if (count == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        x = arr[count];
    }
    printf("The element at the Stacktop is %d\n", x);
}

// Display the elements of the stack
void display()
{
    printf("The Elements in the Stack are:\n");
    for (int i = count; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}
int main()
{
    int option;
    while (1)
    {
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n");
        printf("Enter your Option\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
    }

    return 0;
}
