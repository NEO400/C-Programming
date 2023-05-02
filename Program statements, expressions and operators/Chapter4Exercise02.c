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
    int num;                      // declare an integer variable named num
    printf("Enter an integer: "); // prompt the user to enter an integer
    scanf("%d", &num);            // read an integer from the user and store it in num
    if (num % 2 == 0)
    {                                // check if num is even
        printf("The number is 0\n"); // print 0 if num is even
    }
    else
    {                                // num is odd
        printf("The number is 1\n"); // print 1 if num is odd
    }
    return 0; // indicate successful program execution
}
