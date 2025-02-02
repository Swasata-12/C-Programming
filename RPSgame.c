#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Create a Rock, Paper, Scissors game.
Player 1: You
Player 2: Computer
Write a C program to allow user to play this game 3 times with computer. Log the scores of
computer and player. Display the name of the winner at the end.
You have to display name of the player during the game. Take users name as an input from the user.
*/

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char c1, char c2)
{
    // Returns 1 if c1>c2 and 0 otherwise.If c1==c2 it will return -1
    if (c1 == c2)
    {
        return -1;
    }

    if ((c1 == 'r') && (c2 == 's'))
    {
        return 1;
    }
    else if ((c2 == 'r') && (c1 == 's'))
    {
        return 0;
    }

    if ((c1 == 'p') && (c2 == 'r'))
    {
        return 1;
    }
    else if ((c2 == 'p') && (c1 == 'r'))
    {
        return 0;
    }

    if ((c1 == 's') && (c2 == 'p'))
    {
        return 1;
    }
    else if ((c2 == 's') && (c1 == 'p'))
    {
        return 0;
    }
}

int main()
{
    int playerScore = 0, compScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the Rock,Paper,Scissors.\n");
    for (int i = 0; i < 3; i++)
    {
        // Take player 1's input
        printf("Player 1's Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You chose %c\n\n", playerChar);

        // Generate computer's input
        printf("Computer's Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors\n");
        temp = generateRandomNumber(3) + 1;
        compChar = dict[temp - 1];
        printf("CPU chose %c\n", compChar);

        // Compare the scores
        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("CPU got it!\n\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("Its a draw\n\n");
        }
        else
        {
            playerScore += 1;
            printf("You got it!\n\n");
        }
        printf("You: %d\nCPU: %d\n", playerScore, compScore);
    }

    if (playerScore > compScore)
    {
        printf("You win the game\n");
    }
    else if (playerScore < compScore)
    {
        printf("CPU win the game\n");
    }
    else
    {
        printf("It's a draw\n");
    }

    return 0;
}
