#include <stdio.h>

int main(void)
{
    // Declare the variables
    int ones, tens;
    // Prompt the user to enter a two-digit number
    printf("Enter a two-digit number: ");
    // Read each digit of the number and store it in the corresponding variables
    scanf("%1d%1d", &tens, &ones);
    // Display the reverse of the two-digit number
    printf("Reverse: %d%d\n", ones, tens);
    return 0;
}
