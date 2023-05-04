#include <stdio.h> // Include the standard input/output library

/*Write a program that prompts the user for an integer n (n>0) and prints the factorial of the number on the screen. For example, the factorial of n is designated n!, which means the number calculated as follows: 1*2*3...*n

Example output:
Enter an integer: 3
The factorial of 3 is 6
The verification of program output does not account for whitespace characters like "\n", "\t" and " "
*/

int main()
{ // Start of the main function

    int n, factorial = 1; // Declare variables to hold the user input and the factorial value

    printf("Enter an integer: "); // Prompt the user to enter an integer
    scanf("%d", &n);              // Read the integer input from the user

    for (int i = 1; i <= n; i++)
    {                   // Start of the for loop to calculate the factorial
        factorial *= i; // Multiply the current value of factorial by i
    }                   // End of the for loop

    printf("The factorial of %d is %d\n", n, factorial); // Print the result

    return 0; // Return 0 to indicate successful program execution
} // End of the main function