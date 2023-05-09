#include <stdio.h>

#define MAX_DAYS 30

int main()
{
    int num_days;
    double working_hours[MAX_DAYS];
    double total_hours = 0, avg_length;
    int i;

    // Ask the user for the number of days to calculate
    printf("The program calculates the total hours worked during\na specific period and the average length of a day.\n");
    printf("How many days: ");
    scanf("%d", &num_days);

    // Make sure the number of days is not greater than MAX_DAYS
    if (num_days > MAX_DAYS)
    {
        printf("Error: number of days cannot be greater than %d\n", MAX_DAYS);
        return 1;
    }

    // Ask the user for the working hours for each day
    for (i = 0; i < num_days; i++)
    {
        printf("Enter the working hours for day %d: ", i + 1);
        scanf("%lf", &working_hours[i]);
        total_hours += working_hours[i];
    }

    // Calculate the average length of a day
    avg_length = total_hours / num_days;

    // Print the results
    printf("Total hours worked: %.1lf\n", total_hours);
    printf("Average length of day: %.1lf\n", avg_length);
    printf("Hours entered: ");
    for (i = 0; i < num_days; i++)
    {
        printf("%.1lf ", working_hours[i]);
    }
    printf("\n");

    return 0;
}
