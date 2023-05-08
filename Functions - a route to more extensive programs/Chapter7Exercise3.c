#include <stdio.h>

/*
Write a program that takes three integers as input and prints the smallest and largest of these numbers. The main program must prompt for integers and read them. Write the functions largest() and smallest() that receive the entered numbers as their parameters. Correspondingly, the functions shall return values corresponding to their names.

Hint:
You can use combined comparisons and the if-else structure in your program.

Example output:
Enter the 1. number:12355
Enter the 2. number:32145
Enter the 3. number:22112
Among the numbers you entered,
the largest was 32145 and the smallest was 12355.
The verification of program output does not account for whitespace characters like "\n", "\t" and " "*/

#include <stdio.h>

int largest(int num1, int num2, int num3)
{
    int max = num1;
    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    return max;
}

int smallest(int num1, int num2, int num3)
{
    int min = num1;
    if (num2 < min)
    {
        min = num2;
    }
    if (num3 < min)
    {
        min = num3;
    }
    return min;
}

int main()
{
    int num1, num2, num3;
    printf("Enter the 1. number: ");
    scanf("%d", &num1);
    printf("Enter the 2. number: ");
    scanf("%d", &num2);
    printf("Enter the 3. number: ");
    scanf("%d", &num3);

    int largest_num = largest(num1, num2, num3);
    int smallest_num = smallest(num1, num2, num3);

    printf("Among the numbers you entered,\n");
    printf("the largest was %d and the smallest was %d.\n", largest_num, smallest_num);

    return 0;
}
