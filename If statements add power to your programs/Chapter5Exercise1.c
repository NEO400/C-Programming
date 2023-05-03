#include <stdio.h>

int main()
{
    // Declare a variable to store the input number
    int input_number;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");

    // Read the user's input and store it in the input_number variable
    scanf("%d", &input_number);

    // Check if the input number is even
    if (input_number % 2 == 0)
    {
        // If the input number is even, print a message indicating that it is even
        printf("Number %d is even.", input_number);
    }
    // Check if the input number is odd
    else if (input_number % 2 == 1)
    {
        // If the input number is odd, print a message indicating that it is odd
        printf("Number %d is odd.", input_number);
    }
    // If the input number is not an integer
    else
    {
        // Print an error message
        printf("Error: The input is not an integer.");
    }

    // Return 0 to indicate that the program has completed successfully
    return 0;
}
