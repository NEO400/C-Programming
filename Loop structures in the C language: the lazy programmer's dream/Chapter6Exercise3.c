#include <stdio.h> // Include the standard input/output library
/*
Write a program that asks for the students' exam scores (using integers 4 to 10) and calculates the average. The program must accept scores until entry is terminated by a negative integer. Finally, the program prints out the number of scores and the calculated average with two decimal places of precision.

Hint:
You can write your program using either the while or do...while statement.

Example output:
The program calculates the average of scores you enter.
End with a negative integer.
Enter score (4-10):7
Enter score (4-10):8
Enter score (4-10):9
Enter score (4-10):10
Enter score (4-10):4
Enter score (4-10):4
Enter score (4-10):5
Enter score (4-10):-1
You entered 7 scores.
Average score: 6.71
The output of the program must be exactly the same as the example output (the most strict comparison level)
*/

int main()
{ // Start of the main function

    int score, sum = 0, count = 0; // Declare variables to hold the score, sum, and count

    printf("The program calculates the average of scores you enter.\n");
    printf("End with a negative integer.\n");

    do
    {                                  // Start of the do-while loop to input the scores
        printf("Enter score (4-10):"); // Prompt the user to enter a score
        scanf("%d", &score);           // Read the score input from the user

        if (score >= 4 && score <= 10)
        {                 // Check if the score is within the valid range
            sum += score; // Add the score to the sum
            count++;      // Increment the count of scores
        }

    } while (score >= 0); // End the loop when a negative score is entered

    float average = (float)sum / count; // Calculate the average of the scores

    printf("You entered %d scores.\n", count);
    printf("Average score: %.2f\n", average); // Print the result with two decimal places

    return 0; // Return 0 to indicate successful program execution
} // End of the main function
