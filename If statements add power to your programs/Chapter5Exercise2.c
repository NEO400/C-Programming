#include <stdio.h>

int main()
{
    char drink; // declare variable to store the user's drink choice
    int cups;   // declare variable to store the number of cups consumed

    // prompt the user for their drink choice and store it in the variable
    printf("Do you drink coffee or tea (c/t)? ");
    scanf("%c", &drink);

    // prompt the user for the number of cups consumed and store it in the variable
    printf("How many cups do you drink daily: ");
    scanf("%d", &cups);

    // check the user's drink choice and the number of cups consumed
    if (drink == 'c')
    { // if the user drinks coffee
        if (cups <= 2)
        { // if they consume 0 to 2 cups
            printf("You don't drink a lot of coffee, do you?");
        }
        else if (cups >= 3 && cups <= 20)
        { // if they consume 3 to 20 cups
            printf("You drink a lot of coffee!");
        }
        else
        { // if they consume more than 20 cups or a negative number of cups
            printf("An error occurred in the program!");
        }
    }
    else if (drink == 't')
    { // if the user drinks tea
        if (cups <= 2)
        { // if they consume 0 to 2 cups
            printf("You do not drink a lot of tea.");
        }
        else if (cups >= 3 && cups <= 20)
        { // if they consume 3 to 20 cups
            printf("You drink a lot of tea!");
        }
        else
        { // if they consume more than 20 cups or a negative number of cups
            printf("An error occurred in the program!");
        }
    }
    else
    { // if the user enters an invalid drink choice
        printf("An error occurred in the program!");
    }

    return 0;
}
