/* Adds two fractions. */

#include <stdio.h>

int main(void)
{
    // Declare variables for integers.
    int num1, denom1, num2, denom2, result_num, result_denom;

    // Prompt the user to enter the first fraction.
    printf("Enter the first fraction: ");
    // Read the fraction entered by the user and store the numerator and denominator in the corresponding variables.
    scanf("%d/%d", &num1, &denom1);

    // Prompt the user to enter the second fraction.
    printf("Enter the second fraction: ");
    // Read the fraction entered by the user and store the numerator and denominator in the corresponding variables.
    scanf("%d/%d", &num2, &denom2);

    // Cross multiply the fractions and store the result in result_num.
    result_num = num1 * denom2 + num2 * denom1;
    // Multiply the denominators and store the result in result_denom.
    result_denom = denom1 * denom2;
    // Print the sum of the two fractions.
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}
