#include <stdio.h>

/* 
Write a simple calculator program that calculates the difference, sum or product of two numbers. First, the program asks which calculation to perform. After this, the program prompts for the numbers, performs the calculation and prints the result. The selection within the program has to be done using a switch() statement.

Example output:
1: subtraction
2: addition
3: multiplication
Select function:3
Enter the first number:45
Enter the second number:67
45*67=3015
The verification of program output does not account for whitespace characters like "\n", "\t" and " "
*/

int main()
{
    int function, num1, num2, result;

    // Prompt user for the function to perform
    printf("1: subtraction\n2: addition\n3: multiplication\nSelect function:");

    // Get the selected function from the user
    scanf("%d", &function);

    // Prompt user for the two numbers
    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);

    // Calculate and print the result based on the selected function
    switch (function)
    {
    case 1:
        result = num1 - num2;
        printf("%d-%d=%d", num1, num2, result);
        break;
    case 2:
        result = num1 + num2;
        printf("%d+%d=%d", num1, num2, result);
        break;
    case 3:
        result = num1 * num2;
        printf("%d*%d=%d", num1, num2, result);
        break;
    default:
        printf("Invalid function selected");
        break;
    }

    return 0;
}
