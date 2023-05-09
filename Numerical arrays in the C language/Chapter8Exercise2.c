#include <stdio.h>

/*
The following is the initialisation of a 5 x 5 integer array:

int matrix[5][5] =
{
4, 6, 25, 88, 5,
34, 5, 300, 4, 65,
78, 43, 11, 90, 125,
98, 585, 12, 63, 21,
45, 35, 9, 5, 1
};

Copy the initialisation into a program that prints the array on the screen and calculates the sum of the elements. Each line shall be followed by a newline character.

Hint:
The program can be implemented using nested for statements. You can use an if statement to check whether a newline is required. The numbers on the lines of the matrix must be separated by single spaces.

Example output:
In the array:
4 6 25 88 5
34 5 300 4 65
78 43 11 90 125
98 585 12 63 21
45 35 9 5 1


the sum of the elements is 1757
The verification of program output does not account for whitespace characters like "\n", "\t" and " "
*/

int main()
{
    int matrix[5][5] =
        {
            {4, 6, 25, 88, 5},
            {34, 5, 300, 4, 65},
            {78, 43, 11, 90, 125},
            {98, 585, 12, 63, 21},
            {45, 35, 9, 5, 1}};
    int i, j;
    int sum = 0;

    printf("In the array:\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("\n");
    }

    printf("\nthe sum of the elements is %d\n", sum);

    return 0;
}
