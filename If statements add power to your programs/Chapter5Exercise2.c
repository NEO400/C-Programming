#include <stdio.h>

/* Write a program that first asks the user whether they drink coffee or tea and then how many cups a day. Finally, the program prints a statement in accordance with the following instructions: Coffee 0 to 2 cups: "You don't drink a lot of coffee, do you?", coffee 3-20 cups: "You drink a lot of coffee!", Tea 0-2 cups: "You do not drink a lot of tea.", tea 3-20 cups: "You drink a lot of tea!", Otherwise "An error occurred in the program!" The number of cups shall be processed as an integer variable and the drink as a character variable (c/t). You do not need to account for upper case letters.

Hint:
Spend enough time on program design before you start typing your program. You can get help for the exercise in the learning material for Chapter 4.


Example output:
Do you drink coffee or tea (c/t)?s
How many cups do you drink daily:55
An error occurred in the program!
The verification of program output does not account for whitespace characters like "\n", "\t" and " "
*/
    
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
