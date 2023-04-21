#include <stdio.h>

/* Instructions
   This program prompts the user to enter a number and then reads the inputted
   value into an integer variable named 'number' using scanf(). It then prints
   the inputted value using printf() with the message "The number was: " before
   the value. Finally, it returns 0 to indicate that the program has executed
   successfully. The output of the program must be exactly the same as the
   example output (the most strict comparison level).
*/

int main(void)
{
    int number;

    // Prompt user to enter a number
    printf("Enter a number:");

    // Read the inputted value into the 'number' variable using scanf()
    scanf("%d", &number);

    // Print the inputted value with the message "The number was: " before the value
    printf("The number was: %d\n", number);

    // Return 0 to indicate that the program has executed successfully
    return 0;
}
