#include <stdio.h>

/* Write a program that first asks the user for an integer and after that, a floating-point number.
Finally, the program prints both numbers on the screen. The floating-point number shall be printed with two decimal places of precision.

Example output:
Enter an integer: 14
Enter a decimal number:3.123

You entered the integer: 14
You entered the decimal number, rounded to two decimal places: 3.12
The verification of program output does not account for whitespace characters like "\n", "\t" and " "
*/

int main()
{
    int integer;   // declare integer variable to store integer input from user
    float decimal; // declare decimal variable to store floating-point input from user

    printf("Enter an integer: "); // prompt user to enter an integer
    scanf("%d", &integer);        // read integer input from user and store in integer variable

    printf("Enter a decimal number: "); // prompt user to enter a floating-point number
    scanf("%f", &decimal);              // read floating-point input from user and store in decimal variable

    printf("You entered the integer: %d\n", integer);                                         // display the integer input entered by the user
    printf("You entered the decimal number, rounded to two decimal places: %.2f\n", decimal); // display the floating-point input entered by the user, rounded to two decimal places

    return 0; // indicate successful program execution
}
