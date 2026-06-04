#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// // Function for Comparison between random number and guessed_number
void compare(int, int);
void compare(int random_number, int guessed_number)
{
    if (guessed_number > random_number)
    {
        printf("Guessed number is greater than actual number\n");
    }
    else if (guessed_number < random_number)
    {
        printf("Guessed number is smaller than actual number\n");
    }
    else if (guessed_number == random_number)
    {
        printf("You guessed correct number\n");
    }
    else
        printf("You type invalid number! please enter integer from 1 to 100\n");
}

int main()
{
    int random_number, guessed_number, attempt; 
    // Seed the random number generator
    srand(time(NULL)); 

    // Generate random number between 1 and 100
    random_number = (rand() % 100) + 1;

    printf("\nGuess the number between 1 to 100:");
    scanf("%d", &guessed_number);

    printf("Your guessed number is : %d\n", guessed_number);
    compare(random_number, guessed_number);

    while (guessed_number != random_number)
    {

        printf("\nGuess the number again between 1 to 100:");
        scanf("%d", &guessed_number);

        printf("\nYour guessed number is : %d\n", guessed_number);
        compare(random_number, guessed_number);
    };

    return 0;
}
