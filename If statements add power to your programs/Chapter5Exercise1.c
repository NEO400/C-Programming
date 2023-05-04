#include <stdio.h>

/*
Write a program that prompts the user for an integer and checks whether it is even or odd. If the number is even, print "Number 2 is even.", if it is odd, print "Number 1 is odd.".

Hint:
The program is almost the same as in the previous chapter. The new part is: If the remainder is zero, print "even". If the remainder is one, print "odd". Otherwise print an error message.


Example output:
Enter an integer: 1978
Number 1978 is even.
The verification of program output does not account for whitespace characters like "\n", "\t" and " "

*/

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
