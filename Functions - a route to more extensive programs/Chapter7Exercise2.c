#include <stdio.h>

/*
Write a calculator program that calculates the sum, difference or product of two integers. The program asks for the type of calculation first (1 = sum, 2 = difference, 3 = product). After calculation, the result is printed on the screen and the program returns to prompt for the next calculation.

You should write a function for each calculation, prompting for the numbers, performing the desired calculation and printing the answer on the screen. The program is terminated by entering a negative number just like in the previous exercise.

Hint:
You can use the previous exercise as the body of your program. The functions carrying out the calculations and printing do not take any parameters or return any value.

Example output:
1: sum of two numbers
2: difference of two numbers
3: product of two numbers
<0: terminate the program
Select calculation:1
Enter the first number:55
Enter the second number:33
55 + 33 = 88

1: sum of two numbers
2: difference of two numbers
3: product of two numbers
<0: terminate the program
Select calculation:2
Enter the first number:14
Enter the second number:41
14 - 41 = -27

1: sum of two numbers
2: difference of two numbers
3: product of two numbers
<0: terminate the program
Select calculation:3
Enter the first number:4
Enter the second number:5
4 * 5 = 20

1: sum of two numbers
2: difference of two numbers
3: product of two numbers
<0: terminate the program
Select calculation:-1
Terminating the program...
The verification of program output does not account for whitespace characters like "\n", "\t" and " "*/

void sum_numbers()
{
    int num1, num2, result;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    result = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, result);
}

void difference_numbers()
{
    int num1, num2, result;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    result = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, result);
}

void product_numbers()
{
    int num1, num2, result;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    result = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, result);
}

int main()
{
    int option;
    while (1)
    {
        printf("1: sum of two numbers\n");
        printf("2: difference of two numbers\n");
        printf("3: product of two numbers\n");
        printf("<0: terminate the program\n");
        printf("Select calculation: ");
        scanf("%d", &option);
        if (option < 0)
        {
            printf("Terminating the program...\n");
            break;
        }
        switch (option)
        {
        case 1:
            sum_numbers();
            break;
        case 2:
            difference_numbers();
            break;
        case 3:
            product_numbers();
            break;
        default:
            printf("Invalid option!\n");
            break;
        }
    }
    return 0;
}
