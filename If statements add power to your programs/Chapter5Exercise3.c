#include <stdio.h>

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
