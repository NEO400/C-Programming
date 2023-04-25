#include <stdio.h>

/* Write a program that prompts the user for an amount in Finnish markka and converts it to euro. Finally, the program prints the amount on the screen in euro with two decimal places of precision. The euro conversion factor is 5.94573.

Hint:
You need three variables: one for the conversion factor, one for markka and one for euro. The required division can be accomplished by using the "/" character.
Example output:
Enter an amount in FIM:9.90
FIM converted to euro: 1.67
The verification of program output does not account for whitespace characters like "\n", "\t" and " "*/

int main()
{
    float conversion_factor = 5.94573; // euro conversion factor
    float markka, euro;                // variables to store amount in markka and euro

    printf("Enter an amount in FIM: ");
    scanf("%f", &markka); // read amount in markka from user

    euro = markka / conversion_factor; // convert markka to euro

    printf("FIM converted to euro: %.2f\n", euro); // display converted amount in euro with two decimal places

    return 0; // indicate successful program execution
}
