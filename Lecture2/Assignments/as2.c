#include <stdio.h>

int main(void)
{
    // Declare the variables
    int ones, tens, hundreds;
    // Prompt the user to enter a three-digit number
    printf("Enter a three-digit number: ");
    // Read each digit of the number and store it in the corresponding variables
    scanf("%1d%1d%1d", &hundreds, &tens, &ones);
    // Display the reverse of the three-digit number
    printf("Reverse: %d%d%d\n", ones, tens, hundreds);
    return 0;
}
