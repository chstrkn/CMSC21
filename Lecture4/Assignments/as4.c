#include <stdio.h>

int main(void)
{
    // Declare the variables
    int base = 2, exponent, power = 1;
    // Prompt the user to enter the exponent
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    // Display the first half of the equation
    printf("%d^%d = ", base, exponent);
    // Solve for the power of two
    for (; exponent > 0; exponent--)
    {
        power *= base;
    }
    // Display the second half of the equation
    printf("%d\n", power);
    return 0;
}
