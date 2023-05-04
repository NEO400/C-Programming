#include <stdio.h> // Include the standard input/output library

/*Write a program that prompts the user for an integer n (n>0) and prints the numbers 1,2,3...n on the screen one below the other. Write the program using the FOR statement.

Example output:
Enter an integer: 3
1
2
3
The output of the program must be exactly the same as the example output (the most strict comparison level)
*/

int main()
{ // Start of the main function

    int n; // Declare a variable to hold the user input

    printf("Enter an integer: "); // Prompt the user to enter an integer
    scanf("%d", &n);              // Read the integer input from the user

    for (int i = 1; i <= n; i++)
    {                      // Start of the for loop to print numbers from 1 to n
        printf("%d\n", i); // Print the current number i on a new line
    }                      // End of the for loop

    return 0; // Return 0 to indicate successful program execution
} // End of the main function