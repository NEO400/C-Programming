#include <stdio.h>

/*
Write a program that prompts the user for two integers and prints the sum, difference and product of the numbers on the screen.

Hint:
This exercise is an excellent opportunity for practicing how to print several variables in one printf() statement. The variables in the program are integer variables.

Example output:
Enter the first number:83
Enter the second number:78

83+78=161
83-78=5
83*78=6474
The verification of program output does not account for whitespace characters like "\n", "\t" and " "

*/

int main()
{
    int num1, num2, sum, diff, prod;

    // prompt user for two integers
    printf("Enter the first number: ");
    scanf("%d", &num1); // read in first integer from user
    printf("Enter the second number: ");
    scanf("%d", &num2); // read in second integer from user

    // calculate the sum, difference and product
    sum = num1 + num2;  // calculate sum of the two integers
    diff = num1 - num2; // calculate difference of the two integers
    prod = num1 * num2; // calculate product of the two integers

    // print the results
    printf("%d+%d=%d\n", num1, num2, sum);  // print sum
    printf("%d-%d=%d\n", num1, num2, diff); // print difference
    printf("%d*%d=%d\n", num1, num2, prod); // print product

    return 0; // indicate successful program completion
}
