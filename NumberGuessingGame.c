#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts;
    int bestScore = 1000;   // very large number
    char playAgain;

    srand(time(0));

    do
    {
        number = rand() % 100 + 1;
        attempts = 0;

        printf("\nGuess the number between 1 and 100\n");

        do
        {
            printf("Enter your guess: ");
            scanf("%d", &guess);

            attempts++;

            if (guess > number)
            {
                printf("Too High!\n");
            }
            else if (guess < number)
            {
                printf("Too Low!\n");
            }
            else
            {
                printf("Correct! You guessed it in %d attempts\n", attempts);
            }

        } while (guess != number);

        /* Best Score Logic */
        if (attempts < bestScore)
        {
            bestScore = attempts;
            printf("New Best Score: %d attempts\n", bestScore);
        }
        else
        {
            printf("Best Score so far: %d attempts\n", bestScore);
        }

        printf("Play Again? (y/n): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing!\n");

    return 0;
}