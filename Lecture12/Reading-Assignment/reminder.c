/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h>

// Define the maximum number of reminders
#define MAX_REMIND 50
// Define the max length of reminder message
#define MSG_LEN 60

// Declare the functions
int read_line(char str[], int n);

int main(void)
{
    // Declare the variables
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], msg_str[MSG_LEN + 1];
    int day, i, j, num_remind = 0;

    // Repeat until the maximum number of reminders is reached
    for (;;)
    {
        // Check if there is still room for a reminder
        if (num_remind == MAX_REMIND)
        {
            printf("-- No space left --\n");
            break;
        }

        // Prompt the user to enter the day and reminder message
        printf("Enter day and reminder: ");
        // Get the user input for the day
        scanf("%2d", &day);
        // Exit the loop if the user entered zero
        if (day == 0)
            break;
        // Convert the day from int to str
        sprintf(day_str, "%2d", day);
        // Get the user input for the reminder message
        read_line(msg_str, MSG_LEN);

        // Sort the list by day
        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
                break;
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j - 1]);

        // Add the day to the reminder list
        strcpy(reminders[i], day_str);
        // Concatenate the reminder message with the day
        strcat(reminders[i], msg_str);

        // Increment num_remind to fill one space on the list
        num_remind++;
    }

    // Print the reminder list
    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    // End the program
    return 0;
}

int read_line(char str[], int n)
{
    // Declare the variables
    int ch, i = 0;

    // Read user input until a newline is reached
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    // Insert \0 at the end of the string
    str[i] = '\0';
    return i;
}
