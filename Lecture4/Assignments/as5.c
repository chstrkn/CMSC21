#include <stdio.h>

int main(void)
{
    // Declare the variables
    int month_days, start_day;
    // Check the validity of the days
    do
    {
        // Prompt the user to enter number of days in month
        printf("Enter number of days in month: ");
        scanf("%d", &month_days);
        if (month_days < 28 || month_days > 31)
        {
            printf("Invalid input! The number of days in month must be between 28 and 31.\n");
        }
    } while (month_days < 28 || month_days > 31);
    do
    {
        // Prompt the user to enter the starting day of the week
        printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
        scanf("%d", &start_day);
        if (start_day < 1 || start_day > 7)
        {
            printf("Invalid input! The starting day of the week must be between 1 and 7.\n");
        }
    } while (start_day < 1 || start_day > 7);
    // Display the days of the calendar
    printf("Mon Tue Wed Thu Fri Sat Sun\n");
    // Display four spaces for every blank slot on the first week
    for (int day = 1; day < start_day; day++)
    {
        printf("    ");
    }
    // Display the number of days in month
    for (int day = 1; day <= month_days; day++)
    {
        // Assign three characters to each day and follow with a space
        printf("%3d ", day);
        // Go to the next line if reached the end of the current line
        if ((start_day + day - 1) % 7 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}
